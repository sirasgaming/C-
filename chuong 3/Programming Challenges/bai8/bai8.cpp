// bai8
#include <iostream>

using namespace std;

int main() {
    // Khai báo biến
    double trong_luong_pallet, trong_luong_vat_dung;
    int so_vat_dung;

    // Nhập thông tin về pallet và trọng lượng vật dụng
    cout << "Nhap trong luong cua pallet (pound): ";
    cin >> trong_luong_pallet;

    cout << "Nhap trong luong cua mot vat dung (pound): ";
    cin >> trong_luong_vat_dung;

    // Tính toán số lượng vật dụng xếp chồng lên nhau trên pallet
    so_vat_dung = static_cast<int>(trong_luong_pallet / trong_luong_vat_dung);

    // Hiển thị kết quả
    cout << "So luong vat dung xep chong len nhau tren pallet: " << so_vat_dung << endl;

    return 0;
}