// bai4
#include <iostream>
#include <limits>

using namespace std;

const int NUM_MONTHS = 12;

struct DuLieuThoiTiet {
    double luongMua;
    double nhietDoCao;
    double nhietDoThap;
    double nhietDoTrungBinh;
};

void nhapDuLieuThoiTiet(DuLieuThoiTiet duLieuThoiTiet[], int soThang) {
    for (int i = 0; i < soThang; i++) {
        cout << "Thang " << i + 1 << ":\n";

        cout << "Tong luong mua (inch): ";
        cin >> duLieuThoiTiet[i].luongMua;

        cout << "Nhiet do cao nhat (Fahrenheit): ";
        cin >> duLieuThoiTiet[i].nhietDoCao;

        cout << "Nhiet do thap nhat (Fahrenheit): ";
        cin >> duLieuThoiTiet[i].nhietDoThap;

        // Tinh toan nhiet do trung binh
        duLieuThoiTiet[i].nhietDoTrungBinh = (duLieuThoiTiet[i].nhietDoCao + duLieuThoiTiet[i].nhietDoThap) / 2.0;

        // Xoa bo dem nhap sau khi doc gia tri
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << endl;
    }
}

double tinhTrungBinhLuongMua(const DuLieuThoiTiet duLieuThoiTiet[], int soThang) {
    double tongLuongMua = 0.0;
    for (int i = 0; i < soThang; i++) {
        tongLuongMua += duLieuThoiTiet[i].luongMua;
    }
    return tongLuongMua / soThang;
}

double tinhTongLuongMua(const DuLieuThoiTiet duLieuThoiTiet[], int soThang) {
    double tongLuongMua = 0.0;
    for (int i = 0; i < soThang; i++) {
        tongLuongMua += duLieuThoiTiet[i].luongMua;
    }
    return tongLuongMua;
}

void timGiaTriCaoThap(const DuLieuThoiTiet duLieuThoiTiet[], int soThang, double& nhietDoCaoNhat, double& nhietDoThapNhat, int& thangNhietDoCaoNhat, int& thangNhietDoThapNhat) {
    nhietDoCaoNhat = duLieuThoiTiet[0].nhietDoCao;
    nhietDoThapNhat = duLieuThoiTiet[0].nhietDoThap;
    thangNhietDoCaoNhat = 0;
    thangNhietDoThapNhat = 0;

    for (int i = 1; i < soThang; i++) {
        if (duLieuThoiTiet[i].nhietDoCao > nhietDoCaoNhat) {
            nhietDoCaoNhat = duLieuThoiTiet[i].nhietDoCao;
            thangNhietDoCaoNhat = i;
        }

        if (duLieuThoiTiet[i].nhietDoThap < nhietDoThapNhat) {
            nhietDoThapNhat = duLieuThoiTiet[i].nhietDoThap;
            thangNhietDoThapNhat = i;
        }
    }
}

double tinhTrungBinhNhietDo(const DuLieuThoiTiet duLieuThoiTiet[], int soThang) {
    double tongTrungBinhNhietDo = 0.0;
    for (int i = 0; i < soThang; i++) {
        tongTrungBinhNhietDo += duLieuThoiDưới đây là một ví dụ về chương trình C++ để lưu trữ và thống kê dữ liệu thời tiết cho mỗi tháng trong một năm, theo yêu cầu của bạn.Chương trình sẽ yêu cầu người dùng nhập dữ liệu và tính toán các giá trị thống kê.

            ```cpp
#include <iostream>
#include <limits>

            using namespace std;

        const int NUM_MONTHS = 12;

        struct DuLieuThoiTiet {
            double luongMua;
            double nhietDoCao;
            double nhietDoThap;
            double nhietDoTrungBinh;
        };

        void nhapDuLieuThoiTiet(DuLieuThoiTiet duLieuThoiTiet[], int soThang) {
            for (int i = 0; i < soThang; i++) {
                cout << "Thang " << i + 1 << ":\n";

                cout << "Tong luong mua (inch): ";
                cin >> duLieuThoiTiet[i].luongMua;

                cout << "Nhiet do cao nhat (Fahrenheit): ";
                cin >> duLieuThoiTiet[i].nhietDoCao;

                cout << "Nhiet do thap nhat (Fahrenheit): ";
                cin >> duLieuThoiTiet[i].nhietDoThap;

                // Tinh toan nhiet do trung binh
                duLieuThoiTiet[i].nhietDoTrungBinh = (duLieuThoiTiet[i].nhietDoCao + duLieuThoiTiet[i].nhietDoThap) / 2.0;

                // Xoa bo dem nhap sau khi doc gia tri
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << endl;
            }
        }

        double tinhTrungBinhLuongMua(const DuLieuThoiTiet duLieuThoiTiet[], int soThang) {
            double tongLuongMua = 0.0;
            for (int i = 0; i < soThang; i++) {
                tongLuongMua += duLieuThoiTiet[i].luongMua;
            }
            return tongLuongMua / soThang;
        }

        double tinhTongLuongMua(const DuLieuThoiTiet duLieuThoiTiet[], int soThang) {
            double tongLuongMua = 0.0;
            for (int i = 0; i < soThang; i++) {
                tongLuongMua += duLieuThoiTiet[i].luongMua;
            }
            return tongLuongMua;
        }

        void timGiaTriCaoThap(const DuLieuThoiTiet duLieuThoiTiet[], int soThang, double& nhietDoCaoNhat, double& nhietDoThapNhat, int& thangNhietDoCaoNhat, int& thangNhietDoThapNhat) {
            nhietDoCaoNhat = duLieuThoiTiet[0].nhietDoCao;
            nhietDoThapNhat = duLieuThoiTiet[0].nhietDoThap;
            thangNhietDoCaoNhat = 0;
            thangNhietDoThapNhat = 0;

            for (int i = 1; i < soThang; i++) {
                if (duLieuThoiTiet[i].nhietDoCao > nhietDoCaoNhat) {
                    nhietDoCaoNhat = duLieuThoiTiet[i].nhietDoCao;
                    thangNhietDoCaoNhat = i;
                }

                if (duLieuThoiTiet[i].nhietDoThap < nhietDoThapNhat) {
                    nhietDoThapNhat = duLieuThoiTiet[i].nhietDoThap;
                    thangNhietDoThapNhat = i;
                }
            }
        }

        double tinhTrungBinhNhietDo(const DuLieuThoiTiet duLieuThoiTiet[], int soThang) {
            double tongTrungBinhNhietDo = 0.0;
            for (int i = 0; i < soThang; i++) {
                tongTrungBinhNhietDo += duLieuThoi