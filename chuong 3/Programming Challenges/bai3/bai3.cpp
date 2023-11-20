// bai3
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Khai báo biến
    double diem_1, diem_2, diem_3, diem_4, diem_5;

    // Nhập điểm bài kiểm tra
    cout << "Nhap diem bai kiem tra 1: ";
    cin >> diem_1;

    cout << "Nhap diem bai kiem tra 2: ";
    cin >> diem_2;

    cout << "Nhap diem bai kiem tra 3: ";
    cin >> diem_3;

    cout << "Nhap diem bai kiem tra 4: ";
    cin >> diem_4;

    cout << "Nhap diem bai kiem tra 5: ";
    cin >> diem_5;

    // Tính trung bình điểm kiểm tra
    double trung_binh = (diem_1 + diem_2 + diem_3 + diem_4 + diem_5) / 5.0;

    // Hiển thị kết quả
    cout << fixed << setprecision(1);
    cout << "Trung binh diem kiem tra: " << trung_binh << endl;

    return 0;
}