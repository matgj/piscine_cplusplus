/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:09:18 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 14:09:44 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		virtual ~Ice();

		Ice &operator=(const Ice &copy);

		void		use(ICharacter& target);
		AMateria	*clone() const;
};

#endif
