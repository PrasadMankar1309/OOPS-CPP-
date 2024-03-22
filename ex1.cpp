#include<iostream>
using namespace std;

class Demo{
	private:
		int ID;
	protected:
	 	string name;
	
	public:
		string dept;
	
	void getdata(){
		cout<<"Entre the ID Name & Department ";
		cin>>ID>>name>>dept;
	
	}
	
	void showdata()
	{
		cout<<"ID : "<<ID<<" Name : "<<name<<" Deptartment : "<<dept;
	}
	
};

int main()
{
	Demo a;
	a.getdata();
	a.showdata();
	
	return 0;
}
