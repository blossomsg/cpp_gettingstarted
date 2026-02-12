#include<iostream>

int x = 10;
int x2 = 20;
int x3 = 30;

void rincrement(int &x); //Reference function
void vincrement(int x); //Value function
void pincrement(int *x); //Pointer function

int main() {
	rincrement(x);
	std::cout << "Ref increment: " << x << std::endl;

	vincrement(x2);
	std::cout << "Val increment: " << x2 << std::endl;

	pincrement(&x3);
	std::cout << "Pointer increment: " << x3 << std::endl;

	return 0;
}

void rincrement(int &x) {
	++x;
}

void vincrement(int x) {
	++x;
}

void pincrement(int *x) {
	++*x;
}