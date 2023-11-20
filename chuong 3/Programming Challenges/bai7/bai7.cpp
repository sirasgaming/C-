// bai7
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Khai báo biến
    string ten_phim;
    int ve_nguoi_lon, ve_tre_em;
    double gia_ve_nguoi_lon = 10.0;
    double gia_ve_tre_em = 6.0;
    double loi_nhuan_gop, loi_nhuan_rong, tien_tra_nha_phat_phat;

    // Nhập thông tin về phim và số lượng vé bán được
    cout << "Nhap ten phim: ";
    getline(cin, ten_phim);

    cout << "Nhap so luong ve nguoi lon da ban: ";
    cin >> ve_nguoi_lon;

    cout << "Nhap so luong ve tre em da ban: ";
    cin >> ve_tre_em;

    // Tính toán lợi nhuận gộp và lợi nhuận ròng
    loi_nhuan_gop = ve_nguoi_lon * gia_ve_nguoi_lon + ve_tre_em * gia_ve_tre_em;
    loi_nhuan_rong = loi_nhuan_gop * 0.2;  // Giữ lại 20% tổng lợi nhuận

    // Tính tiền trả cho nhà phân phối
    tien_tra_nha_phat_phat = loi_nhuan_gop - loi_nhuan_rong;

    // Hiển thị báo cáo
    cout << "Ten phim: " << ten_phim << endl;
    cout << "Ve nguoi lon da ban: " << ve_nguoi_lon << endl;
    cout << "Ve tre em da ban: " << ve_tre_em << endl;
    cout << fixed << setprecision(2);
    cout << "Loi nhuan gop phong ve: $" << loi_nhuan_gop << endl;
    cout << "Loi nhuan phong ve rong: $" << loi_nhuan_rong << endl;
    cout << "So tien tra cho nha phan phoi: $" << tien_tra_nha_phat_phat << endl;

    return 0;
}
