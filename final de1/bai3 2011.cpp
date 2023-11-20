// bai3 2011.
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class MayLoc {
protected:
	float congSuat;
public:
	MayLoc(float congSuat) : congSuat(congSuat) {}
		virtual ~MayLoc(){}

		virtual float tinhLuongNuoc() const = 0;
		virtual float tinhChiPhi() const = 0;
};

class MayLyTam :public MayLoc {
private:
	float tocDoHaoXang;
	float thoiGianSuDung;
public:
	MayLyTam(float congSuat, float tocDoHaoXang, float thoiGianSuDung) :  MayLoc(congSuat),tocDoHaoXang(tocDoHaoXang),thoiGianSuDung(thoiGianSuDung){}
	float tinhLuongNuoc() const override {
		return congSuat * thoiGianSuDung;
	}
	float tinhChiPhi() const override {
		return tocDoHaoXang * 20000 + thoiGianSuDung * 50000;
	}
};

class MayXucTac : public MayLoc {
private:
	float luongHoaChat;
	float thoiGianSuDung;
public:
	MayXucTac(float congSuat, float luongHoaChat, float ThoiGianSuDung) : MayLoc(congSuat), luongHoaChat(luongHoaChat), thoiGianSuDung(thoiGianSuDung){}

	float tinhLuongNuoc() const override {
		float congSuatThucTe = congSuat;

		if (thoiGianSuDung < 10) {
			congSuatThucTe = congSuat * (luongHoaChat / 100);
		}
		else {
			congSuatThucTe = congSuat * (luongHoaChat / 100) * (thoiGianSuDung / 10);
		}
		return congSuatThucTe * thoiGianSuDung;
	}
	float tinhChiPhi() const override {
		return thoiGianSuDung * 80000 + luongHoaChat * 10000;
	}
};

int main() {
	int N; // so may loc
		cout << "Nhap so may loc:"; 
		cin >> N;

	vector <MayLoc*>danhSachMayLoc;

	for (int i = 0; i < N; i++) {
		int loaiMay;
		float congSuat, luongHoaChat, thoiGianSuDung, tocDoHaoXang;

		cout << "Nhap loai may(1- May Ly Tam, 2- May Xuc Tac):";
		cin >> loaiMay;

		cout << "Nhap cong suat may(m^3/h):";
		cin >> congSuat;

		if (loaiMay == 1) {
			cout << "Nhap toc do hao xang(lit/h):";
			cin >> tocDoHaoXang;
			cout << "Nhap thoi gian su dung(h):";
			cin >> thoiGianSuDung;
		danhSachMayLoc.push_back(new MayLyTam(congSuat, tocDoHaoXang, thoiGianSuDung));
		}
		else {
			cout << "Nhap luong hoa Chat(g):";
			cin >> luongHoaChat;
			cout << "Nhap thoi gian su dung(h):";
			cin >> thoiGianSuDung;
			danhSachMayLoc.push_back(new MayXucTac(congSuat, luongHoaChat, thoiGianSuDung));
		}
	}

	float luongNuoc;
	cout << "NHap luong nuoc(m^3):";
	cin >> luongNuoc;

	float luongNuoclocDuoc = 0;
	float tongChiPhi = 0;

	for (MayLoc* mayLoc : danhSachMayLoc) {
		luongNuoclocDuoc += mayLoc->tinhLuongNuoc();
		tongChiPhi += mayLoc->tinhChiPhi();
	}

	if (luongNuoclocDuoc >= luongNuoc) {
		cout << "Hut duoc het nuoc trong ao" << endl;
	}
	else {
		cout << "Khong hut het duoc nuoc trong ao" << endl;
	}

	cout << "Tong chi phi su dung cua may loc:" << fixed << setprecision(0) << tongChiPhi << " dong" << endl;
	
	for (MayLoc* mayLoc : danhSachMayLoc) {
		delete mayLoc;// giai phong bo nho.
	}
	return 0;
}
