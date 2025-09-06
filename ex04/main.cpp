#include "File.hpp"
#include <cstdlib>
#include <iostream>


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./Sed_is_for_losers /filename s1 s2" << std::endl;
		return (EXIT_FAILURE);
	}
	File sedJob(argv[1], argv[2], argv[3]);
	if (!sedJob.replaceKeyWord())
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
