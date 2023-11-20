// bai25
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");
    if (!inputFile) {
        cout << "Khong the mo file LineUp.txt.";
        return 0;
    }

    string name;
    int count = 0;

    while (getline(inputFile, name)) {
        count++;
        cout << "Hoc sinh " << count << ": " << name << endl;
    }

    inputFile.close();

    cout << "Tong so hoc sinh: " << count << endl;

    return 0;
}