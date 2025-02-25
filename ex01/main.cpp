#include "ScavTrap.hpp"

int main() {
    ScavTrap robot1("Beep");
    ScavTrap robot2("Boop");
    ScavTrap robot3 = robot1;
    robot2 = robot1;

    robot1.attack("Target-1");
    robot1.takeDamage(5);
    robot1.beRepaired(3);
    robot2.attack("Target-2");
    robot2.takeDamage(8);
    robot1.beRepaired(5);
    robot1.attack("Target-3");
    robot1.guardGate();

    return 0;
}
