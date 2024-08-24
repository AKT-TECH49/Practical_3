#include "Ambush.h"



void Ambush::engage() const
{
     for (size_t i = 0; i < unitType.size(); ++i) 
    {
        std::cout << "Unit Type: " << unitType[i] 
                  << ", Count: " << unitCount[i]
                  << ", Health: " << unitHealth[i]
                  << ", Damage: " << unitDamage[i]
                  << ", Production Rate: " << unitRate[i] 
                  << std::endl;
    }
    //can improve
    


}




std::string Ambush::getUnitTypes(int i)
{
     if(i < unitType.size())
     {
        return unitType[i];

     }
     return"NULL";

}

int  Ambush::getUnitCounts(int i )
{
        if (i < unitCount.size()) 
    {
        return unitCount[i];
    }
    return 0;
}

int Ambush::getUnitProductionRates(int i )
{
    if(unitRate.size())
    {
        return unitRate[i];
    }
    return 0;
}

int Ambush::getUnitHealth(int i)
{
    if(unitHealth.size())
    {
        return unitHealth[i];
    }
    return 0;
}


int Ambush::getUnitDamage(int i )
{
   if(unitDamage.size())
   {
    return unitCount[i];
   }
   return 0;
}


void Ambush::setUnitTypes(std::vector<std::string> unitTypes)
{
    this->unitType = std::move(unitTypes);
}


void Ambush::setUnitCounts(std::vector<int> unitCounts)
{
    this->unitCount = std::move(unitCounts);
}

void Ambush::setUnitProductionRates(std::vector<int> unitRates)
{
    this->unitRate = std::move(unitRates);
}


void Ambush::setUnitHealth(std::vector<int> unitHealth) 
{
    this->unitHealth = std::move(unitHealth);
}


void Ambush::setUnitDamage(std::vector<int> unitDamage)
{
    this->unitDamage = std::move(unitDamage);
}