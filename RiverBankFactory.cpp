#include "RiverBankFactory.h"


Infantry* RiverBankFactory::createInfantry()
{
    return new Infantry(10, 2, 4,"Infantry");
}

Cavalry* RiverBankFactory:: createCavalry()
{
      return new Cavalry(10, 20, 3,"Cavalry");
}

Artillery* RiverBankFactory:: createArtillery()
{
     return new Artillery(20, 15, 1,"Artillery");
}

void RiverBankFactory:: delpoyArtillery()
{
    //need to e creative here 
}