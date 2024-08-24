#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H


#include "LegionFactory.h"



class WoodlandFactory: public LegionFactory
{
     public: //
        Infantry* createInfantry()override;
        Cavalry* createCavalry() override;
        Artillery* createArtillery()override;
    
        void delpoyArtillery();
       
};

#endif