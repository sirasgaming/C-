// bai4
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    string thang1, thang2, thang3;
    double luong_mua1, luong_mua2, luong_mua3;

    // Nhập tên và lượng mưa của từng tháng
    cout << "Nhap ten cua thang 1: ";
    cin >> thang1;

    cout << "Nhap luong mua (inch) cua thang 1: ";
    cin >> luong_mua1;

    cout << "Nhap ten cua thang 2: ";
    cin >> thang2;

    cout << "Nhap luong mua (inch) cua thang 2: ";
    cin >> luong_mua2;

    cout << "Nhap ten cua thang 3: ";
    cin >> thang3;

    cout << "Nhap luong mua (inch) cua thang 3: ";
    cin >> luong_mua3;

    // Tính lượng mưa trung bình
    double luong_mua_trung_binh = (luong_mua1 + luong_mua2 + luong_mua3) / 3.0;

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "Luong mua trung binh trong " << thang1 << ", " << thang2 << " va " << thang3 << " la " << luong_mua_trung_binh << " inch." << endl;

    return 0;
}