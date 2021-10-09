# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

class ClapTrap
{
    private:
        std::string _name;
        int _hp;
        int _ep;
        int _ad;
    public:
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
};

#endif