#ifndef WOODLAND_H
#define WOODLAND_H

#include "Infantry.h"
#include "Calvary.h"
#include "Artillery.h"


class WoodLand : public Infantry , Calvary , Artillery 
{
        Infantry* createInfantry()override;
        Cavalry* createCavalry() override;
        Artillery* createArtillery()override;
    
        void delpoyArtillery();
       
};


#endif