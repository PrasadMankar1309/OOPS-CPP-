#include<iostream>
using namespace std;
class Demo{
	private:
		int private_variable = 10;
	protected :
		int protected_variable = 20;
	friend class Demo1;
};

class Demo1{
	public:
	void show(Demo a)
	{
		cout<<"Private Variable \n"<<a.private_variable;
		cout<<"Protectetd Variable "<<a.protected_variable;
	}
};
+
int main()
{
	Demo a;
	Demo1 b;
	b.show(a);
}
