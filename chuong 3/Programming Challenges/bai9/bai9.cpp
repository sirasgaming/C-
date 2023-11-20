// bai9
#include <iostream>

using namespace std;

int main() {
    // Khai báo biến
    int so_banh_quy_an, luong_calo_mot_khau_phan, luong_calo_tong;
    int so_khau_phan = 10;

    // Nhập số lượng bánh quy đã ăn
    cout << "Nhap so luong banh quy da an: ";
    cin >> so_banh_quy_an;

    // Tính toán tổng số calo đã tiêu thụ
    luong_calo_mot_khau_phan = 300;
    luong_calo_tong = so_banh_quy_an * luong_calo_mot_khau_phan / so_khau_phan;

    // Hiển thị kết quả
    cout << "Tong so calo da tieu thu: " << luong_calo_tong << " calo" << endl;

    return 0;
}