/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:01:43 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/27 18:25:41 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

  std::cout << "Array empty : " << std::endl;
  Array <char> tab;

  std::cout << "Array spec size : " << std::endl;
  Array <int> tabsize(5);
  std::cout << tabsize.size() << std::endl;

  std::cout << "Array of integer : " << std::endl;
  Array <int> test((unsigned int)8);
  for (unsigned int i = 0; i < test.size(); i++) {
    test[i] = i*i;
    std::cout << test[i] << std::endl;
  }

  std::cout << "\nArray of strings : " << std::endl;
  Array <std::string> test2((unsigned int)2);

  test2[0] = "Hola quetal amigo, una tequila fuerte gratissss?";
  test2[1] = "Mhhhh la tequila es muy bonito amigo";

  for (unsigned int i = 0; i < test2.size(); i++) {
      std::cout << test2[i] << std::endl;
  }

  std::cout << "\nCatching exception : " << std::endl;
  try {
    for (unsigned int i = 0; i < 4; i++) {
      std::cout << test2[i] << std::endl;
    }
  }
  catch (std::exception &e) {
    std::cout << "error: " << e.what() << std::endl;
  }

  std::cout << "\nCopy assignement (int array) : " << std::endl;
  Array <int>copy = test;
  for (unsigned int i = 0; i < copy.size(); i++) {
    std::cout << copy[i] << std::endl;
  }

  std::cout << "\nCopy constructor (string array) : " << std::endl;
  Array <std::string>ass(test2);
  for (unsigned int i = 0; i < ass.size(); i++) {
    std::cout << ass[i] << std::endl;
  }
  return 0 ;
}
