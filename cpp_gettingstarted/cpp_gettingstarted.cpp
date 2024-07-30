// Circumference and area of a circle with radius 2.5
#include<iostream>
//using namespace std;

const double pi = { 3.141593 };

int main() {
	double area, circuit, radius = { 1.5 };

	area = pi * radius * radius;
	circuit = 2 * pi * radius;
	std::cout << "\nTo Evaluate a Circle\n" << std::endl;
	std::cout << "Radius:       " << radius << std::endl;
	std::cout << "Circumference:       " << circuit << std::endl;
	std::cout << "Area:       " << area << std::endl;

	return 0;
}