#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    setName("-no name was given-");
    setHP(100);
    setEP(50);
    setAD(20);
    std::cout << "Nameless constructor was called SCAV" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    setName(name);
    setHP(100);
    setEP(50);
    setAD(20);
    std::cout << "Constructor was called SCAV" << std::endl;  
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor was called SCAV" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

 void ScavTrap::attack(std::string const & target)
 {
     if (getHP() == 0)
     {
        std::cout << getName() << " is dead. attack is not possible" << std::endl;
        return ;
     }
     else
     {
         std::cout << "ScavTrap " << getName() << " attack " << target << " causing "
         << getAD() << " points of damage!\n";
     }
 }