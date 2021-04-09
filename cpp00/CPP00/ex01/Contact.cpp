/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:57:12 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 08:15:56 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void Contact::fill(int index)
{
	this->index = index;

	std::cout << "First name: ";
	std::getline(std::cin, this->firstname);

	std::cout << "Last name: ";
	std::getline(std::cin, this->lastname);

	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);

	std::cout << "Login: ";
	std::getline(std::cin, this->login);

	std::cout << "Postal address: ";
	std::getline(std::cin, this->postal);

	std::cout << "Email: ";
	std::getline(std::cin, this->email);

	std::cout << "Phone: ";
	std::getline(std::cin, this->phone);

	std::cout << "Birthday date: ";
	std::getline(std::cin, this->birthday);

	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->meal);

	std::cout << "Underwear color: ";
	std::getline(std::cin, this->color);

	std::cout << "Your darkest secret: ";
	std::getline(std::cin, this->secret);

	std::cout << BOLD << GREEN << "ようこそ - youkoso - Bienvenue.\nYour contact has been added bro !" << RESET << std::endl;
}

void Contact::print_small(){
	std::cout << std::setw(10) << std::setfill(' ') << index << "|";
	if (firstname.length() > 10)
		std::cout << firstname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::setfill(' ') << firstname << "|";
	if (lastname.length() > 10)
		std::cout << lastname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::setfill(' ') << lastname << "|";
	if (nickname.length() > 10)
		std::cout << nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::setfill(' ') << nickname;
}

void Contact::print_all(){
	std::cout << "First name: " << this->firstname << std::endl;
	std::cout << "Last name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postal << std::endl;
	std::cout << "Email: " << this->email << std::endl;
	std::cout << "Phone: " << this->phone << std::endl;
	std::cout << "Birthday date: " << this->birthday << std::endl;
	std::cout << "Favorite meal: " << this->meal << std::endl;
	std::cout << "Underwear color: " << this->color << std::endl;
	std::cout << "Your darkest secret: " << this->secret << std::endl;
}
