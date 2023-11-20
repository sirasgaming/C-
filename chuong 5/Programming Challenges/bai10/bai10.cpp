// bai10
#include <iostream>
using namespace std;

int main() {
    int soNam;
    float luongMua, tongLuongMua = 0;
    int soThang = 0;

    cout << "Nhap so nam: ";
    cin >> soNam;

    while (soNam < 1) {
        cout << "So nam phai lon hon hoac bang 1. Nhap lai: ";
        cin >> soNam;
    }

    for (int i = 1; i <= soNam; i++) {
        cout << "Nhap luong mua cho nam thu " << i << endl;

        for (int j = 1; j <= 12; j++) {
            cout << "Nhap luong mua cho thang " << j << " (inch): ";
            cin >> luongMua;

            while (luongMua < 0) {
                cout << "Luong mua khong duoc am. Nhap lai: ";
                cin >> luongMua;
            }

            tongLuongMua += luongMua;
            soThang++;
        }
    }

    float luongMuaTrungBinh = tongLuongMua / soThang;

    cout << "Tong so thang: " << soThang << endl;
    cout << "Tong luong mua (inch): " << tongLuongMua << endl;
    cout << "Luong mua trung binh moi thang: " << luongMuaTrungBinh << " inch" << endl;

    return 0;
}