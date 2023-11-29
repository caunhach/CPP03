/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:06:47 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/23 22:06:50 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &src);
		FragTrap(std::string const &name, unsigned int hp, unsigned int ep, unsigned int atk, std::string classname, unsigned int classhp);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &src);
		void		attack(const std::string &target);
		void		highFivesGuys(void);
};

#endif
