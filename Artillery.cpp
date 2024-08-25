#include "Artillery.h"

#include <iostream>
using namespace std;



 Artillery::Artillery(int health, int defnse, int power, std::string ammunition):LegionUnit(health,defense)
 {
     power = power;
     ammunitionType = ammunition;
 }

void Artillery::move()
{
    position += 1;
        std::cout << "Artillery repositions to " << position << "." << std::endl;
}

void Artillery:: attack()
{
    if (ammunitionType == "explosive") {
            std::cout << "Artillery fires explosive shells, causing a massive explosion dealing " << (power + 10) << " damage in an area!" << std::endl;
        } else if (ammunitionType == "incendiary") {
            std::cout << "Artillery launches incendiary rounds, igniting the battlefield and dealing " << (power + 5) << " damage over time." << std::endl;
        } else {
            std::cout << "Artillery fires a standard barrage, dealing " << power << " damage to the target." << std::endl;
    }
}


 void Artillery::defend()
 {
    LegionUnit::defend();
    std::cout << "Artillery fortifies its position, increasing defense and bracing for impact." << std::endl;
 }


void Artillery:: retreat()
{
  LegionUnit::retreat();
  std::cout << "Artillery withdraws to a safer position, preparing to fire from a distance." << std::endl;
}


void Artillery::loadAmmunition(std::string ammunitionType)
{
    ammunitionType = ammunitionType;
    std::cout << "Artillery loads " << ammunitionType << " ammunition." << std::endl;
}

std::string Artillery:: getType() const
{
   return "Artillery";
}

int Artillery::getPower()
{
    return power;
}