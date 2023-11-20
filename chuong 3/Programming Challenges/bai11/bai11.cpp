// bai11
#include <iostream>

using namespace std;

int main() {
    // Khai báo biến
    double chi_phi_vay, chi_phi_bao_hiem, chi_phi_xang, chi_phi_dau, chi_phi_lop, chi_phi_bao_duong;
    double tong_chi_phi_hang_thang, tong_chi_phi_hang_nam;

    // Nhập các chi phí hàng tháng
    cout << "Nhap chi phi thanh toan khoan vay hang thang: $";
    cin >> chi_phi_vay;

    cout << "Nhap chi phi bao hiem hang thang: $";
    cin >> chi_phi_bao_hiem;

    cout << "Nhap chi phi xang hang thang: $";
    cin >> chi_phi_xang;

    cout << "Nhap chi phi dau hang thang: $";
    cin >> chi_phi_dau;

    cout << "Nhap chi phi lop hang thang: $";
    cin >> chi_phi_lop;

    cout << "Nhap chi phi bao duong hang thang: $";
    cin >> chi_phi_bao_duong;

    // Tính toán tổng chi phí hàng tháng và hàng năm
    tong_chi_phi_hang_thang = chi_phi_vay + chi_phi_bao_hiem + chi_phi_xang + chi_phi_dau + chi_phi_lop + chi_phi_bao_duong;
    tong_chi_phi_hang_nam = tong_chi_phi_hang_thang * 12;

    // Hiển thị kết quả
    cout << "Tong chi phi hang thang: $" << tong_chi_phi_hang_thang << endl;
    cout << "Tong chi phi hang nam: $" << tong_chi_phi_hang_nam << endl;

    return 0;
}