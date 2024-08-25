#ifndef RIVERBANK_CAVALRY_H
#define RIVERBANK_CAVALRY_H

#include "Cavalry.h"

class RiverbankCavalry : public Cavalry
{
   public:
       RiverbankCavalry(int health, int defense);
       void move() override;
       std::string getType()const override;
       void attack()override;
};
#endif
