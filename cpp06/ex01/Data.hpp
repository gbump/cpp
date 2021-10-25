# ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
#include <stdint.h>

class Data
{
    private:
        std::string _name;
    public:
        Data();
        Data(std::string name);
        ~Data();
        Data(const Data &other);
        Data &operator=(const Data &other);
        std::string getName() const;
};

#endif