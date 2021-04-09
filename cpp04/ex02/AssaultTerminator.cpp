/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:35:56 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 10:37:30 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy)
{
	*this = copy;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &copy)
{
	(void)copy;
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	return (new AssaultTerminator);
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}
