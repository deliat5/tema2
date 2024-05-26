#include "include/FlowerLibrary.h"
#include <vector>

int main()
{
    std::vector<AbstractFlower*> flowers;

    flowers.push_back(new Liliac("liliac1","Oleaceae", Fragrance::F_MILD_FRAGRANCE));
    flowers.push_back(new Sunflower("sunflower1","Asteraceae",5));
    flowers.push_back(new Rose("rose1", "Rosaceae", "rosu"));


    for(AbstractFlower* flower : flowers)
    {
        std::cout << *flower;
        std::cout << "===\n";
    }

    for(AbstractFlower* flower : flowers)
    {
        delete flower;
    }
    return 0;
}