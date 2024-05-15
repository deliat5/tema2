#ifndef LILIAC_H_
#define LILIAC_H_

#include "AbstractFlower.h"
#include "IPurpleBouquet.h"

class Liliac: public AbstractFlower, public IPurpleBouquet
{
private:
    static int liliac_number;


};