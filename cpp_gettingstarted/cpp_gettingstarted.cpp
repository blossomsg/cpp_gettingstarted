#include<iostream>
#include<iomanip>

int main() {
	unsigned char ch;
	unsigned int num;

	std::cin >> num;

	ch = num;

	std::cout << "The character:  " << ch << std::endl;

	num = ch;
	
	std::cout << std::uppercase << std::hex << ch << std::endl;
	std::cout << std::oct << "\n" <<ch << std::endl;
	std::cout << std::dec << "\n" << ch << std::endl;
	return 0;
}