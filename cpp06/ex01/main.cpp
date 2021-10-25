#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    std::cout << "serialize" << std::endl;
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    std::cout << "deserialize" << std::endl;
    return (reinterpret_cast<Data *>(raw));  
}

int main()
{
    Data *ptr = new Data("gbump");
    std::cout << ptr << std::endl;
    std::cout << ptr->getName() << std::endl;
    uintptr_t raw = 1;
    std::cout << raw << std::endl;
    raw = serialize(ptr);
    std::cout << raw << std::endl;
    ptr = NULL;
    std::cout << ptr << std::endl;
    std::cout << deserialize(raw)->getName() << std::endl;
    delete ptr;

    return (0);
}