#include "OpenField_Artillery.h"

#include "Artillery.h"
#include <iostream>
using namespace std;

OpenFieldArtillery::OpenFieldArtillery() : Artillery() 
{
        int newPower = 0;
        newPower = getPower();
        newPower += 5; // Increased attack power in open fields
        
}

 void OpenFieldArtillery::attack() 
{
        std::cout << "OpenField Artillery bombards with precision, dealing " << getPower() << " damage." << std::endl;
}

std::string OpenFieldArtillery::getType() const 
{
        return "OpenField Artillery";
    }

