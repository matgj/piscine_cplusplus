/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:07:45 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 11:39:35 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>

#include "Brain.hpp"

class Human
{
	Brain brain;

public:
	Human();
	~Human();
	Brain &getBrain(void);
	std::string identify(void);
};

#endif
