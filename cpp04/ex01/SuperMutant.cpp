/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:27:33 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 18:28:07 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy()
{
	*this = copy;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &copy)
{
	this->hp = copy.hp;
	this->type = copy.type;
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	damage = damage - 3;
	if (damage < 0)
		return ;
  if (hp - damage < 0)
    hp = 0;
  else
  	hp = hp - damage;
}
