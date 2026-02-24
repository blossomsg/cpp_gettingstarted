#ifndef VEHICLE
#define VEHICLE

#include <iostream>
#include <string>

class Vehicle {
private:
  std::string name;
  std::string brand;
  unsigned int cc;

public:
  bool init(const std::string &v_name, const std::string &v_brand,
            unsigned int v_cc);
  void display();
};

#endif // !VEHICLE
