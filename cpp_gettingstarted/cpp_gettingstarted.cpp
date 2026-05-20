// Area of Circle pi*sqrt(r)
#include <iostream>
// new lib
#include <numbers>

int main(void) {
	// new constant style
  const double pi{std::numbers::pi_v<double>};
  double radius{};
  double area{};

  std::cout << "Enter radius: ";
  std::cin >> radius;

  area = pi * radius * radius;

  std::cout << "Area of Circle: " << area << std::endl;

  return 0;
}
