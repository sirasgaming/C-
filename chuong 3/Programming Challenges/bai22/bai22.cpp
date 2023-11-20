// bai22
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    double goc, sin_goc, cos_goc, tan_goc;

    // Nhập góc từ người dùng
    cout << "Nhap goc (radian): ";
    cin >> goc;

    // Tính sin, cos và tan của góc
    sin_goc = sin(goc);
    cos_goc = cos(goc);
    tan_goc = tan(goc);

    // Hiển thị kết quả với độ chính xác 4 chữ số thập phân
    cout << fixed << setprecision(4);
    cout << "Sin(" << goc << ") = " << sin_goc << endl;
    cout << "Cos(" << goc << ") = " << cos_goc << endl;
    cout << "Tan(" << goc << ") = " << tan_goc << endl;

    return 0;
}