#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap &operator=(const ScavTrap &copy);

	void challengeNewcomer();
	std::string getName();
};

#endif
