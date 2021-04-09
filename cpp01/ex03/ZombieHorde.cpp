/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:27:22 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:31:22 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : n(n)
{
		srand(time(0));
		this->horde = new Zombie[n];
		for (int i = 0; i < this->n; i++)
		{
			this->horde[i].setName(this->randomChump());
			this->horde[i].setType("type");
		}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << RED << "Destroyed the whole familly" << RESET << std::endl;
	delete [] this->horde;
}

void			ZombieHorde::announce()
{
	for (int i = 0; i < this->n; i++)
		this->horde[i].announce();
}

std::string		ZombieHorde::randomChump()
{
	std::string names[] = {"Camo Zombie", "Pudgy", "Popsicle", "Augmented Zombie", "Dripper", "Bony Zombie", "Brute"};
	return (names[rand() % 7]);
}
