/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:26:46 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 17:42:52 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->apCost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon()
{

}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon	&AWeapon::operator=(const AWeapon &copy)
{
	name = copy.name;
	apCost = copy.apCost;
	damage = copy.damage;
	return (*this);
}

std::string	AWeapon::getName() const
{
	return name;
}

int			AWeapon::getAPCost() const
{
	return apCost;
}

int			AWeapon::getDamage() const
{
	return damage;
}
