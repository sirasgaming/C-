// bai2
#include <iostream>

using namespace std;

int main() {
    int count = 0;

    for (int i = 0; i <= 127; i++) {
        cout << static_cast<char>(i) << " ";
        count++;

        if (count == 16) {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}