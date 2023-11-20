// bai6
#include <iostream>
#include <fstream>

using namespace std;

const int NUM_MONTHS = 3;
const int NUM_DAYS = 30;

// Hàm đọc dữ liệu thời tiết từ tệp
void readWeatherData(char weather[][NUM_DAYS]) {
    ifstream inputFile("RainOrShine.txt");

    if (inputFile.is_open()) {
        for (int i = 0; i < NUM_MONTHS; i++) {
            for (int j = 0; j < NUM_DAYS; j++) {
                inputFile >> weather[i][j];
            }
        }

        inputFile.close();
    }
    else {
        cout << "Khong the mo file RainOrShine.txt.\n";
    }
}

// Hàm tính số ngày mưa, nhiều mây và nắng trong mỗi tháng
void calculateWeatherStatistics(const char weather[][NUM_DAYS], int& rainyDays, int& cloudyDays, int& sunnyDays, int& maxRainyMonth) {
    rainyDays = 0;
    cloudyDays = 0;
    sunnyDays = 0;
    maxRainyMonth = 0;
    int maxRainyDays = 0;

    for (int i = 0; i < NUM_MONTHS; i++) {
        int currentRainyDays = 0;

        for (int j = 0; j < NUM_DAYS; j++) {
            if (weather[i][j] == 'R') {
                rainyDays++;
                currentRainyDays++;
            }
            else if (weather[i][j] == 'C') {
                cloudyDays++;
            }
            else if (weather[i][j] == 'S') {
                sunnyDays++;
            }
        }

        if (currentRainyDays > maxRainyDays) {
            maxRainyDays = currentRainyDays;
            maxRainyMonth = i;
        }
    }
}

int main() {
    char weather[NUM_MONTHS][NUM_DAYS];

    readWeatherData(weather);

    int rainyDays, cloudyDays, sunnyDays, maxRainyMonth;
    calculateWeatherStatistics(weather, rainyDays, cloudyDays, sunnyDays, maxRainyMonth);

    cout << "Bao cao thoi tiet trong mua he ba thang:\n";
    cout << "So ngay mua: " << rainyDays << endl;
    cout << "So ngay nhieu may: " << cloudyDays << endl;
    cout << "So ngay nang: " << sunnyDays << endl;
    cout << "Thang co so ngay mua nhieu nhat: " << maxRainyMonth + 6 << endl;

    return 0;
}