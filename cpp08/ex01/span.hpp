/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:08:57 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/17 13:31:38 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <exception>


class Span
{
	unsigned int	max_;
	std::vector<int> vector_;
	Span();

	public:
  		Span(unsigned int N);
  		Span(const Span &copy);
  		~Span();

		Span &operator=(const Span &copy);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class TooMuchNumbersException : public std::exception {
  		 public:
  		  const char *what() const throw();
  		};
		class NoSpanException : public std::exception {
  		 public:
  		  const char *what() const throw();
  		};
};

#endif

