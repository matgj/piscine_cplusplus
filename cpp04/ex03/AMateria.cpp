/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:58:30 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 14:03:12 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria()
{
	this->xp = 0;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	this->xp = copy.getXP();
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return this->type;
}

unsigned int		AMateria::getXP() const
{
	return this->xp;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	this->xp = this->xp + 10;
}
