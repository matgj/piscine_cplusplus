/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:07:39 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:31:33 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
/*
**The keyword this is a prfixed_point_value expression
**whose fixed_point_value is the address of the implicit object parameter
**(object on which the non-static member function is being called).
*/

Brain::Brain()
{
}

std::string Brain::identify()
{
	std::stringstream ss;
	ss << this;
	return ss.str();
}
