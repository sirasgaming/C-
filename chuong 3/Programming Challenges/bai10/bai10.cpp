// bai10
#include <iostream>

using namespace std;

int main() {
    // Khai báo biến
    double chi_phi_thay_the, so_tien_bao_hiem;
    double ty_le_bao_hiem = 0.8;

    // Nhập chi phí thay thế của tài sản
    cout << "Nhap chi phi thay the cua tai san: $";
    cin >> chi_phi_thay_the;

    // Tính toán số tiền bảo hiểm tối thiểu cần mua
    so_tien_bao_hiem = chi_phi_thay_the * ty_le_bao_hiem;

    // Hiển thị kết quả
    cout << "So tien bao hiem toi thieu can mua: $" << so_tien_bao_hiem << endl;

    return 0;
}
