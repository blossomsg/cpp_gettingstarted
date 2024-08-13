#include<iostream>

int main() {
	int number;
	std::cout << "Please enter an integer: ";
	std::cin >> number;
	// manipulators oct, hex, decimal
	std::cout << std::uppercase << "octal \t     decimal \t hecadecimal \n" << 
	std::oct << number << "     \t" << std::dec << number << "      \t" << std::hex << number << std::endl;
	return 0;
}