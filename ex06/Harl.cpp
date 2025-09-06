#include <iostream>
#include "Harl.hpp"

void Harl::_debug()
{
    std::cout
	<< "[ DEBUG ]\n"
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
    << "I really do!\n"
	<< std::endl;
}

void Harl::_info()
{
    std::cout
	<< "[ INFO ]\n"
    << "I cannot believe adding extra bacon costs more money.\n"
    << "You didn’t put enough bacon in my burger!\n"
    << "If you did, I wouldn’t be asking for more!\n"
	<< std::endl;
}

void Harl::_warning()
{
    std::cout
	<< "[ WARNING ]\n"
	<< "I think I deserve to have some extra bacon for free.\n"
    << "I’ve been coming for years whereas you started working here since last month.\n"
    << std::endl;
}

void Harl::_error()
{
    std::cout
	<< "[ ERROR ]\n"
    << "This is unacceptable! I want to speak to the manager now.\n"
    << std::endl;
}

void Harl::complain(std::string level)
{
	const int N = 4;
	int index;

	LevelMapping levels[N] = {
		{"DEBUG", &Harl::_debug},
		{"INFO", &Harl::_info},
		{"WARNING", &Harl::_warning},
		{"ERROR", &Harl::_error},
	};
	for (index = 0; index < N; index++)
	{
		if (levels[index].level == level)
			break ;
	}
	switch (index) {
		case 0:
			(this->*levels[0].method)();
			[[fallthrough]];
		case 1:
			(this->*levels[1].method)();
			[[fallthrough]];
		case 2:
			(this->*levels[2].method)();
			[[fallthrough]];
		case 3:
			(this->*levels[3].method)();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
