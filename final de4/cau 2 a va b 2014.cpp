// cau 2 a va b 2014
// gộp câu 2 a và b lại 
#include <iostream>
#include <string.h>

using namespace std;

class IFace {
public:
	virtual void show() = 0;
	virtual IFace* clone() = 0;
	virtual ~IFace() {
	}
};

class Face : public IFace {
private:
	string shape;
protected:
	string getShape() {
		return shape;
	}
public:
	Face(string sh) : shape(sh) {
	}
	virtual void show() {
		cout << "Shape: " << shape << endl;
	}
};

class EyedFace:public Face {
private:
	int eyes;
public:
	EyedFace(string sh, int e): Face(sh), eyes(e){}

	IFace* clone() override {
		return new EyedFace(*this);
	}
	void show() {
		cout << "Shape:" << getShape() << "Eyes:" << eyes << endl;
	}
};

void testFace(IFace* fc) {
	IFace* a[3] = { fc, fc->clone(), fc->clone() };
	for (int i = 0; i < 3; i++) {
		a[i]->show();
	}
	cout << "The same 3 lines ? ";
}

int main() {
	EyedFace fc1("Rectangle ", 2); // 2 la con mat
	testFace(&fc1);
	return 0;
}