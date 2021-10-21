#ifndef IMATERIASOUCE_H
# define IMATERIASOUCE_H

class IMateriaSource
{
public:
       virtual ~IMateriaSource() {}
       virtual void learnMateria(AMateria*) = 0;
       virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif