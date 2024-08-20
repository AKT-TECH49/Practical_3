#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H


#include "LegionFactory.h"
#include "RiverBank.h"

class RiverBankFactory: public LegionFactory
{
     public: //
        Infantry* createInfantry()override;
        Cavalry* createCavalry() override;
        Artillery* createArtillery()override;
    
        void delpoyArtillery();
       
};



#endif