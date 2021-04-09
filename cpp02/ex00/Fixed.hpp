/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:41:22 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/07 12:24:16 by Mathis           ###   ########.fr       */
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

class Fixed
{
	int					fixed_point_value;
	static const int	fractional_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);

		Fixed &operator=(const Fixed &copy);

		int		getRawBits(void) const;
		void	setRawBits(int const new_value);
};

#endif
