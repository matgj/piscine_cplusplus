/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:41:22 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/10 12:24:09 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
# include <math.h>

class Fixed
{
	int					value;
	static const int	fractional_bits = 8;

	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();
		Fixed(const Fixed &copy);

		Fixed 		&operator=(const Fixed &copy);
		bool		operator>(const Fixed &other) const;
    	bool		operator<(const Fixed &other) const;
    	bool		operator>=(const Fixed &other) const;
    	bool		operator<=(const Fixed &other) const;
    	bool		operator==(const Fixed &other) const;
    	bool		operator!=(const Fixed &other) const;

		Fixed 		operator+(const Fixed &other) const;
		Fixed 		operator-(const Fixed &other) const;
		Fixed 		operator*(const Fixed &other) const;
		Fixed 		operator/(const Fixed &other) const;

		Fixed		&operator++();
		Fixed		&operator--();
		Fixed		operator++(int);
		Fixed		operator--(int);

		int			getRawBits(void) const;
		void		setRawBits(int const new_value);
		int			toInt(void) const;
		float		toFloat(void) const;

		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static	Fixed		&min(Fixed &a, Fixed &b);
		static	Fixed		&max(Fixed &a, Fixed &b);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &value);
const Fixed		&min(const Fixed &a, const Fixed &b);
const Fixed 	&max(const Fixed &a, const Fixed &b);
Fixed			&min(Fixed &a, Fixed &b);
Fixed			&max(Fixed &a, Fixed &b);

#endif
