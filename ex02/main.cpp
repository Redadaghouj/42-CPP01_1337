#include <iostream>
#include <iomanip>

const int WIDTH = 45;

void printAddress(const std::string *address, const std::string msg)
{
	std::cout
	<< std::left
	<< std::setw(WIDTH)
	<< msg << address
	<< std::endl;
}

void printValue(const std::string value, const std::string msg)
{
	std::cout
	<< std::left
	<< std::setw(WIDTH)
	<< msg << value
	<< std::endl;
}

void printSeparator(char c, int n)
{
	std::cout
	<< std::endl
	<< std::string(n, c)
	<< std::endl << std::endl;
}

int main()
{
	std::string announce = "HI THIS IS BRAIN";
	std::string *stringPTR = &announce;
	std::string &stringREF = announce;

	printAddress(&announce, "The memory address of the string variable: ");
	printAddress(stringPTR, "The memory address held by stringPTR: ");
	printAddress(&stringREF, "The memory address held by stringREF: ");

	printSeparator('-', 62);

	printValue(announce, "The value of the string variable: ");
	printValue(*stringPTR, "The value pointed to by stringPTR: ");
	printValue(stringREF, "The value pointed to by stringREF: ");
	return (0);
}
