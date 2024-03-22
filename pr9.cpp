#include <iostream>
#include <fstream>

using namespace std;

// Function to generate numbers from 1 to 100
void generateNumbers() {
    ofstream evenFile("even.txt");
    ofstream oddFile("odd.txt");

    if (!evenFile || !oddFile) {
        cout << "Error creating files." << endl;
        return;
    }

    for (int i = 1; i <= 100; ++i) {
        if (i % 2 == 0) {
            evenFile << i << " " ;
        } else {
            oddFile << i << " ";
        }
    }

    evenFile.close();
    oddFile.close();
}

// Function to display the contents of both files
void displayContents() {
    string line;

    cout << "Even numbers:" << endl;
    ifstream evenFile("even.txt");
    if (evenFile.is_open()) {
        while (getline(evenFile, line)) {
            cout << line << endl;
        }
        evenFile.close();
    } else {
        cout << "Unable to open even.txt" << endl;
    }

    cout << "\nOdd numbers:" << endl;
    ifstream oddFile("odd.txt");
    if (oddFile.is_open()) {
        while (getline(oddFile, line)) {
            cout << line << endl;
        }
        oddFile.close();
    } else {
        cout << "Unable to open odd.txt" << endl;
    }
}

int main() {
	cout<<"Name :- Prasad Mankar\n";
	cout<<"Roll No :- 55\n";
	cout<<"----------------------------\n";
    // Generate numbers and categorize them into files
    generateNumbers();

    // Display contents of files
    displayContents();

    return 0;
}
