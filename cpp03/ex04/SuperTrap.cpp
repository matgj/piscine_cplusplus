/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 10:37:30 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 12:49:51 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
}

SuperTrap::~SuperTrap()
{
	std::cout << RED << "SUPER TRAAAAP destructor called!" << RESET << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5, "SuperTrap"), FragTrap(name), NinjaTrap(name)
{
	std::cout << GREEN << "SUPEER TRAAAP constructor called!" << RESET << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy), FragTrap(copy), NinjaTrap(copy)
{
	*this = copy;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &copy)
{
	name = copy.name;
	HP = copy.HP;
	HP_max = copy.HP_max;
	EP = copy.EP;
	EP_max = copy.EP_max;
	lvl = copy.lvl;
	atc_melee = copy.atc_melee;
	atc_ranged = copy.atc_ranged;
	reduc_armor = copy.reduc_armor;
	type = copy.type;
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
