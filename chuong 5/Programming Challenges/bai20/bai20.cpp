// bai20
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Khởi tạo số ngẫu nhiên
    srand(time(0));
    int soBiMat = rand() % 100 + 1;

    int duDoan;
    bool daDoanDung = false;

    cout << "Chao mung den voi tro choi doan so!" << endl;

    while (!daDoanDung) {
        cout << "Nhap mot so du doan (1-100): ";
        cin >> duDoan;

        if (duDoan > soBiMat) {
            cout << "Qua cao, thu lai!" << endl;
        }
        else if (duDoan < soBiMat) {
            cout << "Qua thap, thu lai!" << endl;
        }
        else {
            cout << "Chuc mung! Ban da doan dung so " << soBiMat << "!" << endl;
            daDoanDung = true;
        }
    }

    return 0;
}