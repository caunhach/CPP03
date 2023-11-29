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

ClapTrap::ClapTrap(): _hp(10), _ep(10), _atk(0), _classname("ClapTrap"), _classhp(10)
{
	static int i;
	this->_name = "Player" + std::to_string(++i);
	std::cout << GREEN << "Default ClapTrap constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	static int i;
	std::cout << GREEN << "Copy ClapTrap constructor called" << RESET << std::endl;
	this->_name = src.get_name() + ".copy" + std::to_string(++i);
	this->_hp = src.get_hp();
	this->_ep = src.get_ep();
	this->_atk = src.get_atk();
	this->_classname = src.get_classname();
	this->_classhp = src.get_classhp();
}

ClapTrap::ClapTrap(std::string const &name, unsigned int hp, unsigned int ep, unsigned int atk, std::string classname, unsigned int classhp)
{
	std::cout << GREEN << "ClapTrap Constructor of " << "\"" << name << "\"" << " called" << RESET << std::endl;
	this->_name = name;
	this->_hp = hp;
	this->_ep = ep;
	this->_atk = atk;
	this->_classname = classname;
	this->_classhp = classhp;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << GREEN << "ClapTrap Assignation operator called" << RESET << std::endl;
	this->_name = src.get_name();
	this->_hp = src.get_hp();
	this->_ep = src.get_ep();
	this->_atk = src.get_atk();
	this->_classname = src.get_classname();
	this->_classhp = src.get_classhp();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN << "ClapTrap Deconstructor called" << RESET << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_ep == 0)
		std::cout << YELLOW << "Claptrap" << " : " << this->_name << " tries to attack " << target << " but doesn't have enough energy point" << RESET << std::endl;
	else if (this->_hp == 0)
	{
		std::cout << YELLOW << "Claptrap" << " : " << this->_name << " can not attack because he is dead" << RESET << std::endl;
		return;
	}
	else
	{
		std::cout << YELLOW << "Claptrap" << " : " << this->_name << " attacks " << target << ", causing " << this->_atk << " points of damage!" << RESET << std::endl;
		this->_ep--;
	}
	std::cout << YELLOW << "Claptrap" << " : " << this->_name << " now has " << this->_hp << " and " << this->_ep << " remain" << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << RED << this->_classname << " : " << this->_name << " dose not recieve any damage because he is already dead" << RESET << std::endl;
		return;
	}
	else if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	if (this->_hp == 0)
	{
		std::cout << RED << this->_classname << " : " << this->_name << " take damage and now he is dead" << RESET << std::endl;
		return;
	}
	std::cout << RED << this->_classname << " : " << this->_name << " take damage and now has " << this->_hp << " hp and " << this->_ep << " ep remain" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << BLUE << this->_classname << " : " << this->_name << " can not be repaired because he is already dead" << RESET << std::endl;
		return;
	}
	if (this->_hp == this->_classhp)
		std::cout << BLUE << this->_classname << " : " << this->_name << " can not be repaired because his hp is full " << RESET << std::endl;
	else
	{
		std::cout << BLUE << this->_classname << " : " << this->_name << " was repaired for amount of " << amount << " hp" << RESET << std::endl;
		std::cout << BLUE << this->_classname << " : " << this->_name << "'s hp changed from " << this->_hp << " to ";
		if (this->_hp + amount < this->_classhp)
		{
			this->_hp += amount;
			std::cout << this->_hp << RESET << std::endl;
		}
		else
		{
			this->_hp = this->_classhp;
			std::cout << this->_hp << std::endl;
			std::cout << this->_classname << " : " << this->_name << " now has full hp" << RESET << std::endl;
		}
	}
}

std::string	const	&ClapTrap::get_name(void) const
{
	return (this->_name);
}

unsigned int const	&ClapTrap::get_hp(void) const
{
	return (this->_hp);
}

unsigned int const	&ClapTrap::get_ep(void) const
{
	return (this->_ep);
}

unsigned int const	&ClapTrap::get_atk(void) const
{
	return (this->_atk);
}

std::string	const	&ClapTrap::get_classname(void) const
{
	return (this->_classname);
}

unsigned int const	&ClapTrap::get_classhp(void) const
{
	return (this->_classhp);
}
