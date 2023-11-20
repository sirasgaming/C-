// bai11
#include <iostream>
using namespace std;

int main() {
    int kichThuocBanDau, soNgay;
    float mucTangTrungBinh, kichThuocHienTai;

    cout << "Nhap kich thuoc ban dau cua quan the sinh vat: ";
    cin >> kichThuocBanDau;

    while (kichThuocBanDau < 2) {
        cout << "Kich thuoc ban dau phai lon hon hoac bang 2. Nhap lai: ";
        cin >> kichThuocBanDau;
    }

    cout << "Nhap muc tang dan trung binh hang ngay (tinh theo phan tram): ";
    cin >> mucTangTrungBinh;

    while (mucTangTrungBinh < 0) {
        cout << "Muc tang dan khong duoc am. Nhap lai: ";
        cin >> mucTangTrungBinh;
    }

    cout << "Nhap so ngay muon du doan: ";
    cin >> soNgay;

    while (soNgay < 1) {
        cout << "So ngay phai lon hon hoac bang 1. Nhap lai: ";
        cin >> soNgay;
    }

    kichThuocHienTai = kichThuocBanDau;

    for (int i = 1; i <= soNgay; i++) {
        kichThuocHienTai += (mucTangTrungBinh / 100) * kichThuocHienTai;
        cout << "Ngay " << i << ": Kich thuoc quan the sinh vat la " << kichThuocHienTai << endl;
    }

    return 0;
}