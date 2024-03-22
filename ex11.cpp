#include<iostream>
using namespace std;

class Area{
private:
    int length, breadth;

public:
    void setDim(int len, int bre){
        length = len;
        breadth = bre;
    }
    int getArea(){
        return length * breadth;
    }
};

int main() {
    int length, breadth;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    Area rectangle;
    rectangle.setDim(length, breadth);
    cout << "Area of the rectangle: " << rectangle.getArea() << endl;
    return 0;
}

