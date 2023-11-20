// bai26
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outputFile("BaoCao.txt");
    if (!outputFile) {
        cout << "Khong the mo file BaoCao.txt.";
        return 0;
    }

    double balance = 10000.0;
    double interestRate = 0.05;

    outputFile << "Bao Cao So Du Tai Khoan Tiet Kiem" << endl;
    outputFile << "--------------------------------" << endl;

    for (int year = 1; year <= 5; year++) {
        double interest = balance * interestRate;
        balance += interest;

        outputFile << "Nam " << year << ":" << endl;
        outputFile << "So du cuoi nam: $" << fixed << setprecision(2) << balance << endl;
        outputFile << "Tien lai ki nam: $" << fixed << setprecision(2) << interest << endl;
        outputFile << "--------------------------------" << endl;
    }

    outputFile.close();

    cout << "Bao cao da ghi thanh cong vao file BaoCao.txt." << endl;

    return 0;
}