// bai13
#include <iostream>
#include <string>
using namespace std;

struct Drink {
    string name;
    double cost;
    int quantity;
};

void displayMenu(const Drink* drinks, int numDrinks) {
    cout << "Menu:\n";
    cout << "----------------------------------\n";
    cout << "STT  Ten do uong   Gia    So luong\n";
    cout << "----------------------------------\n";
    for (int i = 0; i < numDrinks; i++) {
        cout << i + 1 << "    " << drinks[i].name << "    " << drinks[i].cost << "    " << drinks[i].quantity << "\n";
    }
    cout << "----------------------------------\n";
}

int main() {
    const int numDrinks = 5;
    Drink drinks[numDrinks] = {
        {"Cola", 0.75, 20},
        {"Bia goc", 0.75, 20},
        {"chanh-voi", 0.75, 20},
        {"Soda nho", 0.80, 20},
        {"Kem Soda", 0.80, 20}
    };

    double totalEarnings = 0.0;

    while (true) {
        displayMenu(drinks, numDrinks);

        cout << "Nhap lua chon (nhap 0 de thoat chuong trinh): ";
        int choice;
        cin >> choice;

        if (choice < 1 || choice > numDrinks) {
            cout << "Lua chon khong hop le. Vui long nhap lai.\n";
            continue;
        }

        if (choice == 0) {
            break;
        }

        int selectedDrinkIndex = choice - 1;
        Drink selectedDrink = drinks[selectedDrinkIndex];

        if (selectedDrink.quantity == 0) {
            cout << "Do uong da ban het. Vui long chon do uong khac.\n";
            continue;
        }

        cout << "Nhap so luong: ";
        int quantity;
        cin >> quantity;

        if (quantity <= 0 || quantity > selectedDrink.quantity) {
            cout << "So luong khong hop le. Vui long nhap lai.\n";
            continue;
        }

        double totalCost = selectedDrink.cost * quantity;
        cout << "So tien thay doi: " << totalCost << endl;

        totalEarnings += totalCost;
        selectedDrink.quantity -= quantity;
        drinks[selectedDrinkIndex] = selectedDrink;
    }

    cout << "Tong so tien ma may kiem duoc: " << totalEarnings << endl;

    return 0;
}