/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:14:56 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 14:37:38 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{

	std::string			name;
	AMateria			*inventory[4];
	static const int	maxInventorySize = 4;

	public:
		Character();
		Character(std::string name);
		Character(const Character &copy);
		virtual ~Character();

		Character &operator=(const Character &copy);

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

};

#endif
