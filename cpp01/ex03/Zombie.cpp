/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:27:10 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:31:15 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

Zombie::Zombie(std::string name) : name(name)
{
}
Zombie::Zombie(std::string name, std::string type) : type(type), name(name)
{
}

void Zombie::announce()
{
std::cout << "<" << this->name << "(" << this->type << ")"  << ">" << BLUE << " La main-d'oeuvre zombie ne réclame aucun salaire et l'on peut la faire se tuer travail sans risquer de la faire mourir." << RESET <<  std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}
