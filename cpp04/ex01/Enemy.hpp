/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:10:14 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 18:16:57 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	protected:
		int			hp;
		std::string	type;

	public:
		Enemy();
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &copy);
		virtual ~Enemy();

		Enemy &operator=(const Enemy &copy);

   		std::string		getType() const;
		int 			getHP() const;
    	void 			setHP(int hp);
		virtual void	takeDamage(int damage);
};

#endif
