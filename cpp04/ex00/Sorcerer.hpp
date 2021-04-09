/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:28:55 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 15:08:18 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
 # include "Victim.hpp"

class Sorcerer
{
	std::string	name;
	std::string	title;
    Sorcerer();

	public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(const Sorcerer &copy);
	Sorcerer &operator=(const Sorcerer &copy);

	std::string	getName() const;
	std::string	getTitle() const;

	void		polymorph(Victim const &victim) const;
};

std::ostream	&operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif
