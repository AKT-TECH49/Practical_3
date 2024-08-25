#ifndef OPENFIELD_ARTILLERY_H
#define OPENFIELD_ARTILLERY_H

#include "Artillery.h"
#include <iostream>
using namespace std;

class OpenFieldArtillery : public Artillery 
{
    public:
        OpenFieldArtillery();
        void attack() override ;
        std::string getType() const override;
};

#endif
