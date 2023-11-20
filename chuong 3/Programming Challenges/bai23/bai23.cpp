// bai23
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    int so_luong_mua = 1000;
    double gia_mua = 45.50;
    double phi_mua = gia_mua * so_luong_mua * 0.02;

    int so_luong_ban = 1000;
    double gia_ban = 56.90;
    double phi_ban = gia_ban * so_luong_ban * 0.02;

    // Tính toán thông tin
    double tong_tien_mua = gia_mua * so_luong_mua;
    double tong_tien_ban = gia_ban * so_luong_ban;
    double loi_nhuan = tong_tien_ban - tong_tien_mua - phi_mua - phi_ban;

    // Hiển thị thông tin
    cout << fixed << setprecision(2);
    cout << "So tien Joe tra de mua co phieu: $" << tong_tien_mua << endl;
    cout << "So tien hoa hong Joe tra khi mua co phieu: $" << phi_mua << endl;
    cout << "So tien Joe da ban co phieu: $" << tong_tien_ban << endl;
    cout << "So tien hoa hong Joe tra khi ban co phieu: $" << phi_ban << endl;
    cout << "So tien loi nhuan Joe sau khi ban co phieu: $" << loi_nhuan << endl;

    return 0;
}