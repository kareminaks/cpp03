#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
    protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

    public:
    ClapTrap(void);
    ClapTrap(std::string name);
    virtual ~ClapTrap(void);
    ClapTrap(ClapTrap const &copy);
    ClapTrap &operator= (ClapTrap const &copy);

    virtual void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

	std::string const	&get_name(void) const;
	int const			&get_hp(void) const;
	int const			&get_energy_points(void) const;
	int const			&get_damage(void) const;
	void				set_name(std::string const &name);
	void				set_hp(int const &value);
	void				set_energy_points(int const &value);
	void				set_damage(int const &value);
};

#endif
