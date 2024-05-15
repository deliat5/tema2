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
    virtual void

};