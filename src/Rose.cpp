#include "../include/Rose.h"

int Rose::numberOfRoseColors=5;

Rose::Rose(const std::string &name_, const std::string &family_, std::string  roseColor_) : AbstractFlower(name_, family_), roseColor{std::move(roseColor_)}
{
    IncreaseNumberOfRoseColors();
    std::cout<<"Created a new rose color:"<<" "<<roseColor<<"\n";
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

void Rose::Print(std::ostream &os) const
{
    os << "Printing all data for rose with id" <<" "<< id <<":"<<std::endl;
}

void Rose::EmitScent() const
{
    printf("Rose with id[%d] belonging to the family %s with %d number of colors is scented\n",id, family.c_str(), roseColor.c_str());
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