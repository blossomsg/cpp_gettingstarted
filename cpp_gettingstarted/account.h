#ifndef _ACCOUNT_
#define _ACCOUNT_

#include <iostream>
#include <string>

class Account {

private:
  std::string name;
  unsigned int nr;
  double balance;

public:
	bool init(const std::string &i_name, unsigned long i_nr, double i_balance);
	void display();
};

#endif // !_ACCOUNT_
