/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:55:44 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/06 08:15:50 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	search(Contact *contact, int contacts_number)
{
	std::string index_str;
	int 		done = 0;
	int			index_nb;
	int			i;

	while (done == 0)
	{
		std::cout << BOLD << "Your looking for more info about someone ? We'r gonna find it ! What is the person's index ?" << RESET << std::endl;
		std::getline(std::cin, index_str);
		if (index_str[0] == 0)
			std::cout << BOLD << RED << "Bro, index should only be a digital numbers between 0 and last index number : "<< contacts_number - 1 << RESET << std::endl;
		for (i = 0; index_str[i]; i++){
			if (!isdigit(index_str[0]) || !isdigit(index_str[i])){
				std::cout << BOLD << RED << "Index should only be a digital numbers bro between 0 and last index number : "<< contacts_number - 1 << RESET << std::endl;
				break;
			}
			index_nb = std::stoi(index_str);
			if (index_nb >= 0 && index_nb < contacts_number){
				contact[index_nb].print_all();
				done = 1;
			}
			else{
				std::cout << BOLD << RED << "Index should only be a digital numbers bro between 0 and last index number : "<< contacts_number - 1 << RESET << std::endl;
				break;
			}
		}
	}
}

void	search_setup(Contact *contact, int contacts_number)
{
	int 		j;

	if (contacts_number == 0){
		std::cout << BOLD << RED << "You have no friends in the phoneBook bro. Add some contacts... if you have some ! ;p" << RESET << std::endl;
		return ;
	}
	std::cout << std::setw(10)	<< "index" << "|";
	std::cout << std::setw(10)	<< "first name" << "|";
	std::cout << std::setw(10)	<<  "last name" << "|";
	std::cout << std::setw(10)	<<  "nickname" << std::endl;

	for (j = 0; j < contacts_number; j++){
		contact[j].print_small();
		std::cout << std::endl;
	}
	search(contact, contacts_number);
}

void	add(Contact *contact, int i)
{
	if (i < 8)
		contact[i].fill(i);
	else
		std::cout << BOLD << RED "Un proverbe japonais dit : Il n'y a pas de meilleur miroir qu'un ami véritable.\nOnly 8 contacts are admitted in the phoneBook bro. Choose well your friend ;).\n" << RESET;
}

int		main ()
{
 	std::string		input;
	Contact 		contact[8];
	int				i = 0;

	std::cout << GREEN << "最高の電話帳へようこそ. Saikō no denwachō e yōkoso. Denwachō means phone book in japenese.\nYou begin to understand ? Yes, you are in the best best phoneBook ever, writted in C++. \nPlease let the party begin. \n>>> Enter a command : ADD, SEARCH, EXIT." << RESET << std::endl;
	while (1)
	{
		std::cout << BOLD << BLUE "Denwachō$ " << RESET;
		getline(std::cin, input);
		if (input == "ADD")
		{
			add(contact, i);
			if (i < 8)
				i++;
		}
		else if (input == "SEARCH"){
			search_setup(contact, i);
		}
		else if (input == "EXIT"){
			break;
		}
		else
			std::cout << BOLD << RED << "七 転び 八 起き - Nana korobi ya oki - Les échecs conduisent au succès.\nPlease enter a valid command: add, search or exit." << RESET << std::endl;
	}
	return 0;
}
