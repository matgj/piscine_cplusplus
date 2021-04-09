/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:27:22 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:31:04 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}
ZombieEvent::ZombieEvent(std::string type)
{
	srand(time(0));
	this->type = type;
	std::cout << GREEN << type << " type attributed successfully, we will create that type for this kind of event!" << RESET << std::endl;
}
ZombieEvent::~ZombieEvent()
{
	std::cout << GREEN << "event object destroyed!" << RESET << std::endl;
}
Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	std::cout << GREEN << type << " type attributed successfully, we will create that type for this kind of event!" << RESET << std::endl;
}

void ZombieEvent::randomChump(void)
{
	std::string names[] = {"Camo Zombie", "Pudgy", "Popsicle", "Augmented Zombie", "Dripper", "Bony Zombie", "Brute"};
	Zombie *zombie;

	zombie = newZombie(names[rand() % 7]);
	std::cout << GREEN << "Random Zombie successfully created " << RESET << std::endl;
	zombie->announce();
	zombie->dead();
	delete zombie;
}
