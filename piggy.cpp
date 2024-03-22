#include <iostream>

class AddAmount {
private:
    double amount;

public:
    // Constructor with no parameters (default initial amount)
    AddAmount() : amount(50) {}

    // Constructor with a parameter for the amount to add
    AddAmount(double addAmount) : amount(50 + addAmount) {}

    // Function to display the final amount
    void displayAmount() const {
        std::cout << "Final amount in the Piggie Bank: $" << amount << std::endl;
    }
};

int main() {
    // Create objects with different constructors
    std::cout<<"Name:- Prasad MAnkar\n";
    std::cout<<"Roll No :- 55\n";
    AddAmount piggyBank1;          // No additional amount added
    AddAmount piggyBank2(25);      // Add $25

    // Display final amounts
    piggyBank1.displayAmount();  // Output: Final amount in the Piggie Bank: $50
    piggyBank2.displayAmount();  // Output: Final amount in the Piggie Bank: $75

    return 0;
}

