#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name) {
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " created!\n";
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed!\n";
}


void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << name << " and my ClapTrap name is " << ClapTrap::name << "!\n";
}

void DiamondTrap::attack(std::string const &target) {
    ScavTrap::attack(target);
}
