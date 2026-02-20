#include "utils.h"
#include<fstream>

std::string reads_source(const char *filepath) {
	std::string file_content{};
	std::ifstream file_stream(filepath, std::ios::in);
	std::string line{};
	while (!file_stream.eof()) {
		getline(file_stream, line);
		file_content.append(line + "\n");
	}
	file_stream.close();
	return file_content;
}

void writes_source(const char *filepath, const std::string text)
{
	std::ofstream file_stream(filepath, std::ios::out, std::ios::trunc);
	file_stream << text;
	file_stream.close();
}
