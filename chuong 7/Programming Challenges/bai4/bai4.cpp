// bai4
#include <iostream>

using namespace std;

// Hàm hiển thị các số trong mảng lớn hơn số n
void displayNumbersGreaterThanN(const int array[], int size, int n) {
    cout << "Cac so lon hon " << n << " trong mang: ";
    for (int i = 0; i < size; i++) {
        if (array[i] > n) {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = { 3, 8, 2, 10, 5 };
    int n;

    cout << "Nhap mot so n: ";
    cin >> n;

    displayNumbersGreaterThanN(numbers, SIZE, n);

    return 0;
}