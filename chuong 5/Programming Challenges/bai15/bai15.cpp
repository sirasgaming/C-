// bai15
#include <iostream>
using namespace std;

int main() {
    int soNhanVien;
    double tongLuong, thueTieuBang, thueLienBang, khauTruFICA;

    cout << "Nhap so nhan vien (nhap 0 de ket thuc): ";
    cin >> soNhanVien;

    while (soNhanVien != 0) {
        cout << "Nhap tong luong: ";
        cin >> tongLuong;

        while (tongLuong < 0) {
            cout << "Tong luong khong hop le. Nhap lai: ";
            cin >> tongLuong;
        }

        cout << "Nhap thue tieu bang: ";
        cin >> thueTieuBang;

        while (thueTieuBang < 0 || thueTieuBang > tongLuong) {
            cout << "Thue tieu bang khong hop le. Nhap lai: ";
            cin >> thueTieuBang;
        }

        cout << "Nhap thue lien bang: ";
        cin >> thueLienBang;

        while (thueLienBang < 0 || thueLienBang > tongLuong) {
            cout << "Thue lien bang khong hop le. Nhap lai: ";
            cin >> thueLienBang;
        }

        cout << "Nhap khau tru FICA: ";
        cin >> khauTruFICA;

        while (khauTruFICA < 0 || khauTruFICA > tongLuong) {
            cout << "Khau tru FICA khong hop le. Nhap lai: ";
            cin >> khauTruFICA;
        }

        double thanhToanRong = tongLuong - thueTieuBang - thueLienBang - khauTruFICA;

        if (thanhToanRong < 0) {
            cout << "Loi: Tong thuế vượt quá tổng lương." << endl;
        }
        else {
            cout << "Bao cao bao gom:" << endl;
            cout << "Tong so tien luong gop: " << tongLuong << endl;
            cout << "Thue tieu bang: " << thueTieuBang << endl;
            cout << "Thue lien bang: " << thueLienBang << endl;
            cout << "Khau tru FICA: " << khauTruFICA << endl;
            cout << "Thanh toan rong: " << thanhToanRong << endl;
        }

        cout << "Nhap so nhan vien (nhap 0 de ket thuc): ";
        cin >> soNhanVien;
    }

    return 0;
}