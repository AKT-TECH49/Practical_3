#include "WoodlandFactory.h"

#include "LegionFactory.h"


Infantry* WoodlandFactory::createInfantry()
{
    return new Infantry(10, 2, 4,"Infantry");
}

Cavalry* WoodlandFactory:: createCavalry()
{
      return new Cavalry(10, 20, 3,"Cavalry");
}

Artillery* WoodlandFactory:: createArtillery()
{
     return new Artillery(20, 15, 1,"Artillery");
}

void WoodlandFactory:: delpoyArtillery()
{
    //need to e creative here 
}