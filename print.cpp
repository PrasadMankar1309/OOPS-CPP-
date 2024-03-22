#include <iostream>
#include <string>

class Student {
private:
   std::string name;

public:
   // Constructor with optional name parameter
   Student(const std::string& name = "Unknown") : name(name) {}

   // Function to print the student's name
   void printName() const {
       std::cout << "Student Name: " << name << std::endl;
   }
};

int main() {
   // Create objects with different name scenarios
   std::cout<<"Name :-Prasad MAnkar\n";
   std::cout<<"Roll No :- 55\n";
   Student student1;                   // No name provided
   Student student2("Alice");          // Name provided
   Student student3("Bob");

   // Print their names
   student1.printName();  // Output: Student Name: Unknown
   student2.printName();  // Output: Student Name: Alice
   student3.printName();  // Output: Student Name: Bob

   return 0;
}

