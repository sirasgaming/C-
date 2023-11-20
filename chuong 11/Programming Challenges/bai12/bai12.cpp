// bai12
#include <iostream>
#include <string>

using namespace std;

struct SinhVien {
    string ten;
    string maSV;
    int* diemKiemTra;
    double diemTrungBinh;
    char diemKhoaHoc;
};

void tinhDiemTrungBinh(SinhVien& sv, int soDiemKT) {
    int tongDiem = 0;
    for (int i = 0; i < soDiemKT; i++) {
        cout << "Nhap diem kiem tra " << i + 1 << " cua sinh vien " << sv.ten << ": ";
        cin >> sv.diemKiemTra[i];
        tongDiem += sv.diemKiemTra[i];
    }
    sv.diemTrungBinh = static_cast<double>(tongDiem) / soDiemKT;
}

void tinhDiemKhoaHoc(SinhVien& sv) {
    if (sv.diemTrungBinh >= 91 && sv.diemTrungBinh <= 100)
        sv.diemKhoaHoc = 'A';
    else if (sv.diemTrungBinh >= 81 && sv.diemTrungBinh <= 90)
        sv.diemKhoaHoc = 'B';
    else if (sv.diemTrungBinh >= 71 && sv.diemTrungBinh <= 80)
        sv.diemKhoaHoc = 'C';
    else if (sv.diemTrungBinh >= 61 && sv.diemTrungBinh <= 70)
        sv.diemKhoaHoc = 'D';
    else
        sv.diemKhoaHoc = 'F';
}

void nhapSinhVien(SinhVien& sv, int soDiemKT) {
    cout << "Nhap ten sinh vien: ";
    getline(cin, sv.ten);
    cout << "Nhap ma so sinh vien: ";
    getline(cin, sv.maSV);
    sv.diemKiemTra = new int[soDiemKT];
    tinhDiemTrungBinh(sv, soDiemKT);
    tinhDiemKhoaHoc(sv);
}

void hienThiBangDiem(SinhVien* danhSachSV, int soSV) {
    cout << "Bang diem:\n";
    cout << "----------------------------------------\n";
    cout << "Ten sinh vien    | Ma SV    | Diem TB | Diem khoa hoc\n";
    cout << "----------------------------------------\n";
    for (int i = 0; i < soSV; i++) {
        cout << danhSachSV[i].ten << "    | " << danhSachSV[i].maSV << "    | " << danhSachSV[i].diemTrungBinh << "    | " << danhSachSV[i].diemKhoaHoc << endl;
    }
    cout << "----------------------------------------\n";
}

int main() {
    int soDiemKT, soSV;
    cout << "Nhap so diem kiem tra: ";
    cin >> soDiemKT;
    cout << "Nhap so sinh vien: ";
    cin >> soSV;
    cin.ignore(); // Xóa bộ nhớ đệm sau khi nhập số sinh viên

    SinhVien* danhSachSV = new SinhVien[soSV];

    for (int i = 0; i < soSV; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
        nhapSinhVien(danhSachSV[i], soDiemKT);
        cout << endl;
    }

    hienThiBangDiem(danhSachSV, soSV);

    // Giải phóng bộ nhớ động
    for (int i = 0; i < soSV; i++) {
        delete[] danhSachSV[i].diemKiemTra;
    }
    delete[] danhSachSV;

    return 0;
}