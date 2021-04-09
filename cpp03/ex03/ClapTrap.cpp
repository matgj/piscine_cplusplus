/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:12:43 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 12:34:59 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(std::string name, unsigned int HP, unsigned int HP_max, unsigned int EP, unsigned int EP_max, unsigned int lvl, unsigned int atc_melee, unsigned int atc_ranged, unsigned int reduc_armor, std::string type)
{
	srand(time(0));
	this->name = name;
	this->HP = HP;
	this->HP_max = HP_max;
	this->EP = EP;
	this->EP_max = EP_max;
	this->lvl = lvl;
	this->atc_melee = atc_melee;
	this->atc_ranged = atc_ranged;
	this->reduc_armor = reduc_armor;
	this->type = type;

	std::cout << GREEN << "ClapTrap constructor called!" << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap destructor called!" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
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

void 	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << BLUE << this->type << ' ' << this->name << "> attaque <" << target << "> ,causant <" << this->atc_ranged << "> points de dégâts!" << RESET << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << BLUE << this->type << ' ' << this->name << "> attaque <" << target << "> ,causant <" << this->atc_melee << "> points de dégâts!" << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->reduc_armor;

	if (amount < this->HP)
		this->HP = this->HP - amount;
	else
		this->HP = 0;
	std::cout << RED << this->name <<  "> lvl: "<< this->lvl <<" se fait enculer, il a <" << this->HP << "> punta de vida tío!" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP + amount > HP_max)
		HP = HP_max;
	else
		HP = this->HP + amount;
	std::cout << GREEN << this->name << "> SNNNIIIIFFFFFFFFFFF, mhhhhh, mucha buena cocaina amigo, gracias, je suis refait, j'ai <" << this->HP << "> punta de vida tío!" << RESET << std::endl;
}

std::string ClapTrap::getName()
{
	return(this->name);
}
