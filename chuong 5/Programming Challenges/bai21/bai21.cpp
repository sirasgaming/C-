// bai21
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int soBiMat = rand() % 100 + 1;

    int duDoan;
    bool daDoanDung = false;
    int soLanDoan = 0;

    cout << "Chao mung den voi tro choi doan so!" << endl;

    while (!daDoanDung) {
        cout << "Nhap mot so du doan (1-100): ";
        cin >> duDoan;

        soLanDoan++;

        if (duDoan > soBiMat) {
            cout << "Qua cao, thu lai!" << endl;
        }
        else if (duDoan < soBiMat) {
            cout << "Qua thap, thu lai!" << endl;
        }
        else {
            cout << "Chuc mung! Ban da doan dung so " << soBiMat << " sau " << soLanDoan << " lan doan." << endl;
            daDoanDung = true;
        }
    }

    return 0;
}