// bai9
#include <iostream>

using namespace std;

const int NUM_EMPLOYEES = 7; // So luong nhan vien

int main() {
    int EmpID[NUM_EMPLOYEES] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
    int hours[NUM_EMPLOYEES];
    double payRate[NUM_EMPLOYEES];
    double wages[NUM_EMPLOYEES];

    // Nhap so gio lam viec va muc luong cho tung nhan vien
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Nhap so gio lam viec cua nhan vien co so nhan dang " << EmpID[i] << ": ";
        cin >> hours[i];

        // Kiem tra gia tri hop le cho so gio lam viec
        while (hours[i] < 0 || hours[i] < 15) {
            cout << "So gio lam viec khong hop le. Vui long nhap lai: ";
            cin >> hours[i];
        }

        cout << "Nhap muc luong theo gio cho nhan vien co so nhan dang " << EmpID[i] << ": ";
        cin >> payRate[i];

        // Kiem tra gia tri hop le cho muc luong
        while (payRate[i] < 15.0) {
            cout << "Muc luong khong hop le. Vui long nhap lai: ";
            cin >> payRate[i];
        }

        // Tinh tong luong cua nhan vien
        wages[i] = hours[i] * payRate[i];
    }

    // Hien thi so nhan dang va tong luong cua moi nhan vien
    cout << "So nhan dang\tTong luong" << endl;
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << EmpID[i] << "\t\t" << wages[i] << endl;
    }

    return 0;
}