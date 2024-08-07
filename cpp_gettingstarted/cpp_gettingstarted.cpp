#include <iostream>
#include <math.h>

int main() {
	double number01 = { 4 };
	double number02 = { 12.25 };
	double number03 = { 0.0121 };
	
	std::cout << "Number" << "\tSquare Root" << std::endl;
	std::cout << "\n" << std::endl;
	std::cout << number01 << "\t" <<std::sqrt(number01) << std::endl;
	std::cout << number02 << "\t" << std::sqrt(number02) << std::endl;
	std::cout << number03 << "\t" << std::sqrt(number03) << std::endl;

	return 0;

}