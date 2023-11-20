#include <iostream>
#include <fstream>
using namespace std;

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;

// Declare a structure for the record.
struct Info
{
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE];
    char phone[PHONE_SIZE];
};

int main()
{
    Info person;    // To hold info about a person
    char again;     // To hold Enter key press
    fstream people; // File stream object

    // Open the file for input in binary mode.
    people.open("people.dat", ios::in | ios::binary);

    // Test for errors.
    if (!people)
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }

    cout << "Here are the people in the file:\n\n";

    // Read the first record from the file.
    people.read(reinterpret_cast<char *>(&person), sizeof(person));

    // While not at the end of the file, display the records.
    while (!people.eof())
    {
        // Display the record.
        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        cout << "Address line 1: " << person.address1 << endl;
        cout << "Address line 2: " << person.address2 << endl;
        cout << "Phone: " << person.phone << endl;

        // Wait for the user to press the Enter key.
        cout << "\nPress the Enter key to see the next record.";
        cin.ignore(); // Ignore Enter key press

        // Read the next record from the file.
        people.read(reinterpret_cast<char *>(&person), sizeof(person));
    }

    cout << "That's all the data in the file!\n";
    people.close();
    return 0;
}
