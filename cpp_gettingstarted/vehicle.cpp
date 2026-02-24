#include "vehicle.h"
#include <iomanip>
#include <iostream>

bool Vehicle::init(const std::string &v_name, const std::string &v_brand,
                   unsigned int v_cc) {
  if (v_name.size() < 1) {
    return false;
  }
  name = v_name;
  brand = v_brand;
  cc = v_cc;
  return true;
}

void Vehicle::display() {
  std::cout << std::fixed << std::setprecision(2) << "**********\n"
            << "Vehicle Name: " << name << "\n"
            << "Vehicle Brand: " << brand << "\n"
            << "Vehicle CC: " << cc << "\n"
            << "**********\n"
            << std::endl;
}
