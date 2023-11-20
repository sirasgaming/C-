// bai7
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int soNgay = 0;

    // Nhập số ngày từ người dùng
    while (soNgay < 1) {
        cout << "nhap so ngay lam vc: ";
        cin >> soNgay;

        if (soNgay < 1) {
            cout << "nhap so >= 1 ngay lam vc" << endl;
        }
    }

    // Hiển thị tiêu đề
    cout << "ngay\t\tmuc luong" << endl;
    cout << "-------------------------" << endl;

    // Tính và hiển thị mức lương cho mỗi ngày
    double luong = 0.01;
    double tongLuong = 0.0;
    for (int ngay = 1; ngay <= soNgay; ngay++) {
        cout << ngay << "\t\t$" << luong << endl;
        tongLuong += luong;
        luong *= 2; // Tăng mức lương gấp đôi
    }

    // Hiển thị tổng số tiền lương
    cout << "-------------------------" << endl;
    cout << "tong tien luong: $" << tongLuong << endl;

    return 0;
}