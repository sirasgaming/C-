// bai5
#include <iostream>
using namespace std;

int main() {
    const double phiHienTai = 2500; // Đô la mỗi năm
    const double tyLeTang = 0.04; // 4% mỗi năm

    double phiDuKien = phiHienTai;

    cout << "Năm\tTỷ lệ phí thành viên" << endl;

    for (int nam = 1; nam <= 6; nam++) {
        phiDuKien += phiDuKien * tyLeTang;
        cout << nam << "\t" << phiDuKien << endl;
    }

    return 0;
}