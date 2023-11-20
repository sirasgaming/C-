// bai18
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void hienThiBieuDoThanh(int n) {
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    const int SO_NAM = 6;
    string nam[SO_NAM] = { "1900", "1920", "1940", "1960", "1980", "2000" };
    int danSo[SO_NAM];

    ifstream inputFile("People.txt");
    if (!inputFile) {
        cout << "Khong the mo tap tin People.txt." << endl;
        return 1;
    }

    for (int i = 0; i < SO_NAM; i++) {
        inputFile >> danSo[i];
        // Làm tròn dân số đến 1.000 người gần nhất
        danSo[i] = (danSo[i] + 500) / 1000;
    }

    inputFile.close();

    cout << "TĂNG TRƯỞNG DÂN SỐ PRAIRIEVILLE (mỗi * đại diện cho 1.000 người)" << endl;
    for (int i = 0; i < SO_NAM; i++) {
        cout << nam[i] << " ";
        hienThiBieuDoThanh(danSo[i]);
    }

    return 0;
}