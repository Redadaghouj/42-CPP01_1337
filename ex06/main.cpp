#include <cstdlib>
#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		return (EXIT_FAILURE);
	}
	harl.complain(argv[1]);
	return (EXIT_SUCCESS);
}
