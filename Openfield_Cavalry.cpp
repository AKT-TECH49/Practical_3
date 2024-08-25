#include "Openfield_Cavalry.h"
#include "Cavalry.h"


OpenFieldCavalry::OpenFieldCavalry() : Cavalry() 
{
    int newPower = 0;
    newPower = getPower() ;
    newPower += 5; // Increased attack power in open fields
}

void OpenFieldCavalry:: move()  
{
        position += 4; // Very fast movement in open fields
        std::cout << "OpenField Cavalry charges across the open field to position " << position << std::endl;
}

void OpenFieldCavalry::attack()
{
        std::cout << "OpenField Cavalry delivers a powerful charge, dealing " << (getPower() + 5) << " damage." << std::endl;
}

std::string OpenFieldCavalry:: getType() const 
    {
        return "OpenField Cavalry";
    }
