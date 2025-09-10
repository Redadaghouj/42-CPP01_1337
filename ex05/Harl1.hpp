#ifndef HARL_HPP1
# define HARL_HPP1

#include <string>

class Harl1
{
	private:
		void _debug();
		void _info();
		void _warning();
		void _error();

	public:
		void complain(std::string level);
};

typedef void (Harl1::*Handler)();

typedef struct LevelMapping
{
	std::string level;
	Handler method;
} LevelMapping;

#endif