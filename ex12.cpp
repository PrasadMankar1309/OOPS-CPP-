#include<iostream>
using namespace std;
class Mammals{
	public:
	void identity1(){
		cout<<"I am Mammal";
	}
};

class MarineAnimals{
	public:
		void identity2(){
		cout<<"I am MarineAnimal";
	}
};

class BlueWheal : public Mammals, public MarineAnimals{
	public:
		void identity3(){
		cout<<"I am BluleWheal";
	}
};

int main()
{
	BlueWheal a;
	a.identity1();
	a.identity2();
	a.identity3();
}
