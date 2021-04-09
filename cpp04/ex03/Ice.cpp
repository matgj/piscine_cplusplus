/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:09:11 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 14:10:47 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy) : AMateria("ice")
{
	*this = copy;
}

Ice	&Ice::operator=(const Ice &copy)
{
	this->xp = copy.getXP();
	return (*this);
}

AMateria*	Ice::clone() const
{
  Ice *clone = new Ice(*this);
	return (clone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
