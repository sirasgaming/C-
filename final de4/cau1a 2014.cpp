// Câu 1 a đề 2014
#include <iostream>
#include <string.h>

using namespace std;

class Bike {
private:
	char* brand; //Hieu xe
public:
	Bike() {
		brand = NULL;
	}

	// Ham tao
	Bike(const char* b) {
		brand = new char[strlen(b) + 1]; // them ki tu NULL o ben phai +1.
		
	}

	// Ham sao chep
	Bike(const Bike& other) {
		brand = new char[strlen(other.brand) + 1];
		
	}

	Bike& operator = (const Bike& other) { // phuong thuc sao chep
		if (this != &other) {
			delete[] brand; // Giai phong bo nho dong cua brand khi doi tuong phuong thuc(this) va doi tuong sao chep(other) khac nhau.
			brand = new char[strlen(other.brand) + 1];
			
		}
		return *this;
	}

	virtual void move(int t1) {
		if (brand) {
			cout << brand << ":" << t1 * 12 << " ";
		}
		else {
			cout << ":" << t1 * 12 << endl;
		}
	}
	// Ham huy
	virtual ~Bike() {
		delete[] brand;
	}
};
class EBike : public Bike {
public: 
	void move(int t2) {
	Bike::move(t2 * 2);
}
};

void display(Bike& a, EBike& b) {
	a.Bike::move(2);
	b.move(2);
}

int main() {
	EBike b1, b2;
	display(b1, b2);
	return 0;
}