#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    FragTrap robot1("Beep");
    ScavTrap robot2("Boop");
    DiamondTrap robot3("Bebeep");


    robot1.attack("Target-1");
    robot1.takeDamage(5);
    robot1.beRepaired(3);
    robot2.attack("Target-2");
    robot2.takeDamage(8);
    robot1.beRepaired(5);
    robot1.attack("Target-3");
    robot1.highFivesGuys();
    robot2.guardGate();
    robot3.attack("Target-3");
    robot3.whoAmI();
    
    return 0;
}
