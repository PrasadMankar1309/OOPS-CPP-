#include<iostream>
using namespace std;

class A{
	public:
	A()
	{
		static int x;
		cout<<x<<"\n";
	}
};

int main()
{
	A b;
	return 0;
}
