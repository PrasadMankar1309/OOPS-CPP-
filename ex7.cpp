#include<iostream>
using namespace std;

class Demo{
private:
    int ID;

    friend int f1(Demo); 
};

int f1(Demo a ) { 
    a.ID = 55;
    return a.ID; 
}

int main() {
    Demo a;
    cout << f1(a); 
    return 0;
}

