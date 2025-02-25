#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("default"), hitPoints(100), energyPoints(100),attackDamage(30)
{
	std::cout << "ClapTrap " << this->name << " created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(100), energyPoints(100),attackDamage(30)
{
    std::cout << "ClapTrap "<<name<< " has been created\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed!\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) { 
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(std::string const &target){
    if (hitPoints >0){
        std::cout << "ClapTrap "<<name<<" attacts "<<target<<" causing "<<attackDamage<<" points of damage.\n";
    }
    else {
        std::cout<<"Not enough hitPoints to attack.\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints =0;
    std::cout << "ClapTrap "<<name<<" takes "<< amount <<" of damage. Overall hitPoints: "<<hitPoints<<"\n";
 }

void ClapTrap::beRepaired(unsigned int amount){
        hitPoints+=amount;
        std::cout << "ClapTrap "<<name<<" is repaired to "<< amount <<" of hitPoints. Overall hitPoints: "<<hitPoints<<"\n";
}

std::string const	&ClapTrap::get_name(void) const
{
	return (this->name);
}

int const	&ClapTrap::get_hp(void) const
{
	return (this->hitPoints);
}

int const	&ClapTrap::get_energy_points(void) const
{
	return (this->energyPoints);
}

int const	&ClapTrap::get_damage(void) const
{
	return (this->attackDamage);
}

void	ClapTrap::set_name(std::string const &name)
{
	this->name = name;
}

void	ClapTrap::set_hp(int const &value)
{
	this->hitPoints = value;
}

void	ClapTrap::set_energy_points(int const &value)
{
	this->energyPoints = value;
}

void	ClapTrap::set_damage(int const &value)
{
	this->attackDamage = value;
}
