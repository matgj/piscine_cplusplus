/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:40:39 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 11:44:14 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"


class Squad : public ISquad
{
	ISpaceMarine		**units;
	int					current;

	public:
						Squad(void);
						Squad(Squad const &other);
						~Squad(void);

		Squad			&operator=(Squad const &other);

		int				getCount(void) const;
		ISpaceMarine	*getUnit(int index) const;
		int				push(ISpaceMarine *unit);
};

#endif
