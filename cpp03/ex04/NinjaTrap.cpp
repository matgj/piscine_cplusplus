/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 09:33:19 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 12:39:07 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
}
NinjaTrap::~NinjaTrap()
{
	std::cout << RED << "NINNNJAAAA destructor called! *" << RESET << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0, "NINJA")
{
		std::cout << RED << "NINNNNJJJAAAAA constructor called!" << RESET << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy)
{
	*this = copy;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &copy)
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

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << BLUE << this->type << " <" << this->name << "> attaque avec un shuriken trempée dans de la pisse de vieille sur FrapTrap <" << target.getName() << ">, causant 6 points de dégâts!" << RESET << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << BLUE << this->type << " <" << this->name << "> attaque en combo avec ses 3 cousins tortues qui viennent des égouts sur ScravTrap <" << target.getName() << ">, causant 100 points de dégâts!" << RESET << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << BLUE << this->type << " <" << this->name << "> attaque 火遁豪火球の術 - Boule de Sushi Suprême sur NinjaTrap <" << target.getName() << ">, causant 66 points de dégâts!" << RESET << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << BLUE << this->type << " <" << this->name << "> attaque avec gros calîn tout mimi avec la langue et tout et tout sur ClapTrap <" << target.getName() << ">, causant 0 points de dégâts!" << RESET << std::endl;
}

std::string NinjaTrap::getName()
{
	return(this->name);
}
