#include "Woodland_Cavalry.h"
#include "Cavalry.h"

#include <iostream>
using namespace std;

WoodlandCavalry::WoodlandCavalry(int health, int defense) 
{
    this->health = health;
    this->defense += 5;
}

void WoodlandCavalry::move()
{
    position += 2;
    std::cout<< "Woodland Cavalry maneuvers through the forest to position " << position << std::endl;
}

void WoodlandCavalry::attack()
{
   std::cout << "Woodland Cavalry strikes swiftly from cover, dealing" << (getPower() + 3) << " damage." << std::endl;
}

std::string getType()
{
    return "Woodland Cavalry";
}