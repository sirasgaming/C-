// cau1b 2013.
// cài đặt mã cho các thao tác kể trên:

SoPhuc::SoPhuc() {
	a = 0;
	b = 0;
}

SoPhuc::SoPhuc(int x, int y) {
	a = x;
	b = y;
}

void SoPhuc::nhap() {
	cout << "Nhap phan thuc:";
	cin >> a;
	cout << "Nhap phan ao:";
	cin >> b;
}

void SoPhuc::xuat() {
	if (a != 0 && b != 0) {
		cout << a << "+" << b << sqrt(7);
	}
	else if (a != 0 && b != 0 && b < 0) {
		cout << a << "" << b << sqrt(7);
	}
	else if (a != 0 && b == 0) {
		cout << a;
	}
	else if (a == 0 && b != 0) {
		cout << b << sqrt(7);
	} 
	else {
		cout << "0";
	}
	cout << endl;
}

SoPhuc SoPhuc::operator + (const SoPhuc& other) {
	SoPhuc tong;
	tong.a = a + other.a;
	tong.b = b + other.b;
	return tong;
}

SoPhuc SoPhuc::operator - (const SuPhuc& other) {
	SoPhuc hieu;
	hieu.a = a - other.a;
	hieu.b = b - other.b;
	return hieu;
}


SoPhuc SoPhuc::operator -() {
	SoPhuc doidau;
	doidau.a = -a;
	doidau.b = -b;
	return doidau;
}

SoPhuc SoPhuc::operator * (const SoPhuc& other) {
	SoPhuc nhan;
	nhan.a = (a * other.a) + (7 * b * other.b);
	nhan.b = (a * other.b) + (b * other.a);
	return nhan;
}
// viet them ham main

int main() {
	SoPhuc so1, so2, res;
	cout << "Nhap so thu 1:" << endl;
	so1.nhap();
	cout << "Nhap so thu 2:" << endl;
	so2.nhap();

	// tinh tong
	res = so1 + so2;
	cout << "Tong:";
	res.xuat();
	 
	// tinh hieu
	res = so1 - so2;
	cout << "hieu";
	res.xuat();

	// phep doi dau
	res = -so1;
	cout << "doi dau:";
	res.xuat();

	// phep nhan
	res = so1 * so2;
	cout << "Nhan:";
	res.xuat();
}