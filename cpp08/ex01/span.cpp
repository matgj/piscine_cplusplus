/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:00:07 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/17 13:44:47 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N): max_(N)
{
}

Span::~Span()
{

}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	max_ = copy.max_;
	vector_ = copy.vector_;
	return (*this);
}

void Span::addNumber(int n)
{
	if (vector_.size() == max_)
		throw Span::TooMuchNumbersException();
	else
		vector_.push_back(n);
}

int Span::shortestSpan()
{
 	int	min;
	int	tmp;
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;

  if (vector_.empty() || vector_.size() == 1)
		throw Span::NoSpanException();
	min = INT_MAX;
	it1 = vector_.begin();
	while (it1 != vector_.end())
	{
		it2 = vector_.begin();
		while (it2 != vector_.end())
		{
			if (it1 != it2)
			{
				tmp = std::abs(*it1 - *it2);
				if (tmp < min)
					min = tmp;
			}
			it2++;
		}
		it1++;
	}
	return (min);
}

int Span::longestSpan()
{
  if (vector_.empty() || vector_.size() == 1)
    throw Span::NoSpanException();
	int max = *std::max_element(vector_.begin(), vector_.end());
	int min = *std::min_element(vector_.begin(), vector_.end());
	return (max - min);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}
const char *Span::TooMuchNumbersException::what() const throw()
{
	return "Too much numbers are stored bro!";
}

const char *Span::NoSpanException::what() const throw()
{
	return "No Span to find bro!";
}

