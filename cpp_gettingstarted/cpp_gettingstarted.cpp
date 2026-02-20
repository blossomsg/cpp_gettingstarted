#include "utils.h"
#include <iostream>

int main() {
    writes_source("something.txt",
        "first line\nnewline also works");
      std::string file{reads_source("something.txt")};
  std::cout << file << std::endl;
}
