#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap created (default)!\n";
}


FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " created!\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap from ClapTrap " << this-> name << " is destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << "FragTrap from ClapTrap " << this->name << " copied." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Assignment operator for FragTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void FragTrap::attack(std::string const &target){
    if (hitPoints >0){
        std::cout << "FragTrap "<< this->name<<" attacts "<<target<<" causing "<<this->attackDamage<<" points of damage.\n";
    }
    else {
        std::cout<<"FragTrap doesn't have enough hitPoints to attack.\n";
    }
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hitPoints <= 0)
		std::cout << "Cannot switch to gate-keeper mode because: FragTrap " << this->name << " is dead." << std::endl;
	else
		std::cout << "FragTrap from ClapTrap " << this->name << " wants everybody to give him high-five! Come on guys!" << std::endl;
}
