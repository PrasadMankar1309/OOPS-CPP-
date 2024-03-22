#include<iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout<<"Default Constructor\n";
    }
    
    Demo(int a) {
        cout<<"Declared inside of the class\n";
        cout<<"\n"<<a;
    }
    
    Demo(string name, int ID);
    Demo(const Demo& other) {
        cout << "Copy Constructor\n";
    }
    
     ~Demo(){
    	cout<<"\nDestructor get Execeuted";
}
};

Demo::Demo(string name, int ID) {
    cout<<"\nDeclared outside of the class\n";
    cout<<"Name : "<<name<<" ID : "<<ID<<"\n";
}


int main() {
    Demo a, b(10), c("Prasad", 55);
    cout << "Copy Constructor Test\n";
    Demo copy;
    Demo copy2 = copy; 
    return 0;
}

