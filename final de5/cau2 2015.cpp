﻿// cau2 2015.
// cài đặt lớp BigInteger
#include <iostream>
#include <string.h>

using namespace std;

class BigInteger {
private:
	string res;
public:
	BigInteger() {
		res = "";
	}
	BigInteger(string s) {
		res = s;
	}

	friend istream& operator >> (istream& in, BigInteger& other) {
		in >> other.res;
		return in;
	}

	friend ostream& operator << (ostream& out, BigInteger other) {
		out << other.res;
		return out;
	}

	bool operator == (const BigInteger& other) {
		return res == other.res;
	}
};

int main() {
	BigInteger n1(" 1234567891011 "); // Khởi tạo từ chuỗi.
	BigInteger n2; // Khởi tạo mặc định = 0.
	cout << "Input an integer = ";
	cin >> n2; // Nhập giá trị từ bàn phím.
	if (n1 == n2) {// So sánh bằng nhau.
		cout << "Equal.\n";
	}
	else {
		cout << "Not equal.\n";
	}
}