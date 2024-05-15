#include "../include/AbstractFlower.h"

int AbstractFlower::idGenerator = 1;

void AbstractFlower::Describe() const
{
    printf("Describing an abstract flower with the name %s belonging to the family %s\n", name.c_str(), family);
}

void AbstractFlower::Identify() const
{
    std::cout << "I am an abstract flower!\n";
}

AbstractFlower::AbstractFlower(const std::string& name_, const std::string& family_) : name{name_}, family{family_}, id {idGenerator++}
{
    std::cout << "Created an absract flower\n";
}

std::ostream &operator<<(std::ostream &os, const AbstractFlower &flower)
{
    os << "Name: " << flower.name << "\t" << "Family: " << flower.family << std::endl;
    flower.Afisare(os);
    return os;
}


AbstractFlower::~AbstractFlower() = default;