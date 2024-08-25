#ifndef  WOODLAND_CAVALRY_H
#define WOODLAND_CAVALRY_H

#include "Cavalry.h"
#include <iostream>
using namespace std;

class WoodlandCavalry : public Cavalry
{
    public:
       WoodlandCavalry(int health, int defense);
       void move() override;
       std::string getType()const override;
       void attack()override;
};
#endif