/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:48:07 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 12:08:11 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(char *input)
{
	this->input.open(input);
	this->filename = input;
}

File::~File()
{
	this->input.close();
}

std::string 	File::replace(std::string str, std::string s1, std::string s2)
{
	size_t pos = 0;

	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		str.replace(pos, s1.size(), s2);
		pos = pos + s2.size();
	}
	return (str);
}

void	File::parse(std::string s1, std::string s2)
{
	std::stringstream	output;

	if (!this->input.is_open())
		throw "the file is already open my frrrriend";
	else if (!this->input.good())
		throw "stream state is not good my frrrriend, badbit, eofbit or failbit";
	else if (!s1.size())
		throw "s1 sould not be empty my frrrriend";
	else if (!s2.size())
		throw "s2 sould not be empty my frrrriend";
	output << this->input.rdbuf();
	this->output.open(this->filename + ".replace", std::ofstream::trunc);
	this->output << this->replace(output.str(), s1, s2);
}
