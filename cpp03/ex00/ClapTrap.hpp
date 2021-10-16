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
        ClapTrap (const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other1);
        ~ClapTrap();
        ClapTrap(std::string name);
        std::string getName(void);
        void setName(std::string name);
        int getHP(void);
        void setHP(int hp);
        int getEP(void);
        void setEP(int ep);
        int getAD(void);
        void setAD(int ad);
};

#endif