#include <iostream>
using std::cout; 
using std::string;

int main() {
    // Named string constant for first and last names with a space in between
    const string fullName = "MIR AHMAD ALI";

    // Print the length and size of the named constant object
    cout << "Length of fullName: " << fullName.length() << std::endl;
    cout << "Size of fullName: " << fullName.size() << std::endl;

    return 0;
}
