// bai7
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm đọc dữ liệu từ tệp và lưu trữ vào một vector
void readNumbersFromFile(const string& filename, vector<int>& numbers) {
    ifstream inputFile(filename);

    if (inputFile.is_open()) {
        int number;
        while (inputFile >> number) {
            numbers.push_back(number);
        }

        inputFile.close();
    }
    else {
        cout << "Khong the mo tep.\n";
    }
}

// Hàm hiển thị thông tin về mảng số
void displayArrayInfo(const vector<int>& numbers) {
    if (numbers.empty()) {
        cout << "Mang rong.\n";
        return;
    }

    int minNumber = *min_element(numbers.begin(), numbers.end());
    int maxNumber = *max_element(numbers.begin(), numbers.end());
    int sum = 0;
    double average = 0.0;

    for (int number : numbers) {
        sum += number;
    }

    average = static_cast<double>(sum) / numbers.size();

    cout << "So thap nhat trong mang: " << minNumber << endl;
    cout << "So cao nhat trong mang: " << maxNumber << endl;
    cout << "Tong so cac so trong mang: " << sum << endl;
    cout << "Trung binh cua cac so trong mang: " << average << endl;
}

int main() {
    string filename;
    cout << "Nhap ten tep: ";
    cin >> filename;

    vector<int> numbers;
    readNumbersFromFile(filename, numbers);

    displayArrayInfo(numbers);

    return 0;
}