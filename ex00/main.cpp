#include "Zombie.hpp"

int main()
{
    // Create a Zombie on the heap using newZombie()
    // Must be deleted manually to avoid memory leaks
	Zombie *allocatedZombie = newZombie("Heap");
	allocatedZombie->announce();

	// Create a Zombie on the stack using randomChump()
    // Automatically destroyed
	randomChump("Stack");

    // Free the heap-allocated Zombie
	delete allocatedZombie;
	return (0);
}
