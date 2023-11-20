// bai14
#include <iostream>
#include <string>
using namespace std;

struct Part {
    string description;
    int quantity;
};

struct Container {
    Part part;
    int numParts;
};

void displayInventory(const Container* containers, int numContainers) {
    cout << "Inventory:\n";
    cout << "------------------------------\n";
    cout << "No.  Part Description    Quantity\n";
    cout << "------------------------------\n";
    for (int i = 0; i < numContainers; i++) {
        cout << i + 1 << "    " << containers[i].part.description << "            " << containers[i].numParts << "\n";
    }
    cout << "------------------------------\n";
}

void addParts(Container* containers, int containerIndex, int numParts) {
    containers[containerIndex].numParts += numParts;
}

void removeParts(Container* containers, int containerIndex, int numParts) {
    containers[containerIndex].numParts -= numParts;
}

int main() {
    const int numContainers = 10;
    Container containers[numContainers] = {
        {{"Van"}, 10},
        {{"Vong bi"}, 5},
        {{"Bushing"}, 15},
        {{"Khop noi"}, 21},
        {{"Mat bich"}, 7},
        {{"Banh rang"}, 5},
        {{"Vo hop so"}, 5},
        {{"Kep chan khong"}, 25},
        {{"Cap"}, 18},
        {{"Thanh"}, 12}
    };

    while (true) {
        displayInventory(containers, numContainers);

        cout << "Nhap lua chon (nhap 0 de thoat chuong trinh): ";
        int choice;
        cin >> choice;

        if (choice < 1 || choice > numContainers) {
            cout << "Lua chon khong hop le. Vui long nhap lai.\n";
            continue;
        }

        if (choice == 0) {
            break;
        }

        int selectedContainerIndex = choice - 1;
        Container selectedContainer = containers[selectedContainerIndex];

        cout << "Nhap so luong phan tu muon them (nhap gia tri am de xoa): ";
        int numParts;
        cin >> numParts;

        if (numParts < 0 || numParts > 30) {
            cout << "So luong khong hop le. Vui long nhap lai.\n";
            continue;
        }

        if (numParts > 0) {
            addParts(containers, selectedContainerIndex, numParts);
            cout << "Da them " << numParts << " phan tu vao thung.\n";
        }
        else if (numParts < 0) {
            numParts = -numParts;
            if (numParts > selectedContainer.numParts) {
                cout << "So luong khong hop le. Khong du phan tu de xoa.\n";
                continue;
            }
            removeParts(containers, selectedContainerIndex, numParts);
            cout << "Da xoa " << numParts << " phan tu khoi thung.\n";
        }
    }

    return 0;
}