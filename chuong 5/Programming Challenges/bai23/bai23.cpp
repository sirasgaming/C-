// bai23
#include <iostream>
using namespace std;

int main() {
    // Mau A
    cout << "Mau A:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "+";
        }
        cout << endl;
    }

    // Mau B
    cout << "Mau B:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i + 10; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
