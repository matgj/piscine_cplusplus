/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:40:58 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 18:28:33 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::~PowerFist()
{

}

PowerFist::PowerFist(const PowerFist &copy)
{
	*this = copy;
}

PowerFist	&PowerFist::operator=(const PowerFist &copy)
{
	name = copy.getDamage();
	apCost = copy.getAPCost();
	damage = copy.getDamage();
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
