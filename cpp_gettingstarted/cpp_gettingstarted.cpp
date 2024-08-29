#include<iostream>
#include<iomanip>

int main() {
	double number1 = { 0.123456 };
	double number2 = { 23.987 };
	double number3 = { -123.456 };
	std::cout << std::left << std::setw(15) << number1 << std::endl;
	std::cout<< std::setprecision(2) << std::fixed << std::right << std::setw(12) << number2 << std::endl;
	std::cout << std::scientific << std::setprecision(4) << number3 << std::endl;

	return 0;

}
