#include<iostream>
using namespace std;

class Demo {
	public:
	int number;
	void getdata(int a){
		number = a;
	}
	
	void show()
	{
		cout<<number;
	}
	
	void show1()
	{
		cout<<"\n"<<number;
	}
};

int main()
{
	Demo a;
	a.getdata(10);
	a.show();
	a.show1();
	return 0;
}


