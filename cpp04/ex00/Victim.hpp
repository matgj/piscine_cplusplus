/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:41:15 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/11 15:36:30 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>

class Victim
{
	std::string name;
    Victim();

public:
	Victim(std::string name);
	virtual ~Victim();
	Victim(const Victim &copy);
	Victim &operator=(const Victim &copy);

	std::string		getName() const;
    void			setName(std::string name);

	virtual void	getPolymorphed() const;
};

std::ostream		&operator<<(std::ostream &out, Victim const &victim);

#endif
