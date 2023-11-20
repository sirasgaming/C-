// bai22
#include <iostream>
using namespace std;

int main() {
    int canh;
    cout << "Nhap kich thuoc canh cua hinh vuong (1-15): ";
    cin >> canh;

    if (canh < 1 || canh > 15) {
        cout << "Kich thuoc canh khong hop le. Vui long nhap lai!";
        return 0;
    }

    for (int i = 0; i < canh; i++) {
        for (int j = 0; j < canh; j++) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}