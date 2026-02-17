#include<iostream>
#include<string>
#include<fstream>

std::string read_source(const char *filepath);

int main() {
	std::string file { read_source("cpp_gettingstarted.cpp") };
	std::cout << file << std::endl;

}

std::string read_source(const char *filepath){
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
	