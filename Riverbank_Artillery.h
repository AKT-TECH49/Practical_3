#ifndef RIVERBANK_ARTILLERY_H
#define RIVERBANK_ARTILLERY_H

#include "Artillery.h"
#include <iostream>
using namespace std;

class RiverbankArtillery : public Artillery 
{
   public:
    RiverbankArtillery();
    void attack() override;
    std::string getType() const override;
};
#endif
