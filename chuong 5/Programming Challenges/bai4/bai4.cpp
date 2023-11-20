// bai4
#include <iostream>
using namespace std;

int main() {
    const double tocDoDotChay = 3.6; // calo mỗi phút

    cout << "Thời gian (phút)\tCalo Đốt cháy" << endl;

    for (int thoiGian = 5; thoiGian <= 30; thoiGian += 5) {
        double caloDotChay = tocDoDotChay * thoiGian;
        cout << thoiGian << "\t\t" << caloDotChay << endl;
    }

    return 0;
}