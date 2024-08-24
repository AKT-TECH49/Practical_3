#include "OpenFieldFactory.h"
#include "LegionFactory.h"


Infantry* OpenFieldFactory::createInfantry()
{
    return new Infantry(10, 2, 4,"Infantry");
}

Cavalry* OpenFieldFactory:: createCavalry()
{
      return new Cavalry(10, 20, 3,"Cavalry");
}

Artillery* OpenFieldFactory:: createArtillery()
{
     return new Artillery(20, 15, 1,"Artillery");
}

void OpenFieldFactory:: delpoyArtillery()
{
    //need to e creative here 
}