// bai21
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    const double PI = 3.14159;
    double duong_kinh, dien_tich, so_lat, so_nguoi, so_pizza;

    // Nhập số người và đường kính từ người dùng
    cout << "Nhap so nguoi tham du bua tiec: ";
    cin >> so_nguoi;

    cout << "Nhap duong kinh cua banh pizza (inch): ";
    cin >> duong_kinh;

    // Tính diện tích và số lát
    dien_tich = PI * pow(duong_kinh / 2, 2);
    so_lat = dien_tich / 14.125;

    // Tính số lượng pizza cần mua
    so_pizza = ceil((so_nguoi * 4) / so_lat);

    // Hiển thị số lượng pizza cần mua
    cout << "So luong pizza can mua: " << so_pizza << endl;

    return 0;
}