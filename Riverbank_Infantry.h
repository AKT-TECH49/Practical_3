#ifndef RIVERBANK_INFANTRY_H
#define RIVERBANK_INFANTRY_H

#include "Infantry.h"

class RiverbankInfantry : public Infantry
{
   public:
       RiverbankInfantry(int health, int defense);
       void move() override;
       std::string getType()const override;
       void attack()override;
};
#endif
