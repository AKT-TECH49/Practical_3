#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <vector>
#include <string>
#include <iostream>


class BattleStrategy
{
    // interface class

    int tacticsLevel;
    std::string name;

    // this class needs to be integrated with the Abstract Factory(LegionFactory)
    // pattern to adapt production rates and unit types in real time
public:
    // Default constructor
    BattleStrategy() : name("Default Strategy"), tacticsLevel(0) {}

    // Parameterized constructor
    BattleStrategy(const std::string &name, int tacticsLevel)
        : name(name), tacticsLevel(tacticsLevel) {}

    virtual ~BattleStrategy() = default;

    // Copy constructor
    BattleStrategy(const BattleStrategy &other)
        : name(other.name), tacticsLevel(other.tacticsLevel)
    {
        std::cout << "Copy constructor called for BattleStrategy: " << name << std::endl;
    }

    BattleStrategy &operator=(const BattleStrategy &other)
    {
        if (this != &other)
        {
            name = other.name;
            tacticsLevel = other.tacticsLevel;
        }
        return *this;
    }

    // getters
    virtual std::string getUnitTypes(int i) = 0;
    virtual int getUnitCounts(int i) = 0;
    virtual int getUnitProductionRates(int i) = 0;
    virtual int getUnitHealth(int i) = 0;
    virtual int getUnitDamage(int i) = 0;
    // setters
    virtual void setUnitTypes(std::vector<std::string> unitTypes) = 0;
    virtual void setUnitCounts(std::vector<int> unitCounts) = 0;
    virtual void setUnitProductionRates(std::vector<int> unitProductionRates) = 0;
    virtual void setUnitHealth(std::vector<int> unitHealth) = 0;
    virtual void setUnitDamage(std::vector<int> unitDamage) = 0;

    // should work together
    virtual void engage() const = 0;
    virtual void attack() const = 0;

    // should work together
    virtual void retreat() const = 0;
    virtual void defend() const = 0;

    // Additional methods
    int getTacticsLevel() const;

    void setTacticsLevel(int level);

    std::string getName() const;

    void setName(const std::string &newName);
};

#endif