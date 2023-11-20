// bai6
#include <iostream>
using namespace std;

int main() {
    double tocDo = 0.0;
    int thoiGian = 0;

    // Nhập tốc độ từ người dùng
    while (tocDo <= 0) {
        cout << "toc do cua xe duoc tinh bang mph la bao nhieu? ";
        cin >> tocDo;

        if (tocDo <= 0) {
            cout << "nhap gia tri duong cho toc do." << endl;
        }
    }

    // Nhập thời gian từ người dùng
    while (thoiGian < 1) {
        cout << "no da di duoc bao nhieu gio? ";
        cin >> thoiGian;

        if (thoiGian < 1) {
            cout << "nhap gia tri lon hon hoac bang 1 cho thoi gian di chuyen" << endl;
        }
    }

    // Hiển thị tiêu đề
    cout << "khoang cach " << thoiGian << " gio da di" << endl;
    cout << "--------------------------------" << endl;

    // Tính và hiển thị khoảng cách đã đi trong mỗi giờ
    double khoangCach = 0.0;
    for (int gio = 1; gio <= thoiGian; gio++) {
        khoangCach = tocDo * gio;
        cout << gio << " " << khoangCach << endl;
    }

    return 0;
}