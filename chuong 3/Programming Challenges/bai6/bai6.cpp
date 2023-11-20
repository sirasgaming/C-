// bai6
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    const double DON_VI = 48; // Số lượng bánh quy theo công thức
    const double DUONG = 1.5;
    const double BO = 1;
    const double BOT_MI = 2.75;

    // Nhập số lượng bánh quy
    int so_banh_quy;
    cout << "Nhap so luong banh quy muon tao: ";
    cin >> so_banh_quy;

    // Tính số cốc của mỗi thành phần cần thiết
    double so_coc_duong = (DUONG / DON_VI) * so_banh_quy;
    double so_coc_bo = (BO / DON_VI) * so_banh_quy;
    double so_chen_bot_mi = (BOT_MI / DON_VI) * so_banh_quy;

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "So coc duong can thiet: " << so_coc_duong << endl;
    cout << "So coc bo can thiet: " << so_coc_bo << endl;
    cout << "So chen bot mi can thiet: " << so_chen_bot_mi << endl;

    return 0;
}