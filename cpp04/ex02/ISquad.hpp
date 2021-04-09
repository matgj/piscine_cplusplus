/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:53:50 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 10:47:17 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}

		virtual int				getCount() const = 0;
		virtual ISpaceMarine*	getUnit(int) const = 0;
		virtual int				push(ISpaceMarine*) = 0;
};

#endif
