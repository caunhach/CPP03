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

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Player"), _hp(10), _ep(10), _atk(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string name): _hp(10), _ep(10), _atk(0)
{
	std::cout << "Constructor of " << """ << name << """ << " called" << std::endl;
	this->_name = name;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_atk = src._atk;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "deconstructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_ep < 0)
		std::cout << this->_name << "doesn't have enough energy points" << std::endl;
	else if (this->_hp == 0)
		std::cout << this->_name << "doesn't have hit point left" << std::endl;
	else
		std::cout << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage!" << std::endl;
}
