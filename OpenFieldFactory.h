#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H


#include "LegionFactory.h"



class OpenFieldFactory : public LegionFactory
{
      public: //
        Infantry* createInfantry()override;
        Cavalry* createCavalry() override;
        Artillery* createArtillery()override;
    
        void delpoyArtillery();
};




#endif 