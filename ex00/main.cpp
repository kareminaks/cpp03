#include "ClapTrap.hpp"

int main() {
    ClapTrap robot1("Beep");
    ClapTrap robot2("Boop");
    ClapTrap robot3 = robot1;
    robot2 = robot1;

    robot1.attack("Target-1");
    robot1.takeDamage(5);
    robot1.beRepaired(3);
    robot1.attack("Target-2");
    robot1.takeDamage(8);
    robot1.beRepaired(5);
    robot1.attack("Target-3");

    return 0;
}
