/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:03:57 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 14:08:49 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{

}

Cure::Cure(const Cure &copy) : AMateria("cure")
{
	*this = copy;
}

Cure	&Cure::operator=(const Cure &copy)
{
	this->xp = copy.getXP();
	return (*this);
}


AMateria*	Cure::clone() const
{
  Cure *clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
