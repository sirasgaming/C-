// bai17
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Khai báo biến
    int so1, so2, ket_qua, cau_tra_loi;

    // Thiết lập ngẫu nhiên cho các số
    srand(time(0));
    so1 = rand() % 1000;
    so2 = rand() % 1000;

    // Hiển thị câu hỏi
    cout << so1 << endl;
    cout << so2 << endl;

    // Dừng chương trình và chờ người dùng nhấn một phím
    system("pause");

    // Tính toán kết quả đúng
    ket_qua = so1 + so2;

    // Hiển thị kết quả đúng
    cout << so1 << endl;
    cout << so2 << endl;
    cout << ket_qua << endl;

    // Kiểm tra câu trả lời của học sinh
    cout << "Nhap ket qua cua ban: ";
    cin >> cau_tra_loi;

    // So sánh kết quả
    if (cau_tra_loi == ket_qua) {
        cout << "Ket qua dung!";
    }
    else {
        cout << "Ket qua sai! Dap an dung la: " << ket_qua;
    }

    return 0;
}