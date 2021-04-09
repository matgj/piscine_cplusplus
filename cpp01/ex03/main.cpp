/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:45:50 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:31:14 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include "ZombieHorde.hpp"
#include <unistd.h>

int		main(void)
{
	ZombieHorde horde_basic(5);
	ZombieHorde *horde_ptr;
	ZombieHorde horde_zero(0);

	std::cout << GREEN << "basic horde :" << RESET << std::endl;
	horde_basic.announce();

	horde_ptr = new ZombieHorde(4);
	std::cout << GREEN << "ptr horde:" << RESET << std::endl;
	horde_ptr->announce();
	delete horde_ptr;

	std::cout << GREEN << "zero :" << RESET << std::endl;
	horde_zero.announce();

	return (0);
}
