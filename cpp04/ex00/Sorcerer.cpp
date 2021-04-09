/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:30:18 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 16:03:33 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << GREEN << name << ", " << title << ", is born!" << RESET << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << RED << name << ", " << title << ", is dead. Consequences will never be the same!" << RESET << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &copy)
{
	name = copy.name;
  	title = copy.title;
	return (*this);
}

std::string	Sorcerer::getName() const
{
	return name;
}

std::string	Sorcerer::getTitle() const
{
	return title;
}

void		Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << BLUE <<  "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << RESET << std::endl;;
	return (out);
}
