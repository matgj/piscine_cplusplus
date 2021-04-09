/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 14:19:51 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/15 14:54:00 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	multi(int &i)
{
	i = i * 2;
}

// int main (void)
// {
// 	int tab[3] = {1,2,3};
// 	for(int i = 0; i < 3; i++){
// 		std::cout << tab[i] << std::endl;
// 	}
// 	std::cout << "appel de iter avec fonction qui multiplie par 2"<< std::endl;
// 	iter(tab, 3, &multi);
// 	for(int i = 0; i < 3; i++){
// 		std::cout << tab[i] << std::endl;
// 	}
// }


class Awesome {
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print);
iter( tab2, 5, print);
return 0;
}
