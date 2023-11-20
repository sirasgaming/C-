// bai14
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Khai báo biến
    string thang;
    int nam;
    double tong_tien_thu_duoc;

    // Nhập thông tin
    cout << "Nhap thang: ";
    getline(cin, thang);

    cout << "Nhap nam: ";
    cin >> nam;

    cout << "Nhap tong so tien thu duoc: $";
    cin >> tong_tien_thu_duoc;

    // Tính toán thuế bán hàng của quận và của tiểu bang
    double thue_quan = tong_tien_thu_duoc * 0.02;
    double thue_tieu_bang = tong_tien_thu_duoc * 0.04;

    // Tính toán doanh thu
    double doanh_thu = tong_tien_thu_duoc / 1.06;

    // Hiển thị báo cáo
    cout << "Thang: " << thang << endl;
    cout << "---------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Tong so tien thu duoc: $" << tong_tien_thu_duoc << endl;
    cout << "Doanh thu: $" << doanh_thu << endl;
    cout << "Thue ban hang cua quan: $" << thue_quan << endl;
    cout << "Thue ban hang cua tieu bang: $" << thue_tieu_bang << endl;
    cout << "Tong thue ban hang: $" << thue_quan + thue_tieu_bang << endl;

    return 0;
}