/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:40:42 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/07 13:04:24 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::~Fixed()
{
	std::cout << RED <<  "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << GREEN <<  "Assignation operator called" << RESET << std::endl;
	this->fixed_point_value = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << BLUE << "getRawBits member function called" << RESET << std::endl;
	return (this->fixed_point_value);
}

void	Fixed::setRawBits(int const new_value)
{
	std::cout << BLUE << "setRawBits member function called" << RESET << std::endl;
	this->fixed_point_value = new_value;
}
