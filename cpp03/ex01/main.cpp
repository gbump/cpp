#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b("gbump");

    a.guardGate();
    b.guardGate();
    a.takeDamage(50);
    a.takeDamage(50);
    a.takeDamage(50);
    b.takeDamage(99);
    a.beRepaired(50);
    b.beRepaired(16);
    b.beRepaired(350);
    a.attack("2MONSTER2");
    b.attack("1MONSTER1");
    // b.takeDamage(5);
    // b.takeDamage(7);
    // b.takeDamage(7);
    // b.attack("1MONSTER1");
    // a.takeDamage(4);
    // a.beRepaired(3);
    // a.attack("2MONSTER2");
    return (0);
}