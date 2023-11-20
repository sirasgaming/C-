// bai24
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Khai báo biến
    string ten, thanh_pho, truong_dai_hoc, nghe, dong_vat, ten_thu_cung;
    int tuoi;

    // Nhập thông tin từ người dùng
    cout << "Nhap ten cua ban: ";
    getline(cin, ten);

    cout << "Nhap tuoi cua ban: ";
    cin >> tuoi;
    cin.ignore(); // Xóa bộ đệm dòng để getline sau đó hoạt động đúng

    cout << "Nhap ten thanh pho: ";
    getline(cin, thanh_pho);

    cout << "Nhap ten truong dai hoc: ";
    getline(cin, truong_dai_hoc);

    cout << "Nhap mot nghe: ";
    getline(cin, nghe);

    cout << "Nhap mot loai dong vat: ";
    getline(cin, dong_vat);

    cout << "Nhap ten thu cung: ";
    getline(cin, ten_thu_cung);

    // Hiển thị câu chuyện với đầu vào của người dùng
    cout << "Xua co mot nguoi ten " << ten << " song o " << thanh_pho << ". O do tuoi " << tuoi << ", "
        << ten << " da hoc dai hoc tai " << truong_dai_hoc << ". " << ten << " da tot nghiep va di lam "
        << "nhu mot " << nghe << ". Sau do, " << ten << " da nhan nuoi mot " << dong_vat << " co ten la "
        << ten_thu_cung << ". Ho ca hai song hanh phuc mai mai sau nay!" << endl;

    return 0;
}