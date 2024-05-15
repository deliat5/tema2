#ifndef ABSTRACT_FLOWER_H_
#define ABSTRACT_ANIMAL_H_

#include <iostream>

class AbstractFlower{
private:
    static int idGenerator;
protected:
    std::string name;
    const int id;
    std::string family;
public:
    virtual void EmitScent() const=0;
    virtual void Describe() const;
    void Identify() const;
    friend std::ostream& operator<<(std::ostream& os, const AbstractFlower& flower);
    virtual ~AbstractFlower();
protected:
    AbstractFlower(const std::string& name_="", const std::string& family_="");
    virtual void Afisare(std::ostream& os) const=0;
};
#endif