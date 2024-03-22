#include <iostream>

class Rectangle {
private:
   int length;
   int breadth;

public:
   // Constructor with no parameters (default values)
   Rectangle() : length(0), breadth(0) {}

   // Constructor with two parameters
   Rectangle(int l, int b) : length(l), breadth(b) {}

   // Constructor with one parameter (both length and breadth assigned the same value)
   Rectangle(int side) : length(side), breadth(side) {}

   // Function to calculate and return the area
   int getArea() const {
       return length * breadth;
   }

   // Destructor (optional, not strictly necessary in this case)
   ~Rectangle() {
       std::cout << "Rectangle object destroyed." << std::endl;
   }
};

int main() {
   // Create objects with different constructors
   std::cout<<"Prasad MAnkar\n";
   std::cout<<"ROll No :- 55\n";
   Rectangle rect1;          // No parameters
   Rectangle rect2(5, 3);    // Two parameters
   Rectangle rect3(4);       // One parameter

   // Print their areas
   std::cout << "Area of rect1: " << rect1.getArea() << std::endl;
   std::cout << "Area of rect2: " << rect2.getArea() << std::endl;
   std::cout << "Area of rect3: " << rect3.getArea() << std::endl;

   return 0;
}

