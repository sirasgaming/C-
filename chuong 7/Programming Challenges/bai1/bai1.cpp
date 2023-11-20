// bai1
#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[10];

    // Nhập giá trị vào mảng
    for (int i = 0; i < 10; i++) {
        cout << "Nhap gia tri thu " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Tìm giá trị lớn nhất và nhỏ nhất
    int max_value = INT_MIN;
    int min_value = INT_MAX;

    for (int i = 0; i < 10; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }

        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }

    // Hiển thị giá trị lớn nhất và nhỏ nhất
    cout << "Gia tri lon nhat trong mang: " << max_value << endl;
    cout << "Gia tri nho nhat trong mang: " << min_value << endl;

    return 0;
}