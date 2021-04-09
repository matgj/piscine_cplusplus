/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:33:07 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 12:11:46 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {

}

FragTrap::FragTrap(std::string name):name(name), HP(100), HP_max(100), EP(100), EP_max(100), lvl(1), atc_melee(30), atc_ranged(20), reduc_armor(5)
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
	return (*this);
}


void 	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << BLUE << "FR4G-TP <" << this->name << "> attaque <" << target << "> ,causant <" << this->atc_ranged << "> points de dégâts!" << RESET << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << BLUE << "FR4G-TP <" << this->name << "> attaque <" << target << "> ,causant <" << this->atc_melee << "> points de dégâts!" << RESET << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->reduc_armor;

	if (amount < this->HP)
		this->HP = this->HP - amount;
	else
		this->HP = 0;
	std::cout << RED << "FR4G-TP <" << this->name <<  "> lvl: "<< this->lvl <<" se fait enculer, il a <" << this->HP << "> punta de vida tío!" << RESET << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->HP + amount > HP_max)
		HP = HP_max;
	else
		HP = this->HP + amount;
	std::cout << GREEN << "FR4G-TP <" << this->name << "> SNNNIIIIFFFFFFFFFFF, mhhhhh, mucha buena cocaina amigo, gracias, je suis refait, j'ai <" << this->HP << "> punta de vida tío!" << RESET << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	 	attacks[5] = {"trace de cocaine 90%", "Plata o Plomo", "un kilo de coke PURROS", "ce genre de 9mm", "une pute pas trop farrouche"};
	unsigned int 	dmg[5] = {1500000, 99, 50, 30, 0};
	int 			i;

	if (this->EP > 25)
	{
		this->EP = this->EP - 25;
		i = rand() % 5;
		std::cout << BLUE << "FR4G-TP <" << this->name << "> attaque" << " la " << target << " avec <" << attacks[i] << "> ,causant <" << dmg[i] << "> points de dégâts!" << RESET << std::endl;
		(void)EP_max;
	}
	else
		std::cout << RED << "FR4G-TP" << this->name << " t'as pas assez d'energie pour lancer l'attaque boloss, reprends une trace" << RESET << std::endl;
}
