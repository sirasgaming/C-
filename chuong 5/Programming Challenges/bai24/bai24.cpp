// bai24
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("Random.txt");
    if (!inputFile) {
        cout << "Khong the mo file Random.txt.";
        return 0;
    }

    int number;
    int count = 0;
    int sum = 0;

    while (inputFile >> number) {
        count++;
        sum += number;
    }

    inputFile.close();

    double average = static_cast<double>(sum) / count;

    cout << "So luong so trong tep: " << count << endl;
    cout << "Tong cac so trong tep: " << sum << endl;
    cout << "Trung binh cua cac so trong tep: " << average << endl;

    return 0;
}