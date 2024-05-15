#ifndef SUNFLOWER_H_
#define SUNFLOWER_H_

#include "./AbstractFlower.h"

class Sunflower : public AbstractFlower
{
private:
    Sunflower *seeds;
    int numberOfSeeds;
public:
    Sunflower(const std::string& name_="", const std::string& family="", int numberOfSeeds_=0);
    Sunflower(const Sunflower& other);
    Sunflower& operator=(const Sunflower& other);
    Sunflower(Sunflower&& other);
    Sunflower& operator=(Sunflower&& other);
    void EmitScent() const override;
    void Afisare(std::ostream& os) const override;
    ~Sunflower() override;
};
#endif