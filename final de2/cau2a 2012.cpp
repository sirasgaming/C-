// câu 2 a vi du ma nguon
#include <iostream>

using namespace std;

// Da hinh dong
class VN {
public:
	virtual void show() {
		cout << "I love VIETNAM" << endl;
	}
};

class UTE:public VN {
public:
	void show() {
		cout << "I love UTE" << endl;
	}
};

class LAO:public VN {
public:
	void show() {
		cout << "I love LAO" << endl;
	}
};

int main() {
	VN* vn1 = new UTE();
	VN* vn2 = new LAO();

	vn1->show(); // I love UTE.
	vn2->show(); // Ilove LAO.

	delete vn1;
	delete vn2;
	
	return 0;
}