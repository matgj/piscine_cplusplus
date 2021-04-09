#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# define RESET "\x1B[0m"
# define BOLD "\x1B[1m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define BLUE "\x1B[34m"

# include <iostream>
# include <string>
# include <cstdlib>
# include "ScavTrap.hpp"

class ScavTrap
{
	std::string			name;
	unsigned int		HP;
	unsigned int		HP_max;
	unsigned int		EP;
	unsigned int		EP_max;
	unsigned int		lvl;
	unsigned int		atc_melee;
	unsigned int		atc_ranged;
	unsigned int		reduc_armor;

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap &operator=(const ScavTrap &copy);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amout);
	void beRepaired(unsigned int amout);
	void challengeNewcomer();
};

#endif
