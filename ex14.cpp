#include <iostream>
using namespace std;

class Account {
private:
    int accNumber;
    float balance;
public:
    void setAccountDetails(int accNum, float bal) {
        accNumber = accNum;
        balance = bal;
    }
    void displayAccount() {
        cout << "Account Number: " << accNumber << ", Balance: $" << balance << endl;
    }

    bool isBalanceGreaterThan2000() {
        return balance > 2000;
    }
};

int main() {
    Account accounts[5]; 
    for (int i = 0; i < 5; ++i) {
        int accNum;
        float bal;
        cout << "Enter account number for account " << i + 1 << ": ";
        cin >> accNum;
        cout << "Enter balance for account " << i + 1 << ": $";
        cin >> bal;
        accounts[i].setAccountDetails(accNum, bal);
    }
    cout << "\nAccounts with balance greater than 2000:\n";
    for (int i = 0; i < 5; ++i) {
        if (accounts[i].isBalanceGreaterThan2000()) {
            accounts[i].displayAccount();
        }
    }
    return 0;
}

