// bai14
#include <iostream>
#include <string>
using namespace std;

int main() {
    int soLuongHocSinh;
    string tenDau, tenCuoi;

    cout << "Nhap so luong hoc sinh trong lop (tu 1 den 25): ";
    cin >> soLuongHocSinh;

    while (soLuongHocSinh < 1 || soLuongHocSinh > 25) {
        cout << "So luong hoc sinh khong hop le. Nhap lai: ";
        cin >> soLuongHocSinh;
    }

    for (int i = 0; i < soLuongHocSinh; i++) {
        string ten;
        cout << "Nhap ten hoc sinh thu " << i + 1 << ": ";
        cin >> ten;

        if (i == 0) {
            tenDau = ten;
            tenCuoi = ten;
        }
        else {
            if (ten < tenDau) {
                tenDau = ten;
            }

            if (ten > tenCuoi) {
                tenCuoi = ten;
            }
        }
    }

    cout << "Hoc sinh o dau dong: " << tenDau << endl;
    cout << "Hoc sinh o cuoi dong: " << tenCuoi << endl;

    return 0;
}