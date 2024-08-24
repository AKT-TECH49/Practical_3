#include "LegionUnit.h"

#include <iostream>
using namespace std;

LegionUnit::LegionUnit(int health, int defense)
{
    this->health = health;
    this->defense = defense;

}
    
void LegionUnit::defend()
{ 
     std::cout << getType() << " assumes a defensive stance, increasing defense." << std::endl;
      defense += 5;   

}

bool LegionUnit::isAlive()
{
   return health > 0;
}


void LegionUnit::takeDamage(int damage)
{
     int actualDamage = damage - defense;
        if (actualDamage > 0) {
            health -= actualDamage;
            std::cout << getType() << " takes " << actualDamage << " damage. Health is now " << health << "." << std::endl;
        } else {
            std::cout << getType() << " deflects the attack!" << std::endl;
        }
}

