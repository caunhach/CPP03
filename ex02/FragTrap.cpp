/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:06:41 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/23 22:06:42 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Player", 100, 100, 30, "FragTrap", 100)
{
	std::cout << GREEN << "Default FragTrap constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src)
{
	std::cout << GREEN << "Copy FragTrap constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name, 100, 100, 30, "FragTrap", 100)
{
	std::cout << GREEN << "FragTrap Constructor of " << "\"" << name << "\"" << " called" << RESET << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	std::cout << GREEN << "FragTrap Assignation operator called" << RESET << std::endl;
	this->_name = src.get_name();
	this->_hp = src.get_hp();
	this->_ep = src.get_ep();
	this->_atk = src.get_atk();
	this->_classname = src.get_classname();
	this->_classhp = src.get_classhp();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "FragTrap Deconstructor called" << RESET << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_ep == 0)
		std::cout << YELLOW << "FragTrap" << " : " << this->_name << " tries to attack " << target << " but doesn't have enough energy point" << RESET << std::endl;
	else if (this->_hp == 0)
	{
		std::cout << YELLOW << "FragTrap" << " : " << this->_name << " can not attack because he is dead" << RESET << std::endl;
		return;
	}
	else
	{
		std::cout << YELLOW << "FragTrap" << " : " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage!" << RESET << std::endl;
		this->_ep--;
	}
	std::cout << YELLOW << "FragTrap" << " : " << this->_name << " now has " << this->_hp << " and " << this->_ep << " remain" << RESET << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW << "ScavTrap : " << this->_name << " highfive to all of you!" << RESET << std::endl;
}
