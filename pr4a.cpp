#include <iostream>
using namespace std;

class AreaCalculator {
public:
    // Function to calculate area of rectangle
    void calculateArea(int length, int breadth) {
        int area = length * breadth;
        cout << "Area of rectangle: " << area << std::endl;
    }

    // Function to calculate area of square
    void calculateArea(int side) {
        int area = side * side;
        cout << "Area of square: " << area << std::endl;
    }
};

int main() {
    AreaCalculator calculator;
    cout<<"Prasad Mankar"<<endl;
    cout<<"Roll No :- 55"<<endl;
    cout<<"---------------------------------------------"<<endl;
int a ,b,c;
cout<<"Entre Length and breadth ( two pararmeter ) : ";
cin>>a>>b;
    calculator.calculateArea(4, 5);
    cout<<"-----------------------------------------------"<<endl;
cout<<"Entre Length and breadth having same value ( one pararmeter ) : ";
cin>>c;
    calculator.calculateArea(6);

    return 0;
}

