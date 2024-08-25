#include "Openfield_Infantry.h"

#include<iostream>
#include "Infantry.h"
using namespace std;


OpenFieldInfantry::OpenFieldInfantry() : Infantry() 
{
        health += 10; // Extra health in open fields
}

void OpenFieldInfantry:: move() 
{
        position += 3; // Faster movement in open fields
        std::cout << "OpenField Infantry advances rapidly across the field to position " << position << std::endl;
}

void OpenFieldInfantry:: attack() 
{
        std::cout << "OpenField Infantry charges with full force, dealing " << getPower() << " damage." << std::endl;
}

std::string OpenFieldInfantry::getType() const 
{
        return "OpenField Infantry";
}


