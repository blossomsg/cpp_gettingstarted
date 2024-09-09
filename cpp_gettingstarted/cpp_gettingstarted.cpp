#include<iostream>

int main() {
	int i = { 2 };
	int j = { 8 };
	int k = { 3 };

	std::cout << i++ << std::endl;  //output 2
	std::cout << i << std::endl;  //output 3
	std::cout << j-- << std::endl;  //output 8
	std::cout << j << std::endl;  //output 7
	std::cout << --j << std::endl;  //output 6
	std::cout << ++k << std::endl;  //output 4
}