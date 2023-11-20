// bai3
#include <iostream>

using namespace std;

int main() {
    const double oceanRiseRate = 1.5; //mực nước biển mỗi năm tăng lên

    cout << "nam\tmuc nuoc bien tang(mm)" << endl;

    for (int year = 1; year <= 25; year++) {
        double oceanRise = oceanRiseRate * year;
        cout << year << "\t" << oceanRise << endl;
    }

    return 0;
}