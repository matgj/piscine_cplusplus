/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:23:39 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 10:37:20 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &copy);
		virtual ~TacticalMarine();

		TacticalMarine &operator=(const TacticalMarine &copy);

		ISpaceMarine	*clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
