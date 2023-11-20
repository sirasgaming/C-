// bai9
#include <iostream>
#include <string>
using namespace std;

struct Speaker {
    string name;
    string phoneNumber;
    string topic;
    double fee;
};

const int MAX_SPEAKERS = 10;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Them dien gia moi" << endl;
    cout << "2. Hien thi thong tin tat ca dien gia" << endl;
    cout << "3. Sua thong tin dien gia" << endl;
    cout << "4. Thoat" << endl;
    cout << "Vui long chon mot tuy chon: ";
}

void addSpeaker(Speaker speakers[], int& count) {
    if (count >= MAX_SPEAKERS) {
        cout << "Khong the them dien gia moi. Mang da day!" << endl;
        return;
    }

    Speaker newSpeaker;
    cout << "Nhap ten dien gia: ";
    getline(cin, newSpeaker.name);

    cout << "Nhap so dien thoai: ";
    getline(cin, newSpeaker.phoneNumber);

    cout << "Nhap chu de noi: ";
    getline(cin, newSpeaker.topic);

    cout << "Nhap phi: ";
    cin >> newSpeaker.fee;

    // Xoa bo dem sau khi nhap phi
    cin.ignore();

    // Kiem tra phi khong duoc am
    if (newSpeaker.fee < 0) {
        cout << "Phi khong duoc am!" << endl;
        return;
    }

    speakers[count] = newSpeaker;
    count++;
    cout << "Dien gia da duoc them thanh cong!" << endl;
}

void displaySpeakers(const Speaker speakers[], int count) {
    if (count == 0) {
        cout << "Khong co dien gia nao duoc luu tru." << endl;
        return;
    }

    cout << "Danh sach dien gia:" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Dien gia " << i + 1 << ":" << endl;
        cout << "Ten: " << speakers[i].name << endl;
        cout << "So dien thoai: " << speakers[i].phoneNumber << endl;
        cout << "Chu de noi: " << speakers[i].topic << endl;
        cout << "Phi: " << speakers[i].fee << endl;
        cout << endl;
    }
}

void editSpeaker(Speaker speakers[], int count) {
    if (count == 0) {
        cout << "Khong co dien gia nao duoc luu tru." << endl;
        return;
    }

    cout << "Nhap so thu tu cua dien gia ban muon sua: ";
    int index;
    cin >> index;

    if (index < 1 || index > count) {
        cout << "So thu tu khong hop le!" << endl;
        return;
    }

    // Xoa bo dem sau khi nhap so thu tu
    cin.ignore();

    Speaker& speaker = speakers[index - 1];

    cout << "Nhap ten moi (rong de bo qua): ";
    getline(cin, speaker.name);

    cout << "Nhap so dien thoai moi (rong de bo qua): ";
    getline(cin, speaker.phoneNumber);

    cout << "Nhap chu de noi moi (rong de bo qua): ";
    getline(cin, speaker.topic);

    cout << "Nhap phi moi (rong de bo qua): ";
    double newFee;
    cin >> newFee;

    // Xoa bo dem sau khi nhap phi moi
    cin.ignore();

    if (newFee >= 0) {
        speaker.fee = newFee;
    }

    cout << "Thong tin dien gia da duoc cap nhat!" << endl;
}

int main() {
    Speaker speakers[MAX_SPEAKERS];
    int count = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        // Xoa bo dem sau khi nhap lua chon
        cin.ignore();

        switch (choice) {
        case 1:
            addSpeaker(speakers, count);
            break;
        case 2:
            displaySpeakers(speakers, count);
            break;
        case 3:
            editSpeaker(speakers, count);
            break;
        case 4:
            cout << "Chuong trinh ket thuc.";
            break;
        default:
            cout << "Lua chon khong hop le!";
            break;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}
