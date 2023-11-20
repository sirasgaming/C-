// cau2 2013.
// ví dụ cụ thể có minh họa bằng mã nguồn.
#include <iostream>

using namespace std;

class Boss {
public:
	Boss() {
		cout << "ham tao cua Boss" << endl;
	}
	
	// Ham huy ao
	virtual ~Boss() {
		cout << "Ham huy cua Boss" << endl;
	}
};

class Derive:public Boss {
public:
	Derive() {
		cout << "Ham tao cua Derive" << endl;
	}

	// Ham huy
	~Derive() {
		cout << "Ham huy cua Derive" << endl;
	}
};

int main() {
	Boss* obj = new Derive(); // O day xay ra mat di mot phan thong tin neu khong co ham huy ao.
	delete obj; // doi tuong cha chi giai phong phan cua no, khong giai phong cua doi tuong con.

	return 0;
}