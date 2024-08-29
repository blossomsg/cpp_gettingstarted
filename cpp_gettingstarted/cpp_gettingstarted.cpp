#include<iostream>
#include<iomanip>

int main() {
	int article_number;
	int quantity;
	double unit_price;

	std::cout << "Article Number:    ";
	std::cin >> article_number;

	std::cout << "Quantity:    ";
	std::cin >> quantity;

	std::cout << "Price per piece:    ";
	std::cin >> unit_price;

	std::cout << "Article Number" << std::setw(20) << "Number of Pieces" << std::setw(20) << "Unit Price" << std::endl;
	std::cout << "\t" << article_number << std::setw(20)<< quantity << std::setw(20) << std::fixed << std::setprecision(2) << unit_price << " Dollar" << std::endl;
	

	return 0;
}