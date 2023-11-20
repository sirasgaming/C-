// bai13
#include <iostream>
using namespace std;

int main() {
    int so, soLonNhat, soNhoNhat;

    cout << "Nhap mot loat cac so nguyen. Nhap -99 de ket thuc: ";

    cin >> so;

    soLonNhat = so;
    soNhoNhat = so;

    while (so != -99) {
        if (so > soLonNhat) {
            soLonNhat = so;
        }

        if (so < soNhoNhat) {
            soNhoNhat = so;
        }

        cin >> so;
    }

    cout << "So lon nhat: " << soLonNhat << endl;
    cout << "So nho nhat: " << soNhoNhat << endl;

    return 0;
}