/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mathis <Mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 14:59:21 by Mathis            #+#    #+#             */
/*   Updated: 2020/11/13 16:04:16 by Mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 137, 145)
{
  this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{
  *this = copy;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
  (void)copy;
  return (*this);
}

void ShrubberyCreationForm::doing() const
{
    std::fstream file;
    std::string fname;

    fname = this->getTarget();
    fname.append("_shrubbery");
    const char *c = fname.c_str();
    file.open(c, std::ios::trunc | std::ios::out);
     if (!file)
        throw Form::FileErrorException();
    file << "               ,@@@@@@@,\n"
         << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
         << "    ,&%%&%&&%,@@@@@/@@@@@@,8888*88/8o\n"
         << "   ,%&&&&&%&&%,@@@@@@@/@@@88*88888/88'\n"
         << "   %&&%&%&/%&&%@@@@@/ /@@@88888*88888'\n"
         << "   %&&%/ %&%%&&@@@ V /@@' `88*8 `/88'\n"
         << "   `&%% ` /%&'    |.|         | ’|8'\n"
         << "       |o|        | |         | |\n"
         << "       |.|        | |         | |\n";
    file.close();
}
