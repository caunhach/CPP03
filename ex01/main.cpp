#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a;
	ScavTrap b(a);
	a.attack("Peter");
	a.takeDamage(3);
	ScavTrap c = a;
	a.takeDamage(2);
	b.takeDamage(1);
	c.takeDamage(1);
	b.takeDamage(9);
	c.takeDamage(100);
	c.takeDamage(1);
	a.guardGate();
	a.beRepaired(2);
	a.beRepaired(7);
	return (0);
}