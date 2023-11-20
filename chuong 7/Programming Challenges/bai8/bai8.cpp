// bai8
#include <iostream>

using namespace std;

// Hàm kiểm tra xem mảng có phải là Quảng trường ma thuật Lo Shu hay không
bool isLoShuSquare(int square[3][3]) {
    // Tổng của mỗi hàng, cột và đường chéo
    int sum = 0;

    // Kiểm tra tổng các hàng
    for (int row = 0; row < 3; row++) {
        int rowSum = 0;
        for (int col = 0; col < 3; col++) {
            rowSum += square[row][col];
        }
        if (sum == 0) {
            sum = rowSum;
        }
        else if (sum != rowSum) {
            return false;
        }
    }

    // Kiểm tra tổng các cột
    for (int col = 0; col < 3; col++) {
        int colSum = 0;
        for (int row = 0; row < 3; row++) {
            colSum += square[row][col];
        }
        if (colSum != sum) {
            return false;
        }
    }

    // Kiểm tra tổng đường chéo chính
    int mainDiagonalSum = square[0][0] + square[1][1] + square[2][2];
    if (mainDiagonalSum != sum) {
        return false;
    }

    // Kiểm tra tổng đường chéo phụ
    int secondaryDiagonalSum = square[0][2] + square[1][1] + square[2][0];
    if (secondaryDiagonalSum != sum) {
        return false;
    }

    return true;
}

int main() {
    int square[3][3];

    cout << "Nhap cac gia tri cho ma tran 3x3:\n";
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cin >> square[row][col];
        }
    }

    if (isLoShuSquare(square)) {
        cout << "Day la Quang truong ma thuat Lo Shu.\n";
    }
    else {
        cout << "Day khong phai la Quang truong ma thuat Lo Shu.\n";
    }

    return 0;
}