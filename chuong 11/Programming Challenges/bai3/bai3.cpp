// bai3
#include <iostream>
#include <string>

using namespace std;

// Khai báo cấu trúc cho phân khu
struct PhanKhu {
    string ten;
    double doanh_thu_quy_1;
    double doanh_thu_quy_2;
    double doanh_thu_quy_3;
    double doanh_thu_quy_4;
    double tong_doanh_thu;
    double doanh_thu_trung_binh;
};

// Hàm nhập dữ liệu bán hàng cho một phân khu
void NhapDuLieuBanHang(PhanKhu& phan_khu) {
    cout << "Nhap ten phan khu: ";
    getline(cin, phan_khu.ten);

    cout << "Nhap doanh thu quy 1: $";
    cin >> phan_khu.doanh_thu_quy_1;

    cout << "Nhap doanh thu quy 2: $";
    cin >> phan_khu.doanh_thu_quy_2;

    cout << "Nhap doanh thu quy 3: $";
    cin >> phan_khu.doanh_thu_quy_3;

    cout << "Nhap doanh thu quy 4: $";
    cin >> phan_khu.doanh_thu_quy_4;

    // Tính toán tổng doanh thu và doanh thu trung bình
    phan_khu.tong_doanh_thu = phan_khu.doanh_thu_quy_1 + phan_khu.doanh_thu_quy_2 +
        phan_khu.doanh_thu_quy_3 + phan_khu.doanh_thu_quy_4;
    phan_khu.doanh_thu_trung_binh = phan_khu.tong_doanh_thu / 4;

    cin.ignore(); // Xóa bộ đệm dòng sau khi nhập số liệu
}

// Hàm hiển thị dữ liệu bán hàng cho một phân khu
void HienThiDuLieuBanHang(const PhanKhu& phan_khu) {
    cout << "Ten phan khu: " << phan_khu.ten << endl;
    cout << "Doanh thu quy 1: $" << phan_khu.doanh_thu_quy_1 << endl;
    cout << "Doanh thu quy 2: $" << phan_khu.doanh_thu_quy_2 << endl;
    cout << "Doanh thu quy 3: $" << phan_khu.doanh_thu_quy_3 << endl;
    cout << "Doanh thu quy 4: $" << phan_khu.doanh_thu_quy_4 << endl;
    cout << "Tong doanh thu: $" << phan_khu.tong_doanh_thu << endl;
    cout << "Doanh thu trung binh: $" << phan_khu.doanh_thu_trung_binh << endl;
    cout << endl;
}

int main() {
    // Khai báo biến cấu trúc cho các phân khu
    PhanKhu dong, tay, bac, nam;

    // Nhập dữ liệu bán hàng cho từng phân khu
    cout << "Nhap du lieu ban hang cho phan khu Dong" << endl;
    NhapDuLieuBanHang(dong);

    cout << "Nhap du lieu ban hang cho phan khu Tay" << endl;
    NhapDuLieuBanHang(tay);

    cout << "Nhap du lieu ban hang cho phan khu Bac" << endl;
    NhapDuLieuBanHang(bac);

    cout << "Nhap du lieu ban hang cho phan khu Nam" << endl;
    NhapDuLieuBanHang(nam);

    // Hiển thị dữ liệu bán hàng cho từng phân khu
    cout << "Danh sach du lieu ban hang" << endl;
    HienThiDuLieuBanHang(dong);
    HienThiDuLieuBanHang(tay);
    HienThiDuLieuBanHang(bac);
    HienThiDuLieuBanHang(nam);

    return 0;
}