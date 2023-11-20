// bai1
#include <iostream>

using namespace std;

int main() {
    // Khai báo biến
    double gallon_xang, so_dam;

    // Nhập số gallon xăng và số dặm từ người dùng
    cout << "Nhap so gallon xang ma chiec xe co the chua duoc: ";
    cin >> gallon_xang;

    cout << "Nhap so dam chiec xe co the di duoc tren mot chiec xe tang day du: ";
    cin >> so_dam;

    // Tính số km có thể đi được trên mỗi gallon xăng
    double km_tren_gallon = so_dam * 1.60934 / gallon_xang;

    // Hiển thị kết quả
    cout << "So km co the di duoc tren moi gallon xang: " << km_tren_gallon << endl;

    return 0;
}
