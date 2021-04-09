/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:45:50 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 12:37:39 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include "ZombieEvent.hpp"
#include <unistd.h>

int		main(void)
{
	ZombieEvent dort;
	ZombieEvent fume("Rastafari");

	Zombie	*zombie = fume.newZombie("Bob");
	zombie->announce();
	Zombie *bibo = dort.newZombie("Bibo");
	bibo->announce();
	fume.setZombieType("Jamaicain");
	dort.randomChump(); //creation dun random sans type sans un nouvel event
	fume.randomChump(); //creation dun random sans type dans mon premier event
	dort.setZombieType("Dormeur");
	dort.randomChump();

	delete zombie;
	delete bibo;
	return (0);
}
