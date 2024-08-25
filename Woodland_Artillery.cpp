#include "Woodland_Artillery.h"
#include "Artillery.h"

#include <iostream>
using namespace std;

WoodlandArtillery::WoodlandArtillery(int health, int defense) 
{
    this->health = health;
    this->defense += 3;
}

// void WoodlandArtillery::move()
// {
//     position += 2;
//     std::cout<< "Woodland Cavalry maneuvers through the forest to position " << position << std::endl;
// }

void WoodlandArtillery::attack()
{
   std::cout << "Woodland Artillery fires from hidden positions, dealing " << (getPower() + 5) << " damage." << std::endl;
}

std::string getType()
{
    return "Woodland Artillery";
}