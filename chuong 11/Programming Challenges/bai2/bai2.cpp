// bai2
#include <iostream>
using namespace std;

// Khai báo cấu trúc MovieData
struct MovieData {
    string tieuDe;
    string daoDien;
    int namPhatHanh;
    int thoiGianChay;
    int chiPhiSanXuat;
    int doanhThuNamDau;
};

// Hàm hiển thị thông tin về bộ phim
void hienThiThongTinPhim(const MovieData& phim) {
    cout << "Tiêu đề: " << phim.tieuDe << endl;
    cout << "Đạo diễn: " << phim.daoDien << endl;
    cout << "Năm phát hành: " << phim.namPhatHanh << endl;
    cout << "Thời gian chạy: " << phim.thoiGianChay << " phút" << endl;
    cout << "Doanh thu năm đầu: $" << phim.doanhThuNamDau << endl;

    int loiNhuan = phim.doanhThuNamDau - phim.chiPhiSanXuat;
    if (loiNhuan > 0) {
        cout << "Lợi nhuận năm đầu: $" << loiNhuan << endl;
    }
    else if (loiNhuan < 0) {
        cout << "Lỗ năm đầu: $" << -loiNhuan << endl;
    }
    else {
        cout << "Hoà vốn năm đầu" << endl;
    }
}

int main() {
    // Khởi tạo và gán giá trị cho biến MovieData
    MovieData phim1;
    phim1.tieuDe = "Tùy đường diễn nghĩa";
    phim1.daoDien = "Nguyễn Nghiêm Nhan";
    phim1.namPhatHanh = 2019;
    phim1.thoiGianChay = 120;
    phim1.chiPhiSanXuat = 500000000;
    phim1.doanhThuNamDau = 800000000;

    // Hiển thị thông tin về bộ phim
    cout << "Phim 1:" << endl;
    hienThiThongTinPhim(phim1);

    // Khởi tạo và gán giá trị cho biến MovieData khác
    MovieData phim2;
    phim2.tieuDe = "Bố già";
    phim2.daoDien = "Trấn Thành";
    phim2.namPhatHanh = 2020;
    phim2.thoiGianChay = 90;
    phim2.chiPhiSanXuat = 300000000;
    phim2.doanhThuNamDau = 600000000;

    // Hiển thị thông tin về bộ phim khác
    cout << "\nPhim 2:" << endl;
    hienThiThongTinPhim(phim2);

    return 0;
}