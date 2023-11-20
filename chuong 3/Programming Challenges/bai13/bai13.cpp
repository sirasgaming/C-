// bai13
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Hằng số tỷ giá hối đoái
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    // Biến số tiền đô la Mỹ
    double so_tien_dollar;

    // Nhập số tiền đô la Mỹ
    cout << "Nhap so tien Dollar: $";
    cin >> so_tien_dollar;

    // Chuyển đổi sang yên Nhật và euro
    double so_tien_yen = so_tien_dollar * YEN_PER_DOLLAR;
    double so_tien_euro = so_tien_dollar * EUROS_PER_DOLLAR;

    // Hiển thị kết quả với định dạng số thập phân
    cout << fixed << setprecision(2);
    cout << "So tien tuong ung Yen: " << so_tien_yen << " Yen" << endl;
    cout << "So tien tuong ung Euro: " << so_tien_euro << " Euro" << endl;

    return 0;
}