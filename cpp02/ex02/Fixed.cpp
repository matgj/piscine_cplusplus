/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:40:42 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/10 12:25:22 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(int const value) : value(value << Fixed::fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) : value(roundf(value * (1 << Fixed::fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
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

Fixed			&Fixed::operator=(const Fixed &copy)
{
	std::cout << GREEN <<  "Assignation operator called" << RESET << std::endl;
	this->value = copy.value;
	return (*this);
}

int				Fixed::getRawBits() const
{
	std::cout << BLUE << "getRawBits member function called" << RESET << std::endl;
	return (this->value);
}

void			Fixed::setRawBits(int const new_value)
{
	std::cout << BLUE << "setRawBits member function called" << RESET << std::endl;
	this->value = new_value;
}

int				Fixed::toInt() const
{
	return (this->value >> Fixed::fractional_bits);
}

float			Fixed::toFloat() const
{
	return ((float)(this->value) / (1 << Fixed::fractional_bits));
}

std::ostream		&operator<<(std::ostream &out, Fixed const &value)
{
	return (out << value.toFloat());
}

bool				Fixed::operator<(const Fixed &other) const
{
	std::cout << GREEN <<  "Relational operator called" << RESET << std::endl;
	return (this->getRawBits() < other.getRawBits());
}

bool		Fixed::operator>(const Fixed &other) const
{
	std::cout << GREEN <<  "Relational operator called" << RESET << std::endl;
	return (this->getRawBits() > other.getRawBits());
}

bool			Fixed::operator>=(const Fixed &other) const
{
	std::cout << GREEN <<  "Relational operator called" << RESET << std::endl;
	return (this->getRawBits() >= other.getRawBits());
}

bool			Fixed::operator<=(const Fixed &other) const
{
	std::cout << GREEN <<  "Relational operator called" << RESET << std::endl;
	return (this->getRawBits() <= other.getRawBits());
}

bool			Fixed::operator==(const Fixed &other) const
{
	std::cout << GREEN <<  "Relational operator called" << RESET << std::endl;
	return (this->getRawBits() == other.getRawBits());
}

bool			Fixed::operator!=(const Fixed &other) const
{
	std::cout << GREEN <<  "Relational operator called" << RESET << std::endl;
	return (this->getRawBits() != other.getRawBits());
}

Fixed			Fixed::operator+(const Fixed &other) const
{
	Fixed var;

	var.value = this->value + other.getRawBits();
	return (var);
}

Fixed			Fixed::operator-(const Fixed &other) const
{
	Fixed var;

	var.value = this->value - other.getRawBits();
	return (var);
}

Fixed			Fixed::operator*(const Fixed &other) const
{
	Fixed var (this->toFloat() * other.toFloat());
	return (var);
}

Fixed			Fixed::operator/(const Fixed &other) const
{
	Fixed var (this->toFloat() / other.toFloat());
	return (var);
}

Fixed			&Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed			&Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed	var(*this);

	++this->value;
	return (var);
}

Fixed			Fixed::operator--(int)
{
	Fixed	var(*this);

	--this->value;
	return (var);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
    std::cout << GREEN <<  "Min func called" << RESET << std::endl;
	return (b < a ? b : a);
}

const Fixed 	&Fixed::max(const Fixed &a, const Fixed &b)
{
    std::cout << GREEN <<  "Min func called" << RESET << std::endl;
	return (b > a ? b : a);
}

Fixed		 &Fixed::min(Fixed &a, Fixed &b)
{
    std::cout << GREEN <<  "Min func called" << RESET << std::endl;
	return (b < a ? b : a);
}

Fixed 			&Fixed::max(Fixed &a, Fixed &b)
{
    std::cout << GREEN <<  "Min func called" << RESET << std::endl;
	return (b > a ? b : a);
}
