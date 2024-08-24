#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"
#include <iostream>
#include <string>


class Cavalry : public LegionUnit 
{
    private:
       int power;
       std::string chargeBonus;

    public:
       Cavalry();
       Cavalry(int health, int defense, int power, std::string chargeBonus);
       void move()override;
       void attack()override;
       void defend();
       void retreat();
      std::string getType() const;
};
#endif