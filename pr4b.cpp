#include <iostream>
#include <string>
using namespace std;
class ElectricityBill {
private:
    string name;
    string address;
    double unitsConsumed, ratePerUnit;
public:
    ElectricityBill(string name, string address, double unitsConsumed, double ratePerUnit) {
        this->name = name;
        this->address = address;
        this->unitsConsumed = unitsConsumed;
        this->ratePerUnit = ratePerUnit;
    }
    double calculateBill() {
        return unitsConsumed * ratePerUnit;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
    void display(double billAmount) {
        display();
        cout << "Electricity Bill for the current month: $" << billAmount << endl;
    }
};
int main() {
    string name, address;
    double unitsConsumed, ratePerUnit;
    cout<<"Prasad Mankar\n";
    cout<<"Roll No :- 55\n";
    cout<<"---------------------------------\n";
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter address: ";
    getline(cin, address);
    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
    
    if(unitsConsumed <= 100){
        ratePerUnit = 10;
    }   
    else if(unitsConsumed <= 200){
        ratePerUnit = 20;
    }   
    else if(unitsConsumed <= 300){
        ratePerUnit = 30;
    }   
    else if(unitsConsumed <= 400){
        ratePerUnit = 40;
    }
    else {
        ratePerUnit = 50; // Assuming ratePerUnit for consumption above 400 units
    }
        
    ElectricityBill bill(name, address, unitsConsumed, ratePerUnit);
    double billAmount = bill.calculateBill();
    bill.display(billAmount);
    return 0;
}

