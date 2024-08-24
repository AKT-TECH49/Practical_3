#ifndef CALVARY_H
#define CALVARY_H

#include "LegionUnit.h"
#include "RiverBank.h"
#include "OpenField.h"
#include "WoodLand.h"
#include "UnitComponent.h"

class Calvary : public LegionUnit ,UnitComponent
{   

     //functions to override from UnitComponent
    public:
    void move() override;
    void fight() override;
   
};











#endif