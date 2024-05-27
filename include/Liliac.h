#ifndef LILIAC_H_
#define LILIAC_H_

#include "AbstractFlower.h"
#include "enums/Fragrance.h"

class Liliac: public AbstractFlower
{
private:
    Fragrance fragrance;
public:
    Liliac(const std::string& name_="", const std::string& family_="", Fragrance fragrance_=Fragrance::F_NONE);
    void Afisare(std::ostream& os) const override;
    void EmitScent() const override;
    ~Liliac() override;
};
#endif