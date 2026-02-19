#include <fstream>
#include <iostream>
#include <string>
#include "utilities.h"

int main() {

  writeFile("something.txt", "New Calls,\nFrom headers.\n");
  std::string file{readFile("something.txt")};
  std::cout << file << std::endl;
}
