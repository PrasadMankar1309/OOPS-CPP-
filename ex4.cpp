#include<iostream>
using namespace std;

class Demo {
	public:
	Demo() {
	cout<<"Default Constructor \n";
	}
	
	Demo(int a){
		cout<<"Declatred inside of the class\n";
		cout<<a;
	}
	
	 Demo(string name, int ID);
};

Demo::Demo(string name, int ID){
	cout<<"Declatred outside of the class\n";
	cout<<"Name : "<<name<<"ID : "<<ID;
}
int main()
{
	Demo a,b(10),c("Prasad", 55);
	return 0;
	
}
