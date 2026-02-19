#include "utilities.h"
#include<iostream>
#include<fstream>

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
