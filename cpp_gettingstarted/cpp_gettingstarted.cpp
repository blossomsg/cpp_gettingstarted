#include "account.h"
#include "vehicle.h"
#include <iostream>
#include <string>

bool getAccount(Account *pAccount);

int main() {
  Account current1, current2, *ptr = &current1;
  Vehicle bike1, car1;

  ptr->init("John Doe", 123456, 569.00);
  ptr->display();

  ptr = &current2;
  if (getAccount(ptr)) {
	  ptr->display();
  }
  else {
      std::cout << "Invalid input!!!!" << std::endl;
  }

  bike1.init("Apache", "TVS", 160);
  bike1.display();

  car1.init("Celerio", "Maruti Suzuki", 1200);
  car1.display();

  return 0;
}

bool getAccount(Account *pAccount) {
  std::string name;
  std::string line(50, '-');
  unsigned long nr;
  double startcapital;
  std::cout << line << "\n"
            << "Enter data for a new account: \n"
            << "Account holder: ";
  if (!getline(std::cin, name) || name.size() == 0) {
    return false;
  }
  std::cout << "Account Number: ";
  if (!(std::cin >> nr)) {
    return false;
  }
  std::cout << "Starting Capital: ";
  if (!(std::cin >> startcapital)) {
    return false;
  }
  pAccount->init(name, nr, startcapital);
  return true;
}
