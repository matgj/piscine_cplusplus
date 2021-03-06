/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:24:06 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 10:35:42 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action!" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(const TacticalMarine &other)
{
	*this = other;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}


TacticalMarine &TacticalMarine::operator=(const TacticalMarine &other)
{
	(void)other;
	return (*this);
}


void TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT!" << std::endl;
	return;
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
	return;
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
	return;
}

ISpaceMarine *TacticalMarine::clone(void) const
{
	return (new TacticalMarine());
}
