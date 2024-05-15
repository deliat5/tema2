#ifndef BOUQUET_H_
#define BOUQUET_H_

#include "Rose.h"
#include <vector>

class Bouquet {
private:
    std::vector<Rose> roseList;
public:
    Bouquet();
    void Addrose(const Rose& rose);
    void Info() const;
};

#endif