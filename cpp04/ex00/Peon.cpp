/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:31:06 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 15:34:18 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << GREEN << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << RED << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy)
{
	*this = copy;
}

Peon	&Peon::operator=(const Peon &copy)
{
	setName(copy.getName());
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << BLUE << this->getName() << " has been turned into a pink pony!" << RESET << std::endl;
}

