// bai19
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    double so_tien_vay, lai_suat_thang, so_lan_thanh_toan;
    double thanh_toan_hang_thang, so_tien_da_hoan_tra, tien_lai;

    // Nhập thông tin từ người dùng
    cout << "Nhap so tien cho vay: $";
    cin >> so_tien_vay;

    cout << "Nhap lai suat hang thang (%): ";
    cin >> lai_suat_thang;

    cout << "Nhap so lan thanh toan: ";
    cin >> so_lan_thanh_toan;

    // Tính toán số tiền trả hàng tháng
    lai_suat_thang /= 100; // Chuyển đổi lãi suất hàng tháng từ phần trăm sang tỷ lệ
    double tu_so = lai_suat_thang * pow(1 + lai_suat_thang, so_lan_thanh_toan);
    double mau_so = pow(1 + lai_suat_thang, so_lan_thanh_toan) - 1;
    thanh_toan_hang_thang = so_tien_vay * (tu_so / mau_so);

    // Tính toán số tiền đã hoàn trả và tiền lãi phải trả
    so_tien_da_hoan_tra = thanh_toan_hang_thang * so_lan_thanh_toan;
    tien_lai = so_tien_da_hoan_tra - so_tien_vay;

    // Hiển thị báo cáo
    cout << fixed << setprecision(2);
    cout << "So tien cho vay: $" << so_tien_vay << endl;
    cout << "Lai suat hang thang: " << lai_suat_thang * 100 << "%" << endl;
    cout << "So lan thanh toan: " << so_lan_thanh_toan << endl;
    cout << "Thanh toan hang thang: $" << thanh_toan_hang_thang << endl;
    cout << "So tien da hoan tra: $" << so_tien_da_hoan_tra << endl;
    cout << "Tien lai phai tra: $" << tien_lai << endl;

    return 0;
}