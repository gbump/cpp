#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("-no name was given-"), _hp(10), _ep(10), _ad(0)
{
    std::cout <<  "Nameless constructor was called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
    std::cout <<  "Constructor was called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor was called" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hp == 0)
    {
        std::cout << _name << " is dead" << std::endl;
        return ;
    }
    else
    {
        _hp -= amount;
        if (_hp < 0)
            _hp = 0;
        std::cout << _name << " took damage. hp = " << _hp << std::endl;
    }
}

 void ClapTrap::beRepaired(unsigned int amount)
 {
    if (_hp == 0)
    {
        std::cout << _name << "is dead" << std::endl;
        return ;
    }
    else
    {
        _hp += amount;
        if (_hp > 10)
            _hp = 10;
        std::cout << _name << " was repaired. hp = " << _hp << std::endl;
    }
 }

 void ClapTrap::attack(std::string const & target)
 {
     if (_hp == 0)
     {
        std::cout << _name << " is dead. attack is not possible" << std::endl;
        return ;
     }
     else
     {
         std::cout << "ClapTrap " << _name << " attack " << target << " causing "
         << _ad << " points of damage!\n";
     }
 }