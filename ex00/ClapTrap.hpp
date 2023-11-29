/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:01:36 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/23 22:11:06 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include<iostream>
#include<string>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class	ClapTrap
{
	private:
		std::string	_name;
		unsigned int _hp;
		unsigned int _ep;
		unsigned int _atk;
		std::string _classname;
		unsigned int _classhp;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &src);
		ClapTrap(std::string const &name);
		ClapTrap(std::string const &name, unsigned int hp, unsigned int ep, unsigned int atk, std::string classname, unsigned int classhp);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &src);

		void attack(const std::string &target);
		void takeDamage(unsigned int point);
		void beRepaired(unsigned int point);

		std::string const	&get_name(void) const;
		unsigned int const	&get_hp(void) const;
		unsigned int const	&get_ep(void) const;
		unsigned int const	&get_atk(void) const;
		std::string const	&get_classname(void) const;
		unsigned int const	&get_classhp(void) const;
};

#endif
