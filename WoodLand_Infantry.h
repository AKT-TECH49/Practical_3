#ifndef  WOODLAND_INANTRY_H
#define WOODLAND_INFANTRY_H

#include "Infantry.h"
#include <iostream>
using namespace std;

class WoodlandInfantry : public Infantry
{
    public:
       WoodlandInfantry(int health, int defense);
       void move() override;
       std::string getType()const override;
       void attack()override;
};
#endif