#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie *zombies;
	const int N = 5;

	zombies	= zombieHorde(N, "horde");
	for (int i = 0; i < N; i++)
	{
		std::cout << i + 1 << ". ";
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}
