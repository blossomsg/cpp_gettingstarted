#include<iostream>

int main() {
	double x = { 12.248 };
	std::cout.precision(2); //Precision 2
	std::cout << "By default: " << x << std::endl;
	std::cout << "showpoint: " << std::showpoint << x << std::endl;
	std::cout << "fixed: " << x << std::endl;
	std::cout << "scientific: " << std::scientific << x << "\n" <<std::endl;

	double value = { 100 * std::sqrt(2.0) };

	std::cout << "default format: " << value << "\n" 
	<< "scientific: " << std::scientific << value << "\n"
	<< "fixed decimal: "<< std::fixed<< value<< std::endl;

	return 0;
}