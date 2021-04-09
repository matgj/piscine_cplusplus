#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}
ScavTrap::ScavTrap(std::string name):name(name), HP(100), HP_max(100), EP(50), EP_max(50), lvl(1), atc_melee(20), atc_ranged(15), reduc_armor(3)
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
	return (*this);
}

void 	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << BLUE << "SC4V-TP <" << this->name << "> attaque <" << target << "> ,causant <" << this->atc_ranged << "> points de dégâts!" << RESET << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << BLUE << "SC4V-TP <" << this->name << "> attaque <" << target << "> ,causant <" << this->atc_melee << "> points de dégâts!" << RESET << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->reduc_armor;

	if (amount < this->HP)
		this->HP = this->HP - amount;
	else
		this->HP = 0;
	std::cout << RED << "SC4V-TP <" << this->name <<  "> lvl: "<< this->lvl <<" se fait enculer, il a <" << this->HP << "> punta de vida tío!" << RESET << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->HP + amount > HP_max)
		HP = HP_max;
	else
		HP = this->HP + amount;

	std::cout << GREEN << "SC4V-TP <" << this->name << "> se répare, il a <" << this->HP << "> punta de vida tío!" << RESET << std::endl;
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
		std::cout << RED << this->name << " t'as pas assez d'energie pour lancer l'attaque boloss, reprends une trace" << RESET << std::endl;
}
