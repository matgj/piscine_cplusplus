/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:25:59 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/12 14:27:01 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}

		virtual void 		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
