/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:27:25 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:31:09 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	std::string	type;

public:
			ZombieEvent();
			ZombieEvent(std::string type);
			~ZombieEvent();

	Zombie *newZombie(std::string name);
	void	setZombieType(std::string type);
	void 	randomChump();
};

#endif
