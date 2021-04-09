/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:07:43 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 11:39:50 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

Brain &Human::getBrain(void)
{
	return (this->brain);
}

std::string Human::identify(void)
{
	return (this->brain.identify());
}
