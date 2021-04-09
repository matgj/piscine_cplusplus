/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:48:21 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:32:44 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon		*weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void setWeapon(Weapon &weapon);
	void attack();
};

#endif
