/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:36:31 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:29:38 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << RED << "Baby poney is live ! Let's drink, rap and fuck!" << RESET << std::endl;
}
Pony::~Pony()
{
	std::cout << RED <<  "Poney drink fuck and rap too much, he's fucking dead now." << RESET << std::endl;
}

void Pony::drink(){
std::cout << GREEN << "Gloo gloo I'am drinking Gloo gloo So Good i'am fucked up\n" << RESET << std::endl;
}

void Pony::fuck(){
std::cout << GREEN << "Oh Yes Oh Yes I'am fucking Oh Yes Oh Yes So Good i fuck up\n" << RESET << std::endl;
}

void Pony::rap(){
std::cout << GREEN << "Tête de Roumain, Zgeg de poulain!\n" << RESET << std::endl;
}
