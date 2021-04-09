/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:04:02 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 14:08:51 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		virtual ~Cure();

		Cure &operator=(const Cure &copy);

		void use(ICharacter& target);
		AMateria	*clone() const;
};

#endif
