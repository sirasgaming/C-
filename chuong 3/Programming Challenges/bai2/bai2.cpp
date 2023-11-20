// bai2
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    int so_ve_A, so_ve_B, so_ve_C;
    double gia_ve_A = 15.0, gia_ve_B = 12.0, gia_ve_C = 9.0;

    // Nhập số vé bán ra cho mỗi hạng ghế
    cout << "Nhap so ve ban ra cho hang ghe A: ";
    cin >> so_ve_A;

    cout << "Nhap so ve ban ra cho hang ghe B: ";
    cin >> so_ve_B;

    cout << "Nhap so ve ban ra cho hang ghe C: ";
    cin >> so_ve_C;

    // Tính thu nhập từ việc bán vé
    double thu_nhap = so_ve_A * gia_ve_A + so_ve_B * gia_ve_B + so_ve_C * gia_ve_C;

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "Thu nhap tu viec ban ve: $" << thu_nhap << endl;

    return 0;
}