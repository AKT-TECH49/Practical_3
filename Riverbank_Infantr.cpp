#include "Riverbank_Infantry.h"
#include "Infantry.h"

#include <iostream>
using namespace std;

RiverbankInfantry::RiverbankInfantry(int health, int defense) 
{
    this->health = health;
    this->defense += 3;
}

void RiverbankInfantry::move()
{
   position += 1; // Regular movement
   std::cout << "Riverbank Infantry fords the river to position " << position << std::endl;
}

void RiverbankInfantry::attack()
{
    std::cout << "Riverbank Infantry uses the terrain for cover, dealing " << getPower() << " damage." << std::endl;
}

std::string getType()
{
    return "Riverbank Infantry";
}