#ifndef ARTILLERY_H
#define ARTILLERY_H

#include <string>
#include "LegionUnit.h"

class Artillery : public LegionUnit
{

    private:
       int power;
       std::string ammunitionType;

    public:
    Artillery(int health, int defnse, int power, std::string ammunition);
       void move()override;
       void attack()override;
       void defend();
       void retreat();
       void loadAmmunition(std::string ammunitionType);
       std::string getType() const;
};
#endif