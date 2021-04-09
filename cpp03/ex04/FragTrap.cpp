/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:33:07 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 12:34:42 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{

}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5, "FR4G-TP")
{
	srand(time(0));
	std::cout << GREEN << "Hola guapo. FragTrap constructor called!" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Ciao bella. FragTrap destructor called!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	 	attacks[5] = {"trace de cocaine 90%", "une trace de cocaine 2%", "un kilo de coke PURROS", "ce genre de 9mm", "une pute pas trop farrouche"};
	unsigned int 	dmg[5] = {1500000, 99, 50, 30, 0};
	int 			i;

	if (this->EP > 25)
	{
		this->EP = this->EP - 25;
		i = rand() % 5;
		std::cout << BLUE << this->type << " <" << this->name << "> attaque" << " la " << target << " avec <" << attacks[i] << "> ,causant <" << dmg[i] << "> points de dégâts!" << RESET << std::endl;
		(void)EP_max;
	}
	else
		std::cout << RED << this->type << " <" << this->name << " t'as pas assez d'energie pour lancer l'attaque boloss, reprends une trace" << RESET << std::endl;
}

std::string FragTrap::getName()
{
	return(this->name);
}
