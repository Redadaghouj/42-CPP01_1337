#include <iostream>
#include "Harl1.hpp"

void Harl1::_debug()
{
    std::cout
	<< "[ DEBUG ]\n"
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
    << "I really do!\n"
	<< std::endl;
}

void Harl1::_info()
{
    std::cout
	<< "[ INFO ]\n"
    << "I cannot believe adding extra bacon costs more money.\n"
    << "You didn’t put enough bacon in my burger!\n"
    << "If you did, I wouldn’t be asking for more!\n"
	<< std::endl;
}

void Harl1::_warning()
{
    std::cout
	<< "[ WARNING ]\n"
	<< "I think I deserve to have some extra bacon for free.\n"
    << "I’ve been coming for years whereas you started working here since last month.\n"
    << std::endl;
}

void Harl1::_error()
{
    std::cout
	<< "[ ERROR ]\n"
    << "This is unacceptable! I want to speak to the manager now.\n"
    << std::endl;
}

void Harl1::complain(std::string level)
{
	const int N = 4;

	LevelMapping levels[N] = {
		{"DEBUG", &Harl1::_debug},
		{"INFO", &Harl1::_info},
		{"WARNING", &Harl1::_warning},
		{"ERROR", &Harl1::_error},
	};

	for (int i = 0; i < N; i++)
	{
		if (levels[i].level == level)
		{
			(this->*levels[i].method)();
			return ;
		}
	}
	std::cout 
    << "[ ERROR: *IMAGINARY* LEVEL ]\n"
	<< "Harl keeps complaining, but now it’s about you.\n" 
    << std::endl;
}
