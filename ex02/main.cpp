/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:01:17 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/23 22:01:19 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a;
	ScavTrap b;
	FragTrap c;
	FragTrap d("Bob");
	FragTrap e(c);
	c.attack(d.get_name());
	b.attack(c.get_name());
	for (int i=0; i<11; i++)
		a.attack(b.get_name());
	a.takeDamage(1);
	a.takeDamage(d.get_atk());
	a.takeDamage(9);
	a.beRepaired(1);
	b.takeDamage(10);
	b.takeDamage(b.get_classhp());
	b.beRepaired(1);
	b.guardGate();
	c.takeDamage(50);
	c.takeDamage(a.get_atk());
	c.takeDamage(d.get_atk());
	c.takeDamage(0);
	c.beRepaired(1);
	c.highFivesGuys();
	d.takeDamage(40);
	d.takeDamage(a.get_atk());
	d.beRepaired(c.get_classhp());
	d.beRepaired(1);
	c.highFivesGuys();
	e.takeDamage(40);
	e.beRepaired(40);
	e.beRepaired(1);
	e.highFivesGuys();
	return (0);
}
