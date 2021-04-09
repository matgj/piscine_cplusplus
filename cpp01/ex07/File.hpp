/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:48:01 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 10:33:11 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
# include <fstream>
# include <sstream>

class File
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		filename;

	public:
		File(char *file);
		~File();

		void		parse(std::string s1, std::string s2);
		std::string	replace(std::string str, std::string from, std::string to);
};

#endif
