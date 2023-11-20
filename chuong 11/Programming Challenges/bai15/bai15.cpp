// bai15
#include <iostream>
using namespace std;

struct HourlyWorker {
    double hoursWorked;
    double hourlyRate;
};

struct SalariedWorker {
    double salary;
    double bonus;
};

double calculateHourlyWorkerPay(const HourlyWorker& worker) {
    if (worker.hoursWorked > 80) {
        cout << "So gio lam viec khong hop le.\n";
        return 0;
    }

    return worker.hoursWorked * worker.hourlyRate;
}

double calculateSalariedWorkerPay(const SalariedWorker& worker) {
    return worker.salary + worker.bonus;
}

int main() {
    HourlyWorker hourlyWorker;
    SalariedWorker salariedWorker;

    cout << "Ban dang tinh luong theo gio hay luong cong?\n";
    cout << "1. Luong theo gio\n";
    cout << "2. Luong cong\n";
    cout << "Nhap lua chon cua ban (1 hoac 2): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "Nhap so gio lam viec: ";
        cin >> hourlyWorker.hoursWorked;

        if (hourlyWorker.hoursWorked < 0 || hourlyWorker.hoursWorked > 80) {
            cout << "So gio lam viec khong hop le.\n";
            return 0;
        }

        cout << "Nhap ty le luong theo gio: ";
        cin >> hourlyWorker.hourlyRate;

        if (hourlyWorker.hourlyRate < 0) {
            cout << "Ty le luong theo gio khong hop le.\n";
            return 0;
        }

        double pay = calculateHourlyWorkerPay(hourlyWorker);
        cout << "Tien luong cua cong nhan theo gio: " << pay << endl;
    }
    else if (choice == 2) {
        cout << "Nhap luong cung: ";
        cin >> salariedWorker.salary;

        if (salariedWorker.salary < 0) {
            cout << "Luong cung khong hop le.\n";
            return 0;
        }

        cout << "Nhap so tien thuong: ";
        cin >> salariedWorker.bonus;

        if (salariedWorker.bonus < 0) {
            cout << "So tien thuong khong hop le.\n";
            return 0;
        }

        double pay = calculateSalariedWorkerPay(salariedWorker);
        cout << "Tien luong cua cong nhan cong: " << pay << endl;
    }
    else {
        cout << "Lua chon khong hop le.\n";
    }

    return 0;
}