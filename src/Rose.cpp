#include "../include/Rose.h"

int Rose::numberOfRoseColors=5;

Rose::Rose(const std::string &name_, const std::string &family_, const std::string& roseColors_) : AbstractFlower(name_, family_), roseColors{roseColors_}
{
    IncreaseNumberOfRoseColors();
    std::cout << "Created a new rose color!\n";
}

int Rose::GetNumberOfRoseColors()
{
    return numberOfRoseColors;
}

void Rose::IncreaseNumberOfRoseColors()
{
    numberOfRoseColors++;
}

void Rose::RemoveRoseColor()
{
    if(numberOfRoseColors==0)
        throw std::logic_error("Rose colors cannot be less than zero\n");
    numberOfRoseColors--;
}

void Rose::Afisare(std::ostream &os) const
{
    os << "Printing all data for rose with id" <<" "<< id <<":"<<std::endl;
}

void Rose::EmitScent() const
{
    printf("Rose id[%d] %s belonging to the family %s with %d number of colors is scented\n",
           id, name.c_str(), family.c_str(), roseColors.c_str());
}
void Rose::Describe() const
{
    printf("Describing a rose:\n name %s belonging to family %s\n", name.c_str(), family.c_str());
}

Rose::~Rose()
{
    std::cout << "~Rose()\n";
}

void Rose::Bouquet() const
{
    std::cout << "The Rose is in a bouquet!\n";
}