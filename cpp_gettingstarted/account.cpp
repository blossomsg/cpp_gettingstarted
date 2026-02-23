#include "account.h"
#include <iomanip>
#include <iostream>

bool Account::init(const std::string &i_name, unsigned long i_nr,
                   double i_balance) {
  if (i_name.size() < 1) {
    return false;
  }
  name = i_name;
  nr = i_nr;
  balance = i_balance;
  return true;
}

void Account::display() {
    std::cout << std::fixed << std::setprecision(2) << "___________\n" << "Account Holder: " << name << "\n" << "Account Number: " << nr << "\n" << "Account Balance: " << balance << "\n" << "___________\n" << std::endl;
}
