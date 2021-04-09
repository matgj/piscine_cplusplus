/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:32:24 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/15 14:27:27 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> void swap(T &a, T &b)
{
	T tmp = a;

	a = b;
	b = tmp;
	return;
}

template <typename T> T min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T> T max(T &a, T &b)
{
	return (a > b ? a : b);
}

class Awesome
{
public:
Awesome( int n ) : _n( n ) {}
bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
int getN(void) const {return (_n);}
private:
int _n;
};

std::ostream& operator<<(std::ostream& os, const Awesome& dt)
{
    os << dt.getN() ;
    return os;
}


