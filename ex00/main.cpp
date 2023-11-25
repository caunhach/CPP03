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
	ClapTrap b(a);
	a.attack("Peter");
	a.takeDamage(3);
	ClapTrap c(a);
	a.takeDamage(2);
	b.takeDamage(1);
	c.takeDamage(1);
	b.takeDamage(9);
	c.takeDamage(10);
	c.takeDamage(1);
	a.beRepaired(2);
	a.beRepaired(7);
	return (0);
}
