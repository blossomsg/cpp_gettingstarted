// A program with resistant mistakes
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string word;
	cout << "Let's go! Press the return key: ";
	cin.get();
	cout << "Enter a word containing three characters at most : ";
	cin >> setw(3) >> word;
	cout << "Your input: " << word << endl;
	return 0;
}