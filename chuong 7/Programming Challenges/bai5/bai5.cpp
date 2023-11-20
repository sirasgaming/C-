// bai5
#include <iostream>
#include <limits>

using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;

// Hàm nhập lượng thức ăn mỗi con khỉ ăn trong một tuần
void inputFoodAmount(int food[][NUM_DAYS]) {
    for (int i = 0; i < NUM_MONKEYS; i++) {
        for (int j = 0; j < NUM_DAYS; j++) {
            do {
                cout << "Nhap luong thuc an (pound) ma con khỉ " << (i + 1) << " an vao ngay " << (j + 1) << ": ";
                cin >> food[i][j];

                if (food[i][j] < 0) {
                    cout << "Luong thuc an khong hop le. Vui long nhap lai.\n";
                }
            } while (food[i][j] < 0);
        }
    }
}

// Hàm tính lượng thức ăn trung bình ăn mỗi ngày của cả gia đình khỉ
double calculateAverageFoodAmount(const int food[][NUM_DAYS]) {
    double total = 0;
    int count = 0;

    for (int i = 0; i < NUM_MONKEYS; i++) {
        for (int j = 0; j < NUM_DAYS; j++) {
            total += food[i][j];
            count++;
        }
    }

    return total / count;
}

// Hàm tìm lượng thức ăn ít nhất và lớn nhất trong tuần
void findMinAndMaxFoodAmount(const int food[][NUM_DAYS], int& minFood, int& maxFood) {
    minFood = INT_MAX;
    maxFood = INT_MIN;

    for (int i = 0; i < NUM_MONKEYS; i++) {
        for (int j = 0; j < NUM_DAYS; j++) {
            if (food[i][j] < minFood) {
                minFood = food[i][j];
            }

            if (food[i][j] > maxFood) {
                maxFood = food[i][j];
            }
        }
    }
}

int main() {
    int food[NUM_MONKEYS][NUM_DAYS];

    cout << "Nhap luong thuc an (pound) ma cac con khỉ an trong tuan:\n";
    inputFoodAmount(food);

    double averageFood = calculateAverageFoodAmount(food);

    int minFood, maxFood;
    findMinAndMaxFoodAmount(food, minFood, maxFood);

    cout << "Bao cao thuc an cho con khỉ:\n";
    cout << "Luong thuc an trung binh an moi ngay cua ca gia dinh khỉ: " << averageFood << " pound\n";
    cout << "Luong thuc an it nhat trong tuan: " << minFood << " pound\n";
    cout << "Luong thuc an lon nhat trong tuan: " << maxFood << " pound\n";

    return 0;
}