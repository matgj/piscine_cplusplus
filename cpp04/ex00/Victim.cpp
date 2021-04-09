/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:41:27 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 16:04:39 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : name(name)
{
	std::cout << GREEN << "A random victim called " << name << " just appeared!" << RESET << std::endl;
}

Victim::~Victim()
{
	std::cout << RED << "The victim " << name << " died for no apparent reasons!" << RESET << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim	&Victim::operator=(const Victim &copy)
{
	name = copy.getName();
	return (*this);
}

std::string	Victim::getName() const
{
	return (name);
}

void	Victim::setName(std::string name)
{
	name = name;
}

void	Victim::getPolymorphed() const
{
	std::cout << BLUE << name << " was just polymorphed in a cute little sheep!" << RESET << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Victim const &victim)
{
	out << BLUE <<  "I am " << victim.getName() << " and I like otters!" << RESET << std::endl;;
	return (out);
}
