#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : _name("-Nameless-")
{
    std::cout << "Nameless constructor was called DIAMOND" << std::endl;
    ClapTrap::setName("Nameless_clap_name");
    setHP(FragTrap::getHP());
    setEP(ScavTrap::getHP());
    setAD(FragTrap::getAD());
 }

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name)
{
    std::cout << "Constructor was called DIAMOND" << std::endl;
   ClapTrap::setName(name + "_clap_name");
    setHP(FragTrap::getHP());
    setEP(ScavTrap::getHP());
    setAD(FragTrap::getAD()); 
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My ClapTrap name is " << getName();;
    std::cout << " and my DiamondTrap name is " << _name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
        std::cout << "Destructor was called DIAMOND" << std::endl;
}