#include <iostream>
#include <vector>
#include <string>

class Book {
public:
    std::string name;
    double price;
    int availableCopies;
    std::string barcode;

    Book() {}

    Book(std::string name, double price, int availableCopies, std::string barcode)
        : name(name), price(price), availableCopies(availableCopies), barcode(barcode) {}

    void displayBookDetails() const {
        using namespace std;
        cout << "Book Details:\n";
        cout << "Name: " << name << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Available Copies: " << availableCopies << "\n";
        cout << "Barcode: " << barcode << "\n";
    }
};

class Library {
private:
    std::vector<Book> books;

public:
    void getBookDetails() {
        Book newBook;

        using namespace std;
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, newBook.name);

        cout << "Enter Price: $";
        cin >> newBook.price;

        cout << "Enter Available Copies: ";
        cin >> newBook.availableCopies;

        cout << "Enter Barcode: ";
        cin.ignore();
        getline(cin, newBook.barcode);

        books.push_back(newBook);
        cout << "Book added to the library.\n";
    }

    void displayBookDetails() const {
        using namespace std;
        if (books.empty()) {
            cout << "No books in the library.\n";
        } else {
            cout << "Books in the library:\n";
            for (const Book& book : books) {
                book.displayBookDetails();
                cout << "-----------------------------\n";
            }
        }
    }

    void findBook(const std::string& barcode) const {
        using namespace std;
        bool found = false;
        for (const Book& book : books) {
            if (book.barcode == barcode) {
                cout << "Book found in the library:\n";
                book.displayBookDetails();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Book not found in the library.\n";
        }
    }
};

int main() {
    Library library;

    int choice;
    do {
        using namespace std;
        cout<<"Name :- Prasad Mankar\n";
        cout<<"Roll Number :- 56 ";
        cout << "\nLibrary Management System Menu:\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Find Book\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                library.getBookDetails();
                break;
            case 2:
                library.displayBookDetails();
                break;
            case 3:
                string searchBarcode;
                cout << "Enter the Barcode to search: ";
                cin.ignore();
                getline(cin, searchBarcode);
                library.findBook(searchBarcode);
                break;
            // case 0:
            //     cout << "Exiting the program. Thank you!\n";
            //     break;
            // default:
            //     cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

