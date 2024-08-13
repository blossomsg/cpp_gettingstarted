#include<iostream>
#include<string>

int main() {
	std::string text = { "I have learned something new again!" };
	std::string prompt = { "Please input two lines of text:" };
	std::string  str1;
	std::string  str2;
	std::string  sum;

	std::cout << text << std::endl;
	std::cout << prompt << std::endl;
	
	getline(std::cin, str1);
	getline(std::cin, str1);

	sum = str1 + "*" + str2;
	std::cout << sum << std::endl;
	std::cout << text.length() << std::endl;


	return 0;

}