// bai5
#include <iostream>
#include <limits>

using namespace std;

enum Thang {
    THANG_1,
    THANG_2,
    THANG_3,
    THANG_4,
    THANG_5,
    THANG_6,
    THANG_7,
    THANG_8,
    THANG_9,
    THANG_10,
    THANG_11,
    THANG_12
};

const int NUM_MONTHS = 12;

struct DuLieuThoiTiet {
    double luongMua;
    double nhietDoCao;
    double nhietDoThap;
    double nhietDoTrungBinh;
};

void nhapDuLieuThoiTiet(DuLieuThoiTiet duLieuThoiTiet[], int soThang) {
    for (int i = 0; i < soThang; i++) {
        Thang thang;
        switch (i) {
        case 0:
            thang = THANG_1;
            break;
        case 1:
            thang = THANG_2;
            break;
        case 2:
            thang = THANG_3;
            break;
        case 3:
            thang = THANG_4;
            break;
        case 4:
            thang = THANG_5;
            break;
        case 5:
            thang = THANG_6;
            break;
        case 6:
            thang = THANG_7;
            break;
        case 7:
            thang = THANG_8;
            break;
        case 8:
            thang = THANG_9;
            break;
        case 9:
            thang = THANG_10;
            break;
        case 10:
            thang = THANG_11;
            break;
        case 11:
            thang = THANG_12;
            break;
        default:
            thang = THANG_1;
            break;
        }

        cout << "Thang " << i + 1 << ":\n";

        cout << "Tong luong mua (inch): ";
        cin >> duLieuThoiTiet[thang].luongMua;

        cout << "Nhiet do cao nhat (Fahrenheit): ";
        cin >> duLieuThoiTiet[thang].nhietDoCao;

        cout << "Nhiet do thap nhat (Fahrenheit): ";
        cin >> duLieuThoiTiet[thang].nhietDoThap;

        // Tinh toan nhiet do trung binh
        duLieuThoiTiet[thang].nhietDoTrungBinh = (duLieuThoiTiet[thang].nhietDoCao + duLieuThoiTiet[thang].nhietDoThap) / 2.0;

        // Xoa bo dem nhap sau khi doc gia tri
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << endl;
    }
}

double tinhTrungBinhLuongMua(const DuLieuThoiTiet duLieuThoiTiet[]) {
    double tongLuongMua = 0.0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        tongLuongMua += duLieuThoiTiet[Thang(i)].luongMua;
    }
    return tongLuongMua / NUM_MONTHS;
}

double tinhTongLuongMua(const DuLieuThoiTiet duLieuThoiTiet[]) {
    double tongLuongMua = 0.0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        tongLuongMua += duLieuThoiTiet[Thang(i)].luongMua;
    }
    return tongLuongMua;
}

void timGiaTriCaoThap(const DuLieuThoiTiet duLieuThoiTiet[], double& nhietDoCaoNhat, double& nhietDoThapNhat, Thang& thangNhietDoCaoNhat, Thang& thangNhietDoThapNhat) {
    nhietDoCaoNhat = duLieuThoiTiet[THANG_1].nhietDoCao;
    nhietDoThapNhat = duLieuThoiTiet[THANG_1].nhaptrungBinh;
    thangNhietDoCaoNhat = THANG_1;
    thangNhietDoThapNhat = THANG_1;

    for (int i = 1; i < NUM_MONTHS; i++) {
        if (duLieuThoiTiet[Thang(i)].nhietDoCao > nhietDoCaoNhat) {
            nhietDoCaoNhat = duLieuThoiTiet[Thang(i)].nhietDoCao;
            thangNhietDoCaoNhat = Thang(i);
        }

        if (duLieuThoiTiet[Thang(i)].nhietDoThap < nhietDoThapNhat) {
            nhietDoThapNhat = duLieuThoiTiet[Thang(i)].nhietDoThap;
            thangNhietDoThapNhat = Thang(i);
        }
    }
}

void hienThiDuLieuThoiTiet(const DuLieuThoiTiet duLieuThoiTiet[]) {
    for (int i = 0; i < NUM_MONTHS; i++) {
        Thang thang = Thang(i);
        cout << "Thang " << i + 1 << ":\n";
        cout << "Tong luong mua: " << duLieuThoiTiet[thang].luongMua << " inch\n";
        cout << "Nhiet do cao nhat: " << duLieuThoiTiet[thang].nhietDoCao << " Fahrenheit\n";
        cout << "Nhiet do thap nhat: " << duLieuThoiTiet[thang].nhietDoThap << " Fahrenheit\n";
        cout << "Nhiet do trung binh: " << duLieuThoiTiet[thang].nhietDoTrungBinh << " Fahrenheit\n";
        cout << endl;
    }
}

int main() {
    DuLieuThoiTiet duLieuThoiTiet[NUM_MONTHS];

    cout << "Nhap du lieu thoi tiet cho 12 thang:\n";
    nhapDuLieuThoiTiet(duLieuThoiTiet, NUM_MONTHS);

    cout << "Cac thong tin thoi tiet:\n";
    hienThiDuLieuThoiTiet(duLieuThoiTiet);

    double trungBinhLuongMua = tinhTrungBinhLuongMua(duLieuThoiTiet);
    cout << "Trung binh luong mua trong nam: " << trungBinhLuongMua << " inch\n";

    double tongLuongMua = tinhTongLuongMua(duLieuThoiTiet);
    cout << "Tong luong mua trong nam: " << tongLuongMua << " inch\n";

    double nhietDoCaoNhat, nhietDoThapNhat;
    Thang thangNhietDoCaoNhat, thangNhietDoThapNhat;
    timGiaTriCaoThap(duLieuThoiTiet, nhietDoCaoNhat, nhietDoThapNhat, thangNhietDoCaoNhat, thangNhietDoThapNhat);
    cout << "Thang co nhiet do cao nhat: Thang " << thangNhietDoCaoNhat + 1 << " (" << nhietDoCaoNhat << " Fahrenheit)\n";
    cout << "Thang co nhiet do thap nhat: Thang " << thangNhietDoThapNhat + 1 << " (" << nhietDoThapNhat << " Fahrenheit)\n";

    return 0;
}