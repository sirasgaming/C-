// bai10
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Khai báo cấu trúc trận đấu
struct CauTrucTranDau {
    string nguoiNoi;
    string chuDe;
};

// Hàm tìm kiếm người nói theo chủ đề
vector<CauTrucTranDau> timKiemNguoiNoi(vector<CauTrucTranDau>& danhSach, string tuKhoa) {
    vector<CauTrucTranDau> ketQua;

    // Duyệt qua mảng cấu trúc trận đấu và tìm kiếm chủ đề khớp với từ khóa
    for (const auto& cauTruc : danhSach) {
        if (cauTruc.chuDe == tuKhoa) {
            ketQua.push_back(cauTruc);
        }
    }

    return ketQua;
}

int main() {
    // Tạo một mảng cấu trúc trận đấu
    vector<CauTrucTranDau> danhSach = {
        {"Nguyen", "Chu de A"},
        {"Tran", "Chu de B"},
        {"Le", "Chu de A"},
        {"Pham", "Chu de C"}
    };

    // Nhập từ khóa tìm kiếm từ người dùng
    string tuKhoa;
    cout << "Nhap tu khoa tim kiem: ";
    cin >> tuKhoa;

    // Tìm kiếm và hiển thị kết quả
    vector<CauTrucTranDau> ketQuaTimKiem = timKiemNguoiNoi(danhSach, tuKhoa);

    if (ketQuaTimKiem.empty()) {
        cout << "Khong tim thay cau truc nao khop voi tu khoa." << endl;
    }
    else {
        cout << "Cau truc tran dau khop voi tu khoa:" << endl;
        for (const auto& ketQua : ketQuaTimKiem) {
            cout << "Nguoi noi: " << ketQua.nguoiNoi << endl;
            cout << "Chu de: " << ketQua.chuDe << endl;
            cout << endl;
        }
    }

    return 0;
}