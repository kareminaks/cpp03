#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap robot1("Beep");
    ScavTrap robot2("Boop");


    robot1.attack("Target-1");
    robot1.takeDamage(5);
    robot1.beRepaired(3);
    robot2.attack("Target-2");
    robot2.takeDamage(8);
    robot1.beRepaired(5);
    robot1.attack("Target-3");
    robot1.highFivesGuys();
    robot2.guardGate();

    return 0;
}
