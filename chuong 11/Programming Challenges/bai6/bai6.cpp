// bai6
#include <iostream>
#include <limits>

using namespace std;

const int NUM_PLAYERS = 12;

struct CauThuBongDa {
    string tenCauThu;
    int soAo;
    int diemGhiDuoc;
};

void nhapDuLieuCauThu(CauThuBongDa cauThu[]) {
    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << "Nhập dữ liệu cho Cầu thủ " << i + 1 << ":\n";

        // Tên cầu thủ
        cout << "Tên cầu thủ: ";
        getline(cin, cauThu[i].tenCauThu);

        // Số áo
        do {
            cout << "Số áo: ";
            cin >> cauThu[i].soAo;

            if (cauThu[i].soAo < 0) {
                cout << "Giá trị không hợp lệ. Vui lòng nhập một số dương.\n";
            }
        } while (cauThu[i].soAo < 0);

        // Điểm ghi được
        do {
            cout << "Điểm ghi được bởi cầu thủ: ";
            cin >> cauThu[i].diemGhiDuoc;

            if (cauThu[i].diemGhiDuoc < 0) {
                cout << "Giá trị không hợp lệ. Vui lòng nhập một số dương.\n";
            }
        } while (cauThu[i].diemGhiDuoc < 0);

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl;
    }
}

void hienThiDuLieuCauThu(const CauThuBongDa cauThu[]) {
    cout << "Dữ liệu cầu thủ:\n";
    cout << "----------------------------------------------\n";
    cout << "Số áo cầu thủ  |  Tên cầu thủ       |  Điểm ghi được\n";
    cout << "----------------------------------------------\n";

    int tongDiem = 0;
    int diemCaoNhat = 0;
    int viTriCauThuDiemCaoNhat = 0;

    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << "      " << cauThu[i].soAo << "        |  " << cauThu[i].tenCauThu << "    |  " << cauThu[i].diemGhiDuoc << endl;

        tongDiem += cauThu[i].diemGhiDuoc;

        if (cauThu[i].diemGhiDuoc > diemCaoNhat) {
            diemCaoNhat = cauThu[i].diemGhiDuoc;
            viTriCauThuDiemCaoNhat = i;
        }
    }

    cout << "----------------------------------------------\n";
    cout << "Tổng điểm: " << tongDiem << endl;
    cout << "Cầu thủ ghi được nhiều điểm nhất: " << cauThu[viTriCauThuDiemCaoNhat].tenCauThu << " (Số áo: " << cauThu[viTriCauThuDiemCaoNhat].soAo << ")\n";
}

int main() {
    CauThuBongDa cauThu[NUM_PLAYERS];
    nhapDuLieuCauThu(cauThu);
    hienThiDuLieuCauThu(cauThu);

    return 0;
}