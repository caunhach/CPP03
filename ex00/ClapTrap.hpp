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

class	ClapTrap
{
	private:
		std::string	_name;
		unsigned int _hp;
		unsigned int _ep;
		unsigned int _atk;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &src);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &src);
		void attack(const std::string &target);
		void takeDamage(unsigned int point);
		void beRepaired(unsigned int point);
};

#endif
