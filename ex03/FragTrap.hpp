#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
    FragTrap(void);
    FragTrap(std::string const &name);
    FragTrap(FragTrap const &copy);
	~FragTrap(void);
    FragTrap	&operator=(FragTrap const &copy);

    void attack(std::string const &target);
    void	highFivesGuys(void);
};

#endif
