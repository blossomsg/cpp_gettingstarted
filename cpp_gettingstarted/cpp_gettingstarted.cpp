// Return values in feet and inches eg: 77 inches is 6ft 5in
#include <iostream>

int main(void) {
  unsigned int inches{};
  unsigned int feet{};
  const unsigned inches_per_foot{12};

  std::cin >> inches;

  feet = inches / inches_per_foot;
  inches %= inches_per_foot;
  std::cout << "result: " << feet << " feet " << inches << " inches " << std::endl;

  return 0;
}