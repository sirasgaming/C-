// bai12
#include <iostream>

using namespace std;

int main() {
    // Khai báo biến
    double do_C, do_F;

    // Nhập nhiệt độ Celsius
    cout << "Nhap nhiet do Celsius: ";
    cin >> do_C;

    // Chuyển đổi nhiệt độ Celsius sang Fahrenheit
    do_F = (do_C * 9 / 5) + 32;

    // Hiển thị kết quả
    cout << "Nhiet do Fahrenheit tuong ung: " << do_F << " do F" << endl;

    return 0;
}