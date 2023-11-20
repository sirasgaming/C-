// bai11
#include <iostream>
#include <string>
using namespace std;

// Khai báo cấu trúc NganSachHangThang
struct NganSachHangThang {
    double nhaO;
    double tienIch;
    double chiTieuGiaDinh;
    double vanChuyen;
    double doAn;
    double yTe;
    double baoHiem;
    double giaiTri;
    double quanAo;
    double khac;
};

// Hàm nhập số tiền chi tiêu vào từng hạng mục ngân sách
void nhapNganSach(NganSachHangThang& nganSach) {
    cout << "Nhap so tien chi tieu cho cac hang muc ngan sach hang thang:" << endl;
    cout << "Nha o: ";
    cin >> nganSach.nhaO;
    cout << "Tien ich: ";
    cin >> nganSach.tienIch;
    cout << "Chi tieu gia dinh: ";
    cin >> nganSach.chiTieuGiaDinh;
    cout << "Van chuyen: ";
    cin >> nganSach.vanChuyen;
    cout << "Do an: ";
    cin >> nganSach.doAn;
    cout << "Y te: ";
    cin >> nganSach.yTe;
    cout << "Bao hiem: ";
    cin >> nganSach.baoHiem;
    cout << "Giai tri: ";
    cin >> nganSach.giaiTri;
    cout << "Quan ao: ";
    cin >> nganSach.quanAo;
    cout << "Khac: ";
    cin >> nganSach.khac;
}

// Hàm hiển thị báo cáo về ngân sách
void hienThiBaoCao(const NganSachHangThang& nganSach) {
    cout << "Bao cao ngan sach hang thang:" << endl;
    cout << "Nha o: " << (nganSach.nhaO >= 500.0 ? "Tren hoac bang" : "Duoi") << endl;
    cout << "Tien ich: " << (nganSach.tienIch >= 150.0 ? "Tren hoac bang" : "Duoi") << endl;
    cout << "Chi tieu gia dinh: " << (nganSach.chiTieuGiaDinh >= 65.0 ? "Tren hoac bang" : "Duoi") << endl;
    cout << "Van chuyen: " << (nganSach.vanChuyen >= 50.0 ? "Tren hoac bang" : "Duoi") << endl;
    cout << "Do an: " << (nganSach.doAn >= 250.0 ? "Tren hoac bang" : "Duoi") << endl;
    cout << "Y te: " << (nganSach.yTe >= 30.0 ? "Tren hoac bang" : "Duoi") << endl;
    cout << "Bao hiem: " << (nganSach.baoHiem >= 100.0 ? "Tren hoac bang" : "Duoi") << endl;
    cout << "Giai tri: " << (nganSach.giaiTri >= 150.0 ? "Tren hoac bang" : "Duoi") << endl;
    cout << "Quan ao: " << (nganSach.quanAo >= 75.0 ? "Tren hoac bang" : "Duoi") << endl;
    cout << "Khac: " << (nganSach.khac >= 50.0 ? "Tren hoac bang" : "Duoi") << endl;

    double tongNganSach = nganSach.nhaO + nganSach.tienIch + nganSach.chiTieuGiaDinh +
        nganSach.vanChuyen + nganSach.doAn + nganSach.yTe + nganSach.baoHiem +
        nganSach.giaiTri + nganSach.quanAo + nganSach.khac;

    cout << "Tong ngan sach hang thang: " << (tongNganSach >= 1365.0 ? "Tren hoac bang" : "Duoi") << endl;
    ```cpp
        // Hàm main
        int main() {
        NganSachHangThang nganSach;

        // Nhập số tiền chi tiêu vào từng hạng mục ngân sách
        nhapNganSach(nganSach);

        // Hiển thị báo cáo về ngân sách
        hienThiBaoCao(nganSach);

        return 0;
    }