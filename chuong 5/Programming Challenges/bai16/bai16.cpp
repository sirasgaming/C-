// bai16
#include <iostream>
using namespace std;

int main() {
    double laiSuatHangNam, soDuBanDau;
    int soThang;

    cout << "Nhap lai suat hang nam (%): ";
    cin >> laiSuatHangNam;

    while (laiSuatHangNam < 0) {
        cout << "Lai suat khong hop le. Nhap lai: ";
        cin >> laiSuatHangNam;
    }

    cout << "Nhap so du ban dau: ";
    cin >> soDuBanDau;

    while (soDuBanDau < 0) {
        cout << "So du khong hop le. Nhap lai: ";
        cin >> soDuBanDau;
    }

    cout << "Nhap so thang da troi qua: ";
    cin >> soThang;

    while (soThang < 0) {
        cout << "So thang khong hop le. Nhap lai: ";
        cin >> soThang;
    }

    double laiSuatHangThang = laiSuatHangNam / 12;
    double soDu = soDuBanDau;
    double tongTienGui = 0;
    double tongTienRut = 0;
    double tongTienLai = 0;

    for (int i = 1; i <= soThang; i++) {
        double tienGui, tienRut;

        cout << "Nhap so tien gui trong thang " << i << ": ";
        cin >> tienGui;

        while (tienGui < 0) {
            cout << "So tien gui khong hop le. Nhap lai: ";
            cin >> tienGui;
        }

        cout << "Nhap so tien rut trong thang " << i << ": ";
        cin >> tienRut;

        while (tienRut < 0) {
            cout << "So tien rut khong hop le. Nhap lai: ";
            cin >> tienRut;
        }

        soDu += tienGui - tienRut;
        tongTienGui += tienGui;
        tongTienRut += tienRut;
        double tienLai = soDu * laiSuatHangThang;
        soDu += tienLai;
        tongTienLai += tienLai;
    }

    cout << "Bao cao bao gom:" << endl;
    cout << "So du cuoi ky: " << soDu << endl;
    cout << "Tong so tien gui: " << tongTienGui << endl;
    cout << "Tong so tien rut: " << tongTienRut << endl;
    cout << "Tong tien lai: " << tongTienLai << endl;

    return 0;
}