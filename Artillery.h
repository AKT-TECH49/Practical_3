#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "OpenField.h"
#include "WoodLand.h"
#include "RiverBank.h"
#include "LegionUnit.h"
#include "UnitComponent.h"

class Artillery : public LegionUnit ,UnitComponent
{   






     //functions to override from UnitComponent
    public:
    void move() override;
    void fight() override;
    
};

#endif