#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap from ClapTrap " << this->name << " created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name)
{
	std::cout << "ScavTrap from ClapTrap " << this->name << " is created." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap from ClapTrap " << this-> name << " is destroyed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap from ClapTrap " << this->name << " copied." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void ScavTrap::attack(std::string const &target){
    if (hitPoints >0){
        std::cout << "ScavTrap "<< this->name<<" attacts "<<target<<" causing "<<this->attackDamage<<" points of damage.\n";
    }
    else {
        std::cout<<"ScavTrap doesn't have enough hitPoints to attack.\n";
    }
}

void	ScavTrap::guardGate(void)
{
	if (this->hitPoints <= 0)
		std::cout << "Cannot switch to gate-keeper mode because: ClapTrap " << this->name << " is dead." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << this->name << " switched to mode: \"Guard Gate\"." << std::endl;
}
