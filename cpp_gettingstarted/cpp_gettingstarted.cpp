#include<iostream>
#include<fstream>

int main(int argc, char *argv[]) {
	/*This is a command line tool.
	* path: ./x64/Debug/cpp_gettingstarted.exe name1 name2 to run it.
	*/
	if (argc != 3) {
		std::cerr << "Use: hello name1 name2" << std::endl;
		return 1;
	}
	std::cout << "Hello " << argv[1] << "!" << std::endl;
	std::cout << "Best wishes \n" << "\tyours " << argv[2] << std::endl;
	return 0;

}