/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:58:57 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 09:59:03 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}

		virtual ISpaceMarine	*clone() const = 0;
		virtual void 			battleCry() const = 0;
		virtual void			rangedAttack() const = 0;
		virtual void			meleeAttack() const = 0;
};

#endif
