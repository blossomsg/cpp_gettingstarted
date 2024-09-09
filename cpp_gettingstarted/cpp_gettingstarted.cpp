#include<iostream>

int main() {
	double x;
	double y;

	std::cout << "\n Enter two floating-point values: ";
	std::cin >> x >> y;
	std::cout << "The average of the two numbers are: " << (x + y) / 2.0 << std::endl;

	return 0;
}