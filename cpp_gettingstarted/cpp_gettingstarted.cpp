// we open a file
// read the file
// save it in a variable
// and close the file

#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream file_path{
      R"(F:\All_Projs\c++_Proj\OGL_Proj\OGL_Proj\vertShader.glsl)",
      std::ios::in};
  std::string content{};
  if (!file_path.is_open()) {
    std::cerr << "Could not open file \n";
    return 1;
  }

  while (std::getline(file_path, content)) {
    std::cout << content << '\n';
  }

  file_path.close();

  return 0;
}
