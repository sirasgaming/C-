// bai18
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    double von_goc, lai_suat, so_lan_gop;
    double so_tien, lai, tong_tien;

    // Nhập thông tin từ người dùng
    cout << "Nhap von goc: $";
    cin >> von_goc;

    cout << "Nhap lai suat (%): ";
    cin >> lai_suat;

    cout << "Nhap so lan gop: ";
    cin >> so_lan_gop;

    // Tính toán tiền lãi và số tiền tiết kiệm
    lai_suat /= 100; // Chuyển đổi lãi suất từ phần trăm sang tỷ lệ
    so_tien = von_goc * (1 + lai_suat / so_lan_gop);
    lai = so_tien - von_goc;
    tong_tien = von_goc + lai;

    // Hiển thị báo cáo
    cout << fixed << setprecision(2);
    cout << "Lai suat: " << lai_suat * 100 << "%" << endl;
    cout << "So lan gop: " << so_lan_gop << endl;
    cout << "Von goc: $" << von_goc << endl;
    cout << "Lai: $" << lai << endl;
    cout << "So tien tiet kiem: $" << tong_tien << endl;

    return 0;
}