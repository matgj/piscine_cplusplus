/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:26:49 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:30:40 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <unistd.h>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

int main(){
	memoryLeak();
	return 0;
}
