#include "../include/Liliac.h"

Liliac::Liliac(int id, const std::string &name_, const std::string &family, Fragrance fragrance_) :id(id),AbstractFlower(name_,family), fragrance {fragrance_}
{
    std::cout << "Created a liliac!\n";
}

void Liliac::Print(std::ostream &os) const
{
    os << "Printing all data for liliac with id" <<" "<< id <<":"<<std::endl;
}
void Liliac::EmitScent() const
{
    std::string fragranceStr=(fragrance==Fragrance::F_MILD_FRAGRANCE) ? "Mild Fragrance" : "Strong Fragrance";
    printf("Liliac with id[%d] belonging to the family %s has a %s\n", id, family.c_str(), fragranceStr.c_str());
}
Liliac::~Liliac()
{
    std::cout << "~Liliac()\n";
}