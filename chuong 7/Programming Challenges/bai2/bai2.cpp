// bai2
#include <iostream>
#include <climits>

using namespace std;

const int NUM_MONTHS = 12;

// Hàm nhập lượng mưa cho từng tháng
void inputRainfall(int rainfall[]) {
    for (int i = 0; i < NUM_MONTHS; i++) {
        do {
            cout << "Nhap luong mua thang " << (i + 1) << ": ";
            cin >> rainfall[i];

            if (rainfall[i] < 0) {
                cout << "Luong mua khong hop le. Vui long nhap lai.\n";
            }
        } while (rainfall[i] < 0);
    }
}

// Hàm tính tổng lượng mưa trong năm
int calculateTotalRainfall(const int rainfall[]) {
    int total = 0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        total += rainfall[i];
    }
    return total;
}

// Hàm tính lượng mưa trung bình hàng tháng
double calculateAverageRainfall(const int rainfall[]) {
    int total = calculateTotalRainfall(rainfall);
    return static_cast<double>(total) / NUM_MONTHS;
}

// Hàm tìm tháng có lượng mưa cao nhất và thấp nhất
void findMinMaxMonths(const int rainfall[], int& minMonth, int& maxMonth) {
    minMonth = 0;
    maxMonth = 0;

    for (int i = 1; i < NUM_MONTHS; i++) {
        if (rainfall[i] < rainfall[minMonth]) {
            minMonth = i;
        }

        if (rainfall[i] > rainfall[maxMonth]) {
            maxMonth = i;
        }
    }
}

int main() {
    int rainfall[NUM_MONTHS * 2];

    cout << "Nhap luong mua cho cac thang:\n";
    inputRainfall(rainfall);

    int totalRainfall = calculateTotalRainfall(rainfall);
    double averageRainfall = calculateAverageRainfall(rainfall);

    int minMonth, maxMonth;
    findMinMaxMonths(rainfall, minMonth, maxMonth);

    cout << "Tong luong mua trong nam: " << totalRainfall << endl;
    cout << "Luong mua trung binh hang thang: " << averageRainfall << endl;
    cout << "Thang co luong mua cao nhat: Thang " << (maxMonth + 1) << endl;
    cout << "Thang co luong mua thap nhat: Thang " << (minMonth + 1) << endl;

    return 0;
}