// bai8
#include <iostream>
#include <limits>

using namespace std;

struct TaiKhoanKhachHang {
    string ten;
    string diaChi;
    string thanhPho;
    string tinh;
    string zip;
    string soDienThoai;
    double soDuTaiKhoan;
    string ngayThanhToanCuoi;
};

const int MAX_CUSTOMERS = 10;

void nhapThongTin(TaiKhoanKhachHang customers[]) {
    for (int i = 0; i < MAX_CUSTOMERS; i++) {
        cout << "Nhap thong tin cho khach hang " << i + 1 << ":\n";

        // Ten khach hang
        cout << "Ten khach hang: ";
        getline(cin, customers[i].ten);

        // Dia chi
        cout << "Dia chi: ";
        getline(cin, customers[i].diaChi);

        // Thanh pho
        cout << "Thanh pho: ";
        getline(cin, customers[i].thanhPho);

        // Tinh
        cout << "Tinh: ";
        getline(cin, customers[i].tinh);

        // Zip
        cout << "Zip: ";
        getline(cin, customers[i].zip);

        // So dien thoai
        cout << "So dien thoai: ";
        getline(cin, customers[i].soDienThoai);

        // So du tai khoan
        do {
            cout << "So du tai khoan: ";
            cin >> customers[i].soDuTaiKhoan;

            if (customers[i].soDuTaiKhoan < 0) {
                cout << "So du tai khoan khong hop le. Vui long nhap mot so duong.\n";
            }
        } while (customers[i].soDuTaiKhoan < 0);

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Ngay thanh toan cuoi cung
        cout << "Ngay thanh toan cuoi cung: ";
        getline(cin, customers[i].ngayThanhToanCuoi);

        cout << endl;
    }
}

void timKiemTaiKhoan(TaiKhoanKhachHang customers[], int numCustomers, string tenKhachHang) {
    bool timThay = false;

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].ten.find(tenKhachHang) != string::npos) {
            cout << "Thong tin tai khoan khach hang " << i + 1 << ":\n";
            cout << "Ten khach hang: " << customers[i].ten << endl;
            cout << "Dia chi: " << customers[i].diaChi << endl;
            cout << "Thanh pho: " << customers[i].thanhPho << endl;
            cout << "Tinh: " << customers[i].tinh << endl;
            cout << "Zip: " << customers[i].zip << endl;
            cout << "So dien thoai: " << customers[i].soDienThoai << endl;
            cout << "So du tai khoan: " << customers[i].soDuTaiKhoan << endl;
            cout << "Ngay thanh toan cuoi cung: " << customers[i].ngayThanhToanCuoi << endl;

            timThay = true;
            cout << endl;
        }
    }

    if (!timThay) {
        cout << "Khong tim thay tai khoan khach hang phu hop.\n\n";
    }
}

int main() {
    TaiKhoanKhachHang customers[MAX_CUSTOMERS];

    nhapThongTin(customers);

    string tenKhachHang;
    cout << "Nhap ten khach hang can tim kiem: ";
    getline(cin, tenKhachHang);

    cout << endl;
    timKiemTaiKhoan(customers, MAX_CUSTOMERS, tenKhachHang);

    return 0;
}