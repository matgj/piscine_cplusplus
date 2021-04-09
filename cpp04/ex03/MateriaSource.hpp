/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:24:44 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 18:30:59 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
		AMateria			*materias[4];
		static const int	maxMateria = 4;
		int					num;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();

		MateriaSource &operator=(const MateriaSource &copy);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif
