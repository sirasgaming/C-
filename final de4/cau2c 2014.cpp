// cau2c 2014.
#include <iostream>
#include <string>

using namespace std;

class IFace {
public:
    virtual void show() = 0;
    virtual IFace* clone() const = 0;
    virtual ~IFace() {}
};

class Face : public IFace {
private:
    string shape;

public:
    Face(string sh) : shape(sh) {}

    virtual void show() {
        cout << "Shape: " << shape << endl;
    }

protected:
    string getShape() const {
        return shape;
    }
};

class EyedFace : public Face {
private:
    int eyes;
    static int count;

public:
    EyedFace(string sh, int e) : Face(sh), eyes(e) {
        count++;
    }

    ~EyedFace() {
        count--;
    }

    IFace* clone() const override {
        EyedFace* clonedFace = new EyedFace(getShape(), eyes);
        return clonedFace;
    }


    void show() override {
        cout << "Shape:" << getShape() << " Eyes:" << eyes << endl;
    }

    static int getCount() {
        return count;
    }
};


int EyedFace::count = 0;

void testFace(IFace* fc) {
    IFace* a[3];
    a[0] = fc;
    a[1] = a[0]->clone();
    a[2] = a[0]->clone();

    for (int i = 0; i < 3; i++) {
        a[i]->show();
    }

    cout << "The same 3 lines ? ";

   // cout << "Total EyedFace objects:" << EyedFace::getCount() << endl;

    //    for (int i = 1; i < 3; i++) {
    //        delete a[i];
    //    }
    //
    //    delete a[0];

}

int main() {
    EyedFace fc1("Rectangle ", 2);
    testFace(&fc1);
    cout << "Total EyedFace objects:" << EyedFace::getCount() << endl;
    return 0;
}