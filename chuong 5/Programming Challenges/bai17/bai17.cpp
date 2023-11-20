// bai17
#include <iostream>
using namespace std;

void hienThiBieuDoThanh(int doanhSo) {
    int soDauHoaThi = doanhSo / 100;
    for (int i = 0; i < soDauHoaThi; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    const int SO_CUA_HANG = 5;
    int doanhSo[SO_CUA_HANG];

    for (int i = 0; i < SO_CUA_HANG; i++) {
        cout << "Nhap doanh so ban hang hom nay cho cua hang " << i + 1 << ": ";
        cin >> doanhSo[i];
    }

    cout << "bieu do thanh ban hang (moi * = $100)" << endl;

    for (int i = 0; i < SO_CUA_HANG; i++) {
        cout << "Cua hang " << i + 1 << ": ";
        hienThiBieuDoThanh(doanhSo[i]);
    }

    return 0;
}