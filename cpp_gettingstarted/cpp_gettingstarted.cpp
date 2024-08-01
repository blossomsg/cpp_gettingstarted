#include<iostream>

int main() {
	float val1 = { 123.456F };  // or double
	float val2 = { 76.543F };
	float sum, diff;

	sum = val1 + val2;
	diff = val1 - val2;
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Diff: " << diff << std::endl;
}