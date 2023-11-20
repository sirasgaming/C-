// bai9
#include <iostream>
using namespace std;

int main() {
    int soTang, tongSoPhong, phongDangO, phongTrong;
    float tyLeLapDay;

    cout << "Nhap so tang cua khach san: ";
    cin >> soTang;

    tongSoPhong = 0;
    phongDangO = 0;
    phongTrong = 0;

    for (int i = 1; i <= soTang; i++) {
        int soPhong, phongChiemDung;
        cout << "Nhap so luong phong tren tang " << i << ": ";
        cin >> soPhong;
        cout << "Nhap so luong phong bi chiem dung tren tang " << i << ": ";
        cin >> phongChiemDung;

        tongSoPhong += soPhong;
        phongDangO += phongChiemDung;
        phongTrong += soPhong - phongChiemDung;
    }

    tyLeLapDay = (static_cast<float>(phongDangO) / tongSoPhong) * 100;

    cout << "Tong so phong cua khach san: " << tongSoPhong << endl;
    cout << "So phong dang o: " << phongDangO << endl;
    cout << "So phong trong: " << phongTrong << endl;
    cout << "Ty le phong bi chiem dung: " << tyLeLapDay << "%" << endl;

    return 0;
}