#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library {
public:
    int barcode;
    char name[100];
    int price;
    int pages;
    int availableCopy;
};

void inputData(Library lib[], int& count) {
    cout << "Enter Barcode: ";
    cin >> lib[count].barcode;
    cout << "Enter Book Name: ";
    cin >> lib[count].name;
    cout << "Enter Price: ";
    cin >> lib[count].price;
    cout << "Enter Available Copy: ";
    cin >> lib[count].availableCopy;
    cout << "Enter Pages: ";
    cin >> lib[count].pages;
    count++;
}

void displayDetails(const Library lib[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "Barcode: " << lib[i].barcode << endl;
        cout << "Book Name: " << lib[i].name << endl;
        cout << "Book Price: " << lib[i].price << endl;
        cout << "Available Copy: " << lib[i].availableCopy << endl;
        cout << "Available Pages: " << lib[i].pages << endl;
        cout << "-----------------------------" << endl;
    }
}

void findBook(const Library lib[], int count) {
    int searchBarcode;
    cout << "Enter Barcode to find: ";
    cin >> searchBarcode;
    for (int i = 0; i < count; i++) {
        if (lib[i].barcode == searchBarcode) {
            cout << "Book found:\n";
            cout << "Barcode: " << lib[i].barcode << endl;
            cout << "Book Name: " << lib[i].name << endl;
            cout << "Book Price: " << lib[i].price << endl;
            cout << "Available Copy: " << lib[i].availableCopy << endl;
            cout << "Available Pages: " << lib[i].pages << endl;
            cout << "-----------------------------" << endl;
            return;
        }
    }
    cout << "Book not found.\n";
}

int main() {
    Library lib[20];
    int input = 0;
    int count = 0;
    cout<<"Prasad Mankar\n";
    cout<<"Roll No :- 55\n";
    cout<<"-----------------------\n";

    while (input != 5) {
        start:
        cout << "Enter 1. to input Data\n";
        cout << "Enter 2. to display Details\n";
        cout << "Enter 3. to find a Book\n";
        cout << "Enter 4. for quit\n";
        cout << "Enter Your Choice Here: ";
        cin >> input;

        switch (input) {
            case 1:
                inputData(lib, count);
                break;

            case 2:
                displayDetails(lib, count);
                break;

            case 3:
                findBook(lib, count);
                break;

            case 4:
                exit(0);
                break;

            default:
                cout << "Invalid Choice.\n";
                goto start;
        }
    }
    return 0;
}

