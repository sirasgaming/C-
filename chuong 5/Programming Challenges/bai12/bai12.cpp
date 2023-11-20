// bai12
#include <iostream>
using namespace std;

int main() {
    cout << "Bảng chuyển đổi nhiệt độ Celsius sang Fahrenheit:" << endl;
    cout << "----------------------------------------------" << endl;

    for (int celsius = 0; celsius <= 20; celsius++) {
        float fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Celsius: " << celsius << " \t Fahrenheit: " << fahrenheit << endl;
    }

    return 0;
}