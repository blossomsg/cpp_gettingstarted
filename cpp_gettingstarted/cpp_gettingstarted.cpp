//directive
#include<iostream>


void print_something(); //Prototypes
double hypotenuse_of_triangle(double base, double height, double exponent); //Prototypes
int some_value{ 15 };

int main(void) {
	print_something();
	double hypotenuse{ std::sqrt(hypotenuse_of_triangle(10, 25, 2)) };
	int& rsome_value{ some_value };
	std::cout << &rsome_value << "\n" << rsome_value << "\n" << --rsome_value << std::endl;


	return 0;
}

//Function Prototypes
void print_something() {
	std::cout << "something" << std::endl;
}

double hypotenuse_of_triangle(double base, double height, double exponent) {
	//hyp^2=base^2+height^2
	double hypotenuse{ std::pow(base, exponent) + std::pow(height, exponent) };
	return hypotenuse;
}