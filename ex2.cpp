#include<iostream>
using namespace std;

class demo {
	
	public :
		void show()
		{
			string a = "Vincent Pallotti \n";
			cout<<a;
		}
};

demo b;

int main()
{
	demo a;
	a.show();
	b.show();
	return 0;
}
