// Tập tin PhanSo.h
#ifndef _PhanSo_h
#define _PhanSo_h
#include <iostream>
using namespace std;
class PhanSo {
private:
	int tu, mau;
public:
	PhanSo();
	PhanSo(int t, int m);//contructor voi tham so
	friend ostream& operator << (ostream& out, const PhanSo ps); //Toan tu xuat
	PhanSo operator + (const PhanSo& ps); // toan tu cong so nguyen
	PhanSo operator + (int res);
	PhanSo& operator ++(); // toan tu tang++ (tien to)
	PhanSo operator += (const PhanSo& ps); // toan tu cong va gan +=
	operator int() const; // chuyen doi tu phan so sang int
};
#endif