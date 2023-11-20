// bai8
#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        // Hiển thị menu
        cout << "----- Math Tutor -----" << endl;
        cout << "1. cong" << endl;
        cout << "2. tru" << endl;
        cout << "3. nhan" << endl;
        cout << "4. chia" << endl;
        cout << "5. thoat" << endl;
        cout << "----------------------" << endl;

        // Yêu cầu người dùng chọn một lựa chọn từ menu
        cout << "chon 1 lua chon: ";
        cin >> choice;

        // Xử lý lựa chọn của người dùng
        switch (choice) {
        case 1: { // Cộng
            int num1, num2;
            cout << "nhap so thu nhat: ";
            cin >> num1;
            cout << "nhap so thu 2: ";
            cin >> num2;
            cout << "ket qua: " << num1 + num2 << endl;
            break;
        }
        case 2: { // Trừ
            int num1, num2;
            cout << "nhap so bi tru: ";
            cin >> num1;
            cout << "nhap so tru di: ";
            cin >> num2;
            cout << "ket qua: " << num1 - num2 << endl;
            break;
        }
        case 3: { // Nhân
            int num1, num2;
            cout << "nhap so thu nhat: ";
            cin >> num1;
            cout << "nhap so thu 2: ";
            cin >> num2;
            cout << "ket qua: " << num1 * num2 << endl;
            break;
        }
        case 4: { // Chia
            int num1, num2;
            cout << "nhap so bi chia: ";
            cin >> num1;
            cout << "nhap so chia: ";
            cin >> num2;
            if (num2 != 0) {
                cout << "ket qua: " << num1 / num2 << endl;
            }
            else {
                cout << "loi: ko the chia cho 0!" << endl;
            }
            break;
        }
        case 5: // Thoát khỏi chương trình
            cout << "da thoat chuong trinh." << endl;
            break;
        default:
            cout << "lua chon ko hop le. vui long chon lai!" << endl;
        }

        cout << endl;

    } while (choice != 5);

    return 0;
}