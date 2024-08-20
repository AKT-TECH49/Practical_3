#ifndef lEGIONFACTORY_H
#define lEGIONFACTORY_H


#include "Cavalry.h"
#include "Artillery.h"
#include "Infantry.h"

class LegionFactory 
{
    public:
       virtual Infantry* createInfantry() = 0;
       virtual Cavalry*  createCavalry() = 0;
       virtual Artillery* createArtillery()= 0;
};
#endif