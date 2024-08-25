#include "Riverbank_Cavalry.h"
#include "Cavalry.h"

#include <iostream>
using namespace std;

RiverbankCavalry::RiverbankCavalry(int health, int defense) 
{
    this->health = health;
    this->defense += 4;
}

void RiverbankCavalry::move()
{
    position += 2; // Regular movement
    std::cout << "Riverbank Cavalry crosses the river swiftly to position " << position << std::endl;
}

void RiverbankCavalry::attack()
{
    std::cout << "Riverbank Cavalry charges from the riverbank, dealing " << (getPower() + 2) << " damage." << std::endl;
}

std::string getType()
{
    return "Riverbank Cavalry";
}