#include "../include/Bouquet.h"

Bouquet::Bouquet()=default;

void Bouquet::Addrose(const Rose &rose)
{
    roseList.push_back(rose);
}

void Bouquet::Info() const
{
    std::cout << "There is a bouquet of" << roseList.size() << "roses!\n";
}