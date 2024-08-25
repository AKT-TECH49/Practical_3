#include "WoodLand_Infantry.h"
#include "Infantry.h"

#include <iostream>
using namespace std;

WoodlandInfantry::WoodlandInfantry(int health, int defense) 
{
    this->health = health;
    this->defense = defense;
}

void WoodlandInfantry::move()
{
    position += 2;
    std::cout<< "Woodland Infantry moves stealthily through the forest to position " << position << std::endl;
}

void WoodlandInfantry::attack()
{
   std::cout << "Woodland Infantry ambushes the enemy, dealing " << (getPower() + 5) << " damage." << std::endl;
}

std::string getType()
{
    return "Woodland Infantry";
}