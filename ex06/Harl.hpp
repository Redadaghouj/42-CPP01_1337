#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	private:
		void _debug();
		void _info();
		void _warning();
		void _error();

	public:
		void complain(std::string level);
};

typedef void (Harl::*Handler)();

typedef struct LevelMapping
{
	std::string level;
	Handler method;
} LevelMapping;

#endif