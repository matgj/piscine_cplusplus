/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:27:28 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 18:28:37 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &copy);
		virtual ~SuperMutant();

		SuperMutant &operator=(const SuperMutant &copy);

		void	takeDamage(int damage);
};

#endif
