#ifndef ROSE_H_
#define ROSE_H_

#include "AbstractFlower.h"
#include "IRoseBouquet.h"

class Rose:public AbstractFlower, public IRoseBouquet
{
private:
    static int numberOfRoseColors;
    std::string roseColor;
public:
    Rose(const std::string& name_="",const std::string& family_="",std::string  roseColors_="");
    static int GetNumberOfRoseColors();
    void IncreaseNumberOfRoseColors();
    static void RemoveRoseColor();
    void Print(std::ostream& os) const override;
    void EmitScent() const override;
    void Describe() const override;
    ~Rose() override;
    void Bouquet() const override;
};
#endif