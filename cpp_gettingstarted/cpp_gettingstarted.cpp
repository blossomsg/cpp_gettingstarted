#include "vehicle.h"

int main() {
  Vehicle bike1, car1;

  bike1.init("Apache", "TVS", 160);
  bike1.display();

  car1.init("Celerio", "Maruti Suzuki", 1200);
  car1.display();

  return 0;
}
