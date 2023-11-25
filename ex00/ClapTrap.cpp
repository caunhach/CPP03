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
	static int i;
	std::cout << "Copy constructor called" << std::endl;
	this->_name = src._name + ".copy" + std::to_string(++i);
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_atk = src._atk;
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
	if (this->_ep == 0)
		std::cout << this->_name << " tries to attack " << target << " but doesn't have enough energy point" << std::endl;
	else if (this->_hp == 0)
	{
		std::cout << this->_name << " can not attack because he is dead" << std::endl;
		return;
	}
	else
	{
		std::cout << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage!" << std::endl;
		this->_ep--;
	}
	std::cout << this->_name << " now has " << this->_hp << " and " << this->_ep << " remain" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " dose not recieve any damage because he is already dead" << std::endl;
		return;
	}
	else if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << this->_name << " now has " << this->_hp << " and " << this->_ep << " remain" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " can not be repaired because he is already dead" << std::endl;
		return;
	}
	std::cout << this->_name << " was repaired for amount of " << amount << " hit points " << std::endl;
	std::cout << this->_name << "'s hp changed from " << this->_hp << " to ";
	if (this->_hp + amount < 10)
	{
		this->_hp += amount;
		std::cout << this->_hp << std::endl;
	}
	else
	{
		this->_hp = 10;
		std::cout << this->_hp << std::endl;
		std::cout << this->_name << " now has full hp" << std::endl;
	}
}
