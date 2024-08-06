// To use strings.

#include <iostream>  // Declaration of cin, cout
#include <string>    // Declaration of class string

int main() {
	// Defines four strings:
	std::string prompt("What is your name: ");
	std::string name; // An empty
	std::string line(40, '-'); // string with 40 '-'
	std::string total = "Hello ";

	std::cout << prompt; // Request for input.
	std::getline(std::cin, name); // Inputs a name in one line
	total = total + name;  // Concatenates and assigns strings.

	std::cout << line << std::endl << total << std::endl;
	std::cout << "Your name is " << name.length() << "characters long!" << std::endl;
	std::cout << line << std::endl;

	return 0;
}
