/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:01:05 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/27 18:25:17 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
	T 				*array_;
	int				size_;

	public:
		Array() : array_(NULL), size_(0)
		{
		};

		Array(unsigned int n) : array_(new T[n]), size_(n)
		{
		};

		~Array()
		{
			if (array_ != NULL)
				delete [] array_;
		};

		Array(const Array &copy) : array_(NULL), size_(0)
		{
			*this = copy;
		};

		const Array &operator=(const Array &target)
		{
			if (array_ != NULL)
				delete [] array_;
			array_ = new T[target.size()];
			size_ = target.size();
			for (unsigned int i = 0; i < target.size(); i++)
				array_[i] = target.array_[i];
			return (*this);
		}


		T& operator[](int index)
		{
    		if (!array_ || index >= size_ || index < 0)
    		    throw OutOfArray();
    		return array_[index];
		};

		unsigned int size() const
		{
			return size_;
		};

		class OutOfArray : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return "Array index out of bound";
				}

		};
};

#endif
