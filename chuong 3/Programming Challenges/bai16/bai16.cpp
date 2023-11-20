// bai16
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    double gia_tri_thuc_te;
    double muc_thue_hien_hanh;

    // Nhập giá trị thực tế của tài sản và mức thuế hiện hành
    cout << "Nhap gia tri thuc te cua tai san: $";
    cin >> gia_tri_thuc_te;

    cout << "Nhap muc thue hien hanh cho moi $100 gia tri tham dinh: $";
    cin >> muc_thue_hien_hanh;

    // Tính toán mức thuế bất động sản hàng năm và hóa đơn thuế hàng quý
    double gia_tri_danh_gia = gia_tri_thuc_te * 0.6;
    double muc_thue_bds_hang_nam = gia_tri_danh_gia * (muc_thue_hien_hanh / 100);
    double hoa_don_thue_hang_quy = muc_thue_bds_hang_nam / 4;

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "Muc thue bat dong san hang nam: $" << muc_thue_bds_hang_nam << endl;
    cout << "Hoa don thue hang quy: $" << hoa_don_thue_hang_quy << endl;

    return 0;
}