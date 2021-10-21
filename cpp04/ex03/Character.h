#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter
{
    public:
        Character();
        Character(std::string const &str);
        Character(const Character &other);
        virtual ~Character();
        Character &operator=(const Character &other);
        void setHP(int _hp);
        int getHP(void) const;

        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        std::string name;
        AMateria *inventory;
        int hp;

};

#endif