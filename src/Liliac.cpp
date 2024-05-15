#include "../include/Liliac.h"

Liliac::Liliac(const std::string &name_, const std::string &family, Fragrance fragrance_) : AbstractFlower(name_,family), Fragrance{fragrance_}
{
    std::cout << "Created a liliac!\n";
}

void Liliac::Afisare(std::ostream &os) const
{
    os << "Printing all data for liliac with id" << id <<":"<<std::endl;
}
void Liliac::EmitScent() const
{
    std::string waterTypeStr=(fragrance==Fragrance::F_MILD_FRAGRANCE) ? "Mild Fragrance" : "Strong Fragrance";
    printf("Liliac id[%d] %s belonging to the family %s has a %s\n", id, name.c_str(), family, fragranceStr.c_str());
}

Liliac::~Liliac()
{
    std::cout << "~Liliac()\n";
}