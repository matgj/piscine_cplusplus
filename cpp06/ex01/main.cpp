/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:52:11 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/14 17:48:49 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	*serialize(void)
{
	const char	alphanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *res = new char[16 + sizeof(int)];

	for (int i = 0; i < 8; i++)
		res[i] = alphanum[std::rand() % 62];
	*reinterpret_cast<int*>(res + 8) = std::rand();
	for (int i = 8 + sizeof(int); (unsigned int) i < 16 + sizeof(int); i++)
		res[i] = alphanum[std::rand() % 62];

	return (void*)res;
}

Data 	*deserialize(void *address)
{
	Data *data = new Data;
	char *conv = reinterpret_cast<char*>(address);

	data->s1 = std::string(conv, 8);
	data->n = *reinterpret_cast<int*>(conv + 8);
	data->s2 = std::string(conv + 8 + sizeof(int), 8);
	return (data);
}

int main(void)
{
	void *address = serialize();
	Data *data = deserialize(address);

	std::srand(time(0));

	//std::cout << address << std::endl;
	std::cout << "result : "<< data->s1 << data->n << data->s2 << std::endl;
	delete reinterpret_cast<char*>(address);
	delete data;
	return (0);
}
