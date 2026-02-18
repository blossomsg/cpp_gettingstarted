#include <fstream>
#include <iostream>
#include <string>

std::string readFile(const char *filePath);
void writeFile(const char *filePath, const std::string data);

int main() {

  writeFile("something.txt", "New text.\nExploring new stuff.\n");
  std::string file{readFile("something.txt")};
  std::cout << file << std::endl;
}

// This function reads data from \p filePath.
std::string readFile(const char *filePath) {
  std::string content{};
  std::fstream fileStream(filePath, std::ios::in);
  std::string line{};

  while (!fileStream.eof()) {
    std::getline(fileStream, line);
    content.append(line + "\n");
  }
  fileStream.close();
  return content;
}

// This function writes \p data to \p filePath.
void writeFile(const char *filePath, const std::string data) {
  std::fstream fileStream(filePath, std::ios::out | std::ios::trunc);
  fileStream << data;
}
