/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:58:25 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 18:34:15 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>

class ICharacter ;

class AMateria
{
	protected:
		unsigned int	xp;
		std::string		type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();

		AMateria &operator=(const AMateria &copy);

		std::string const	&getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

};

#endif
