#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3, "SC4V-TP")
{
	std::cout << GREEN << "Hola chica. ScavTrap constructor called!" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Ciao bello. ScavTrap destructor called!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	name = copy.name;
	HP = copy.HP;
	HP_max = copy.HP_max;
	EP = copy.EP;
	EP_max = copy.EP_max;
	lvl = copy.lvl;
	atc_melee = copy.atc_melee;
	atc_ranged = copy.atc_ranged;
	reduc_armor = copy.reduc_armor;
	type = copy.type;
	return (*this);
}

void ScavTrap::challengeNewcomer()
{
	std::string	 	challenges[5] = {"boire 70 cl de tequila cul sec", "boire 1L de tequila cul sec et sniffer une trace de cocaine 90%", "sniffer 1 gramme de coke PURROS à sniffer en une trace", "jouer à la roulette russe avec mon Nagant M1895", "embrasser ma pute pas trop farrouche"};
	int 			i;

	if (this->EP > 25)
	{
		this->EP = this->EP - 25;
		i = rand() % 5;
		std::cout << BOLD << GREEN << "SC4V-TP <" << this->name << "> Amigo, pour entrer dans la planque de Pablo, tu dois réaliser ce challenge : " << challenges[i] << ". Je sais j'ai bien choisi, j'avais donné le même challenge à ta petite soeur la premiere fois qu'elle est entrée ici" << RESET << std::endl;
		(void)EP_max;
	}
	else
		std::cout << RED << "FR4G-TP" << this->name << " t'as pas assez d'energie pour lancer l'attaque boloss, reprends une trace" << RESET << std::endl;
}

std::string ScavTrap::getName()
{
	return(this->name);
}
