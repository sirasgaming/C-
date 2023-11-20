// bai5
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    int so_nam, so_nu;

    // Nhập số nam và số nữ
    cout << "Nhap so nam da dang ky: ";
    cin >> so_nam;

    cout << "Nhap so nu da dang ky: ";
    cin >> so_nu;

    // Tính tỷ lệ nam và nữ trong lớp
    double ty_le_nam = static_cast<double>(so_nam) / (so_nam + so_nu);
    double ty_le_nu = static_cast<double>(so_nu) / (so_nam + so_nu);

    // Hiển thị kết quả
    cout << fixed << setprecision(1);
    cout << "Ty le nam trong lop: " << ty_le_nam * 100 << "%" << endl;
    cout << "Ty le nu trong lop: " << ty_le_nu * 100 << "%" << endl;

    return 0;
}