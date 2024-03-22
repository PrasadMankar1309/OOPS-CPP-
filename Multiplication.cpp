#include <iostream>

class NumberOperations {
private:
    int number;

public:
    void setNumber(int num) { number = num; }
    bool isEven() const { return number % 2 == 0; }
    bool isPrime() const {
        if (number <= 1) return false;
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) return false;
        }
        return true;
    }
    int factorial() const {
        if (number < 0) return -1; // Handle negative numbers
        int result = 1;
        for (int i = 2; i <= number; ++i) {
            result *= i;
        }
        return result;
    }
    int sumOfDigits() const {
        int sum = 0;
        int temp = number;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        return sum;
    }
    int countEvenDigits() const {
        int count = 0;
        int temp = number;
        while (temp > 0) {
            if (temp % 2 == 0) ++count;
            temp /= 10;
        }
        return count;
    }
    int countOddDigits() const {
        return number - countEvenDigits(); // Efficiently utilize previous function
    }

    void printDetails() const {
        std::cout << "Number: " << number << std::endl;
        std::cout << "Is even: " << (isEven() ? "Yes" : "No") << std::endl;
        std::cout << "Is prime: " << (isPrime() ? "Yes" : "No") << std::endl;
        std::cout << "Factorial: " << factorial() << std::endl;
        std::cout << "Sum of digits: " << sumOfDigits() << std::endl;
        std::cout << "Number of even digits: " << countEvenDigits() << std::endl;
        std::cout << "Number of odd digits: " << countOddDigits() << std::endl;
    }
};

int main() {
    int num;
    std::cout<<"Roll No :- 55\n";
    std::cout<<"Name :- Prasad Mankar\n";
    std::cout << "Enter a number: ";
    std::cin >> num;

    NumberOperations numberOperations;
    numberOperations.setNumber(num);
    numberOperations.printDetails();

    return 0;
}

