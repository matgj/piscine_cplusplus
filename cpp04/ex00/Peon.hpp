/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:13:41 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 15:39:41 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
    Peon();
	public:
		Peon(std::string name);
		virtual ~Peon();

		Peon(const Peon &copy);
		Peon &operator=(const Peon &copy);

		void	getPolymorphed() const;
};

#endif
