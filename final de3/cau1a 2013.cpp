// cau1a 2013.
// khai báo lớp đối tượng và các thao tác cho kiểu số này:
#include <iostream>

using namespace std;

class SoPhuc {
private:
	int a, b;
public:
	SoPhuc();
	SoPhuc(int x, int y);
	void nhap();
	void xuat();
	SoPhuc operator + (const SoPhuc& other);
	SuPhuc operator - (const SoPhuc& other);
	SoPhuc operator - ();
	SoPhuc operator * (const SoPhuc& other);

};