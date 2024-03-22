#include<iostream>
using namespace std;

class Demo {
	public:
	void add(int a, float b)
	{
		float c;
		c = a + b;
		cout<<c<<"\n";
		cout<<"Function Having two Argumants\n";
	}
	void add(int a, float b , int c)
	{
		int d = a + b + c;
		cout<<d<<"\n";
		cout<<"Function Having three Argumants";
	}
};

int main()
{
	Demo a;
	a.add(10,15.6);
	a.add(10,1.6,525);
	return 0;
}
