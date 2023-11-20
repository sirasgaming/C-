// cau3 2015.
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Abstract base class
class Sap {
protected:
	int sapId;
	double dienTich;
public:
	virtual double tinhTienThueSap() = 0;
	virtual double tinhThueDoanhThu() = 0;
};

// Derived class of ThucPham saps
class ThucPham :public Sap {
private:
	double tienSuDungDongLanh;
	double doanhthu;
public:
	ThucPham(int id, double dt, double tien, double doanhThu) {
		sapId = id;
		dienTich = dt;
		tienSuDungDongLanh = tien;
		doanhthu = doanhThu;
	}

	double tinhTienThueSap() {
		return dienTich * 40000000;
	}

	double tinhThueDoanhThu() {
		return doanhthu * 0.05;
	}
};

// Derived class of QuanAo saps.
class QuanAo :public Sap {
private:
	double doanhthu;
public:
	QuanAo(int id, double dt, double doanhThu) {
		sapId = id;
		dienTich = dt;
		doanhthu = doanhThu;
	}

	double tinhTienThueSap() {
		return dienTich * 40000000;
	}
	
	double tinhThueDoanhThu() {
		return doanhthu * 0.1;
	}
};

//Derived class of TrangSuc saps.
class TrangSuc :public Sap {
private:
	double doanhThu;
public:
	TrangSuc(int id, double dt, double doanhthu) {
		sapId = id;
		dienTich = dt;
		doanhThu = doanhthu;
	}

	double tinhTienThueSap() {
		return dienTich * 40000000;
	}

	double tinhThueDoanhThu() {
		if (doanhThu < 100000000) {
			return doanhThu * 0.2;
		}
		else {
			return doanhThu * 0.3;
		}
	}
};

int main() {
	vector<Sap*>danhSachSap;

	// nhap vao danh sach thong tin cac sap duoc thue
	int n;
	cout << "Nhap so luong sap:";
	cin >> n;

	for (int i = 0; i < n; i++) {
		int loaiSap;
		cout << "Nhap loai sap( 1 = Thuc Pham,2 = Quan Ao,3 = Trang Suc):";
		cin >> loaiSap;

		int id;
		double dt;
		double doanhthu;

		cout << "Nhap so thu tu sap:";
		cin >> id;
		cout << "Nhap dien tich sap:";
		cin >> dt;
		cout << "Nhap doanh thu cua sap loai" << loaiSap << ":";
		cin >> doanhthu;

		if (loaiSap == 1) {
			double tienSuDungDongLanh;
			cout << "Nhap tien su dung dich vu dong lanh:";
			cin >> tienSuDungDongLanh;

			danhSachSap.push_back(new ThucPham(id, dt, tienSuDungDongLanh, doanhthu));
		}
		else if(loaiSap == 2) {
			danhSachSap.push_back(new QuanAo(id, dt, doanhthu));
		}
		else if (loaiSap == 3) {
			danhSachSap.push_back(new TrangSuc(id, dt, doanhthu));
		}
	}

	// tinh tong cac so tien cac sap duoc thue phai dong hang nam.
	double tongTien = 0;

	for (int i = 0; i < danhSachSap.size(); i++) {
		tongTien += danhSachSap[i]->tinhTienThueSap() + danhSachSap[i]->tinhThueDoanhThu();
	}

	cout << "Tong tien cac sap duoc thue phai dong hang nam:" << fixed << setprecision(0) << tongTien << "dong" << endl;

	// Giai phong bo nho
	for (int i = 0; i < danhSachSap.size(); i++) {
		delete danhSachSap[i];
	}
	return 0;
}