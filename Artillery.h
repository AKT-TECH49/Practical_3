#ifndef ARTILLERY_H
#define ARTILLERY_H

#include <string>
#include "LegionUnit.h"
#include "UnitComponent.h"

class Artillery : public LegionUnit ,UnitComponent
{   


 private:
       int power;
       std::string ammunitionType;

    public:
    Artillery();
    Artillery(int health, int defnse, int power, std::string ammunition);
       void move()override;
       void attack()override;
       void defend();
       void retreat();
       void loadAmmunition(std::string ammunitionType);
       std::string getType() const;
       int getPower();

     //functions to override from UnitComponent
    
    void move() override;
    void fight() override;
    
};

#endif