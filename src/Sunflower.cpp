#include "../include/Sunflower.h"


Sunflower::Sunflower(const std::string &name_, const std::string &family, int numberOfSeeds_)
        : AbstractFlower(name_,family), numberOfSeeds {numberOfSeeds_}
{
    if(numberOfSeeds==0)
        seeds=nullptr;
    else
        seeds=new Sunflower[numberOfSeeds];
    std::cout << "Created a sunflower!\n";
}

void Sunflower::EmitScent() const
{
    printf("Sunflower with id[%d] belonging to the family %s with %d seeds is scented", id, family.c_str(), numberOfSeeds);
    printf("\n");
}

void Sunflower::Print(std::ostream& os) const
{
    os << "Printing all data for sunflower with id"<<" "<< id <<":"<< std::endl;
}

Sunflower::Sunflower(const Sunflower& other) : AbstractFlower(other)
{
    numberOfSeeds = other.numberOfSeeds;
    if(numberOfSeeds!=0)
    {
        seeds= new Sunflower[numberOfSeeds];
        for(int i = 0; i < numberOfSeeds; i++)
            seeds[i] = other.seeds[i];
    }
}
Sunflower& Sunflower::operator=(const Sunflower& other)
{
    if(this!= &other)
    {
        numberOfSeeds= other.numberOfSeeds;
        if(numberOfSeeds!= 0)
        {
            delete[] seeds;
            seeds=new Sunflower[numberOfSeeds];
            for(int i=0; i<numberOfSeeds;i++)
                seeds[i] = other.seeds[i];
        }
    }
    return *this;
}
Sunflower::Sunflower(Sunflower&& other) : numberOfSeeds{other.numberOfSeeds}, seeds{other.seeds}
{
    other.numberOfSeeds=-1;
    other.seeds=nullptr;
}
Sunflower& Sunflower::operator=(Sunflower&& other)
{
    if(this != &other)
    {
        numberOfSeeds= other.numberOfSeeds;
        seeds=other.seeds;
        other.numberOfSeeds=-1;
        other.seeds=nullptr;
    }
    return *this;
}

Sunflower::~Sunflower()
{
    std::cout << "~Sunflower()\n";
    delete[] seeds;
}