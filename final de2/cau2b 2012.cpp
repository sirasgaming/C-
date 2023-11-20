// câu 2 b 2012 ví dụ mã nguồn 
#include <iostream>

using namespace std;

// Lop truu tuong

class VN {
public:
	void displayInfo() {
		cout << "I love VIETNAM" << endl;

	}
};

//lop con ke thua tu lop truu tuong

class UTE :public VN {
public:
	void show() {
		cout << "I love UTE" << endl;
	}

	void display() {
		cout << "I love HN" << endl;
	}
};

int main() {
	// Khong the tao doi tuong tu lop truu tuong
	// VN* vn = new VN(); // loi!

	UTE ute;
	ute.show();
	ute.display();
	ute.displayInfo();

	return 0;
}