// Outputs three random numbers

#include<iostream>  // Declaration of cin and cout
#include<cstdlib>   // Prototypes of srand(), rand():
                    // void srand( unsigned int seed );
                    // int rand( void );

int main() {
    unsigned int seed;
    int z1;
    int z2;
    int z3;

    std::cout << " --- Random Numbers --- \n" << std::endl;
    std::cout << "To initialize the random number generator," << "\n please enter an integer value:";

    std::cin >> seed; // Input an integer

    srand(seed); // and use it as argument for a new seq of random numbers.

    z1 = rand(); // Compute three random numbers
    z2 = rand();
    z3 = rand();

    std::cout << "\nThree random numbers: " << z1 << " " << z2 << " " << z3 << std::endl;

    return 0;
}