#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string a;
	cout<<"Entre String \n";
	cin>>a;
	cout<<a;
	string b;
	cout<<" \nEntre String with white space "<<b;
	getline(cin,b);
	cout<<b;
	cout<<a.length();
	return 0;
}
