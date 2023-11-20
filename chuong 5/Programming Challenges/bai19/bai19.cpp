// bai19
#include <iostream>
using namespace std;

int main() {
    double nganSach;
    cout << "Nhap so tien ngan sach trong thang: ";
    cin >> nganSach;

    double tongChiPhi = 0;
    double chiPhi;
    char luaChon;

    do {
        cout << "Nhap chi phi: ";
        cin >> chiPhi;

        tongChiPhi += chiPhi;

        cout << "Ban muon nhap them chi phi? (Y/N): ";
        cin >> luaChon;
    } while (luaChon == 'Y' || luaChon == 'y');

    double chenhLech = tongChiPhi - nganSach;
    if (chenhLech > 0) {
        cout << "Ban da vuot qua ngan sach " << chenhLech << " dong." << endl;
    }
    else if (chenhLech < 0) {
        cout << "Ban da duoi ngan sach " << -chenhLech << " dong." << endl;
    }
    else {
        cout << "Ban da dung ngan sach." << endl;
    }

    return 0;
}