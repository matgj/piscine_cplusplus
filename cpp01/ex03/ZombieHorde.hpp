/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:27:25 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:31:23 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde
{
	Zombie		*horde;
	int			n;
public:
		ZombieHorde(int N);
		~ZombieHorde();

		void		announce();
		std::string	randomChump();
};

#endif
