/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:45:26 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 18:48:42 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	std::string name;
	int			ap;
	AWeapon		*weapon;

	public:
		Character();
		Character(std::string const &name);
		Character(const Character &copy);
		~Character();

		Character &operator=(const Character &copy);

		void		recoverAP();
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string	getName() const;
		int			getAP() const;
		AWeapon		*getWeapon() const;

};

std::ostream	&operator<<(std::ostream &out, Character const &character);

#endif
