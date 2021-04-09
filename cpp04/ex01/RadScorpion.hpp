/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:26:14 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 18:28:32 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		virtual ~RadScorpion();

		RadScorpion &operator=(const RadScorpion &copy);
};

#endif
