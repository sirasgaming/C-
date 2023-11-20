// bai3
#include <iostream>
#include <string>
#include <limits>

using namespace std;

const int NUM_SALSAS = 5;

// Hàm nhập số lượng lọ được bán cho từng loại salsa
void inputSales(int sales[]) {
    for (int i = 0; i < NUM_SALSAS; i++) {
        do {
            cout << "Nhap so luong lo duoc ban cho loai salsa " << (i + 1) << ": ";
            cin >> sales[i];

            if (sales[i] < 0) {
                cout << "So luong lo khong hop le. Vui long nhap lai.\n";
            }
        } while (sales[i] < 0);
    }
}

// Hàm tính tổng doanh số bán hàng
int calculateTotalSales(const int sales[]) {
    int total = 0;
    for (int i = 0; i < NUM_SALSAS; i++) {
        total += sales[i];
    }
    return total;
}

// Hàm tìm loại salsa bán chạy nhất và ít nhất
void findBestAndWorstSalsa(const string salsas[], const int sales[], string& bestSalsa, string& worstSalsa) {
    int maxSalesIndex = 0;
    int minSalesIndex = 0;

    for (int i = 1; i < NUM_SALSAS; i++) {
        if (sales[i] > sales[maxSalesIndex]) {
            maxSalesIndex = i;
        }

        if (sales[i] < sales[minSalesIndex]) {
            minSalesIndex = i;
        }
    }

    bestSalsa = salsas[maxSalesIndex];
    worstSalsa = salsas[minSalesIndex];
}

int main() {
    string salsas[NUM_SALSAS] = { "Nhe", "Trung binh", "Ngot", "Nong", "Zesty" };
    int sales[NUM_SALSAS];

    cout << "Nhap so luong lo duoc ban cho cac loai salsa:\n";
    inputSales(sales);

    int totalSales = calculateTotalSales(sales);

    string bestSalsa, worstSalsa;
    findBestAndWorstSalsa(salsas, sales, bestSalsa, worstSalsa);

    cout << "Bao cao doanh so ban hang:\n";
    for (int i = 0; i < NUM_SALSAS; i++) {
        cout << "Loai salsa " << salsas[i] << ": " << sales[i] << " lo\n";
    }

    cout << "Tong doanh so ban hang: " << totalSales << " lo\n";
    cout << "San pham ban chay nhat: " << bestSalsa << endl;
    cout << "San pham ban thap nhat: " << worstSalsa << endl;

    return 0;
}