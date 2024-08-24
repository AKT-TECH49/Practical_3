#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"
#include "OpenField.h"
#include "WoodLand.h"
#include "RiverBank.h"
#include "UnitComponent.h"

class Infantry : public LegionUnit, UnitComponent
{

    // functions to override from UnitComponent
public:
    void move() override;
    void fight() override;
};

#endif INFANTRY_H
