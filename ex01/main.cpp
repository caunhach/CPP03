#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a;
	ScavTrap b;
	ScavTrap c(b);
	ScavTrap d("Bob");
	ScavTrap e = b;
	a.attack(d.get_name());
	d.attack(c.get_name());
	for (int i=0; i<11; i++)
		a.attack(b.get_name());
	a.takeDamage(1);
	a.takeDamage(d.get_atk());
	a.takeDamage(9);
	a.beRepaired(1);
	b.takeDamage(10);
	b.takeDamage(c.get_atk());
	b.takeDamage(d.get_classhp());
	b.beRepaired(1);
	b.guardGate();
	c.takeDamage(50);
	c.takeDamage(a.get_atk());
	c.takeDamage(d.get_atk());
	c.takeDamage(0);
	c.beRepaired(1);
	c.guardGate();
	d.takeDamage(40);
	d.takeDamage(a.get_atk());
	d.beRepaired(c.get_classhp());
	d.beRepaired(1);
	d.guardGate();
	e.takeDamage(40);
	e.beRepaired(40);
	e.beRepaired(1);
	e.guardGate();
	return (0);
}