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

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a;
	ClapTrap b = a;
	ClapTrap c(a);
	ClapTrap d("Bob", 10, 10, 0, "ClapTrap", 10);
	a.attack(d.get_name());
	d.attack(c.get_name());
	for (int i=0; i<11; i++)
		c.attack(b.get_name());
	a.takeDamage(1);
	a.takeDamage(d.get_atk());
	a.takeDamage(9);
	a.beRepaired(1);
	b.takeDamage(1);
	b.takeDamage(c.get_atk());
	b.takeDamage(d.get_classhp());
	b.beRepaired(1);
	c.takeDamage(5);
	c.takeDamage(a.get_atk());
	c.beRepaired(1);
	c.beRepaired(4);
	c.beRepaired(1);
	d.takeDamage(5);
	d.takeDamage(a.get_atk());
	d.beRepaired(c.get_classhp());
	d.beRepaired(1);
	return (0);
}
