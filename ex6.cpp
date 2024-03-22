#include <iostream>
using namespace std;

class A {
public:
    A() {
        staticMemberFunction(); 
    }

    static void staticMemberFunction() {
        static int x; 
        static int ID = 27;
        cout << "Static member function called. x = " << x << endl;
        cout << "Static member function called. ID = " << ID << endl;
    }
};

int main() {
    A a;
    cout<<"Using Scope resoultion opeator\n";
    A :: staticMemberFunction();
    return 0;
}
