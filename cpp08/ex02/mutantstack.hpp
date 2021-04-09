/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:25:59 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/17 15:04:58 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>()
		{
		};
		MutantStack(MutantStack &copy) : std::stack<T>(copy)
		{
		};
		~MutantStack()
		{
		};

		MutantStack &operator=(const MutantStack &copy)
		{
   			this->c = copy.c;
    		return (*this);
  		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
		{
    		return (this->c.begin());
  		}

  		iterator end()
  		{
    		return (this->c.end());
  		}
};

#endif
