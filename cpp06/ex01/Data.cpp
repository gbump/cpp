#include "Data.hpp"

Data::Data() : _name("-Nameless-") {}

Data::Data(std::string name) : _name(name) {}

Data::Data(const Data &other)
{
    this->_name = other.getName();
}

std::string Data::getName() const
{
    return (_name);
}

Data &Data::operator=(const Data &other)
{
    if (this == &other)
        return (*this);
    this->_name = other.getName();
    return (*this);
}

Data::~Data() {}