// bai1
#include <iostream>

using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Nhập một số nguyên dương: ";
        cin >> n;

        if (n <= 0) {
            cout << "Số phải là một số nguyên dương. Vui lòng thử lại." << endl;
        }
        else {
            break;
        }
    }

    int total = 0;

    for (int i = 1; i <= n; i++) {
        total += i;
    }

    cout << "Tổng các số từ 1 đến " << n << " là: " << total << endl;

    return 0;
}