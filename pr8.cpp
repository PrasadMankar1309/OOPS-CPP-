#include <iostream>
using namespace std;

class DynamicArray {
private:
    int **array;
    int rows;
    int columns;

public:
    DynamicArray(int r, int c) : rows(r), columns(c) {
        array = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            array[i] = new int[columns];
        }
    }

    ~DynamicArray() {
        for (int i = 0; i < rows; ++i) {
            delete[] array[i];
        }
        delete[] array;
    }

    void inputValues() {
        cout<< "Enter " << rows * columns << " integer values for the array:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cin>> array[i][j];
            }
        }
    }

    int calculateSum() {
        int sum = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                sum += array[i][j];
            }
        }
        return sum;
    }

    void displayArray() {
        cout<< "The 2D array is:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout<< array[i][j] << " ";
            }
            cout<< std::endl;
        }
    }
};

int main() {
	cout<<"Name :- Prasad Mankar\n";
	cout<<"Roll No :- 55\n";
	cout<<"----------------------------\n";
    int rows, columns;
    cout<< "Enter the number of rows for the array: ";
    cin>> rows;
    cout<< "Enter the number of columns for the array: ";
    cin>> columns;

    DynamicArray arr(rows, columns);

    arr.inputValues();
    arr.displayArray();

    int sum = arr.calculateSum();
    cout<< "Sum of all values in the array: " << sum << std::endl;

    return 0;
}

