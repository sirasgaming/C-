PhanSo::PhanSo() {
	// contructor mac dinh, co the khoi tao gia tri tu va mau cho truoc.
	tu = 0;
	mau = 1;
} 


PhanSo::PhanSo(int t, int m) {
	// contructor voi tham so, khoi tao phan so tu tu va mau cho truoc.
	tu = t;
	mau = m;
}


ostream& operator << (ostream& out, const PhanSo& ps) {
	// toan tu xuat
	out << ps.tu << / << ps.mau;
	return out;
}


PhanSo PhanSo::operator + (const PhanSo& ps) {
	//toan tu cong +
	tong.tu = this->tu * ps.mau + this->mau * ps.tu;
	tong.mau = this->mau * ps.mau;
	return tong;
}

PhanSo PhanSo::operator + (int res) {
	// toan tu cong so nguyen
	PhanSo tong;
	tong.tu = this->tu + res * this->mau;
	tong.mau = this->mau;
	return tong;
}

PhanSo& PhanSo::operator++() {
	// toan tu tang ++ (tien to)
	this->tu = this->tu + this->mau;
	return *this;
}

PhanSo& PhanSo::operator+= (const PhanSo& ps) {
	//toan tu cong va gan
	
	this->tu = this->tu * ps.mau + ps.tu * this->mau;
	this->mau = this->mau * ps.mau;
	return *this;
}

PhanSo::operator int() {
	// chuyen doi tu phan so sang int, lay phan nguyen cua phan so
	return tu / mau;
}
