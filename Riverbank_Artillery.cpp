#include "Riverbank_Artillery.h"

#include "Artillery.h"


RiverbankArtillery::RiverbankArtillery()  
{
        this->health += 5; // Extra health near water
}

void RiverbankArtillery::attack() 
{
        std::cout << "Riverbank Artillery bombards from a secured position near the river, dealing " << (getPower() + 3) << " damage." << std::endl;
}

std::string RiverbankArtillery:: getType()const 
{
        return "Riverbank Artillery";
 }



