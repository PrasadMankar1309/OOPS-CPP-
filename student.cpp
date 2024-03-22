#include <iostream>

using namespace std;
class student{
    public:
    int sem;
    float percentage;
    char name[20],branch[50];
    void getdata(){
        cout<<"Enter the name of the student:";
        cin>>name;
        cout<<"Enter the branch of the student:";
        cin>>branch;
        cout<<"Enter the Semester of the student:";
        cin>>sem;
        cout<<"Enter the percentage of the student:";
        cin>>percentage;
        cout<<"-------------------------------------------------\n";
    }
    void displaydata(){
        cout<<"The name of the student is:"<<name<<endl;
        cout<<"The branch of the student is:"<<branch<<endl;
        cout<<"The Semester of the student is:"<<sem<<endl;
        cout<<"The percentage that student get:"<<percentage<<endl;
    }
    void greater(){
        if(percentage>=85){
            cout<<"The names of the students who have scored more than 85 percentage:"<<name<<endl;}
    }

};

int main()
{
	cout<<"Name :- Prasad Mankar\n";
	cout<<"Roll No :- 55\n";
	cout<<"-------------------------------\n";
    student s[50];
    int i,num;
    cout<<"Enter the number of data of the students that you wants to enter:";
    cin>>num;
    for(i=1;i<=num;i++){
        s[i].getdata();
    }
    for(i=1;i<=num;i++){
        s[i].displaydata();
    }
    for(i=1;i<=num;i++){
        s[i].greater();
    }
    return 0;
}
