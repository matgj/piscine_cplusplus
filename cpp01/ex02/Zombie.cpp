/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:49:26 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:30:58 by Mathis           ###   ########.fr       */
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

void Zombie::announce(){
std::cout << "<" << this->name << "(" << this->type << ")"  << ">" << BLUE << " La main-d'oeuvre zombie ne réclame aucun salaire et l'on peut la faire se tuer travail sans risquer de la faire mourir." << RESET <<  std::endl;
}

void Zombie::dead(){
std::cout << "<" << this->name << "(" << this->type << ")"  << ">" << RED << " died" << RESET <<  std::endl;
}

