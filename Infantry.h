#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h"
#include "LegionUnit.h"
using namespace std;

class Infantry : public LegionUnit, public UnitComponent
{
    private:
      int power;
      std::string formation;
   public:
   Infantry();
    Infantry(int health, int defnse, int power, std::string ammunition);
       void move()override;
       void attack()override;
       void defend();
       void retreat();
       void changeFormation(std::string& newformation);
       std::string getType() const;
       int getPower();
    // functions to override from UnitComponent

    void move() override;
    void fight() override;
};

#endif 
