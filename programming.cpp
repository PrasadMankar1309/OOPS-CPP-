#include <iostream>
#include <string>

class Programming {
private:
    std::string language;

public:
    // Constructor with optional language parameter
    Programming(const std::string& language = "programming languages") : language(language) {
        std::cout << "I love " << language << std::endl;
    }
};

int main() {
    // Create objects with different language scenarios
    std::cout<<"Name :- Prasad Mankar\n";
    std::cout<<"Roll No :- 55\n";
    Programming programming1;          // No language provided
    Programming programming2("cpp");    // Language provided

    return 0;
}

