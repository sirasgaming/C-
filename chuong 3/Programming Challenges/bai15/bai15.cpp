// bai15
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    double gia_tri_thuc_te;

    // Nhập giá trị thực tế của tài sản
    cout << "Nhap gia tri thuc te cua tai san: $";
    cin >> gia_tri_thuc_te;

    // Tính toán giá trị đánh giá và thuế tài sản
    double gia_tri_danh_gia = gia_tri_thuc_te * 0.6;
    double thue_tai_san = gia_tri_danh_gia * 0.0075;

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "Gia tri danh gia: $" << gia_tri_danh_gia << endl;
    cout << "Thue tai san: $" << thue_tai_san << endl;

    return 0;
}