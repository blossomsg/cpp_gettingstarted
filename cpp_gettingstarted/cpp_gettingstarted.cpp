// C++ primer 5th edition examples
#include<iostream>
#include<iomanip>
#include<string>

int main() {
	int i = { -16 };
	double d = 3.14159;

	// pad the first column to use a minimum of 12 positions in the output
	std::cout << "i: " << std::setw(12) << i << "next col" << '\n';
	std::cout << "d: " << std::setw(12) << d << "next col" << '\n';
	std::cout << std::left << "i: " << std::setw(12) << i << "next col" << '\n';
	std::cout << std::left << "d: " << std::setw(12) << d << "next col" << '\n';
	std::cout << std::right << "i: " << std::setw(12) << i << "next col" << '\n';
	std::cout << std::right << "d: " << std::setw(12) << d << "next col" << '\n';
	std::cout << std::internal << "i: " << std::setw(12) << i << "next col" << '\n';
	std::cout << std::internal << "d: " << std::setw(12) << d << "next col" << '\n';
	std::cout << std::setfill(' ') << "i: " << std::setw(12) << i << "next col" << '\n';
	std::cout << std::setfill(' ') << "d: " << std::setw(12) << d << "next col" << '\n';

	// ulla kirch manipulators
	int number = ' ';
	std::cout << "The white space code is as follows: " << number << std::endl;
	char ch;
	std::string prompt = "\nPlease enter a character followed by <return>:";
	std::cout << prompt;


}