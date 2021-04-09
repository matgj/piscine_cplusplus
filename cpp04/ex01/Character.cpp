/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:45:31 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 20:42:13 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character::~Character()
{

}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character	&Character::operator=(const Character &copy)
{
	this->name = copy.name;
	this->ap = copy.ap;
  	this->weapon = copy.weapon;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Character const &character)
{
	std::stringstream ss;

	if (character.getWeapon())
		ss << character.getName() << " has " << character.getAP() << " AP and carries a " << character.getWeapon()->getName();
	else
		ss << character.getName() << " has " << character.getAP() << " AP and is unarmed";
	return (out << ss.str() << std::endl);
}

void	Character::recoverAP()
{
	this->ap = ap + 10;
	if (this->ap > 40)
		this->ap = 40;
}

void	Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (this->ap < this->weapon->getAPCost() || this->weapon == NULL || !enemy)
		return;
	this->ap -= weapon->getAPCost();
	std::cout << this->name << " hasttaque " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHP() <= 0)
	{
		delete enemy;
 	}
}

std::string	Character::getName() const
{
	return this->name;
}

int			Character::getAP() const
{
	return this->ap;
}

AWeapon		*Character::getWeapon() const
{
	return this->weapon;
}
