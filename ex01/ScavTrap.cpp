/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:01:29 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/23 22:01:31 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Player", 100, 50, 20, "ScavTrap", 100)
{
	std::cout << GREEN << "Default ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src)
{
	std::cout << GREEN << "Copy ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name, 100, 50, 20, "ScavTrap", 100)
{
	std::cout << GREEN << "ScavTrap Constructor of " << "\"" << name << "\"" << " called" << RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << GREEN << "ScavTrap Assignation operator called" << RESET << std::endl;
	this->_name = src.get_name();
	this->_hp = src.get_hp();
	this->_ep = src.get_ep();
	this->_atk = src.get_atk();
	this->_classname = src.get_classname();
	this->_classhp = src.get_classhp();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN << "ScavTrap Deconstructor called" << RESET << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_ep == 0)
		std::cout << YELLOW << "Scavtrap" << " : " << this->_name << " tries to attack " << target << " but doesn't have enough energy point" << RESET << std::endl;
	else if (this->_hp == 0)
	{
		std::cout << YELLOW << "Scavtrap" << " : " << this->_name << " can not attack because he is dead" << RESET << std::endl;
		return;
	}
	else
	{
		std::cout << YELLOW << "Scavtrap" << " : " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage!" << RESET << std::endl;
		this->_ep--;
	}
	std::cout << YELLOW << "Scavtrap" << " : " << this->_name << " now has " << this->_hp << " and " << this->_ep << " remain" << RESET << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hp == 0)
	{
		std::cout << YELLOW << "Scavtrap" << " : " << this->_name << " can not guard gate, but he is dead" << RESET << std::endl;
		return ;
	}
	std::cout << YELLOW << "ScavTrap : " << this->_name << " is now in Gate keeper mode" << RESET << std::endl;
}
