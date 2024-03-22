#include<iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    Complex() : real(0), imaginary(0) {}
    Complex(int r, int i) : real(r), imaginary(i) {}

    Complex operator+(const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    void display() {
        cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
    }
};
int main() {
    Complex num1(3, 4); 
    Complex num2(5, 6); 
    Complex sum = num1 + num2; 
    sum.display(); 
    return 0;
}

