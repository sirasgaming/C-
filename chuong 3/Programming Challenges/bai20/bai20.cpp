// bai20
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    const double PI = 3.14159;
    double duong_kinh, dien_tich, so_lat;

    // Nhập đường kính từ người dùng
    cout << "Nhap duong kinh cua banh pizza (inch): ";
    cin >> duong_kinh;

    // Tính diện tích và số lát
    dien_tich = PI * pow(duong_kinh / 2, 2);
    so_lat = dien_tich / 14.125;

    // Hiển thị thông báo với số lát làm tròn đến một chữ số thập phân
    cout << fixed << setprecision(1);
    cout << "So lat banh pizza: " << so_lat << endl;

    return 0;
}