#include "Cavalry.h"
#include <iostream> 
#include <string>
using namespace std;



Cavalry::Cavalry(int health, int defense, int power, std::string chargeBonus): LegionUnit(health, defense)
{
    this->power = power;
    this->chargeBonus = chargeBonus;
}

void Cavalry::move()
{
     position += 3;
     chargeBonus += 2;  // The further they move, the more powerful the charge
     std::cout << "Cavalry gallops to position " << position << ", increasing charge power." << std::endl;
}


void Cavalry::attack()
{
     // int totalPower = power + chargeBonus; // change chargeBonus to a int
     // std::cout << "Cavalry charges with " << totalPower << " power and tramples the enemy!" << std::endl;
     //this->chargeBonus = 0;  // Reset after the attack
}


void Cavalry::defend()
{
    LegionUnit::defend();
    std::cout << "Cavalry uses mobility to evade attacks, boosting defense temporarily." << std::endl;
}


void Cavalry::retreat()
{
     LegionUnit::retreat();
     std::cout << "Cavalry retreats swiftly, minimizing exposure to enemy attacks." << std::endl;
}

std::string Cavalry::getType() const
{
     return "Cavalry";
}