#ifndef FORTICATION_H
#define FORTICATION_H

#include "BattleStrategy.h"
#include <vector>
#include <list>
#include <iostream>
#include <string>

class Fortication : public BattleStrategy 
{
    private:
    std::vector<std::string> unitType;
    std::vector<int> unitCount;
    std::vector<int> unitHealth;
    std::vector<int> unitDamage;
    std::vector<int> unitRate;

    //have to be creative about how this class will function
    //its a concrete Strategy class its interface is BattleStrategy 
    //context class TacticalCommand
        //add more functionality because 
    //• Strategies influence how factories produce and deploy units, integrating with the Abstract
    //Factory pattern to adapt production rates and unit types in real-time.
    public:
    Fortication();
    ~Fortication();
    void engage() const override;

     //getters 
     std::string getUnitTypes(int i) override;
     int getUnitCounts(int i ) override;
    int getUnitProductionRates(int i) override;
     int getUnitHealth(int i) override;
    int getUnitDamage(int i) override;
    //setters
    void setUnitTypes(std::vector<std::string> unitTypes) override;
   void setUnitCounts(std::vector<int> unitCounts) override;
    void setUnitProductionRates(std::vector<int> unitProductionRates)override;
   void setUnitHealth(std::vector<int> unitHealth) override;
   void setUnitDamage(std::vector<int> unitDamage) override;
    


};


#endif