#include "BattleStrategy.h"

int BattleStrategy::getTacticsLevel() const
{
        return tacticsLevel;
}

void BattleStrategy::setTacticsLevel(int level)
{
    tacticsLevel = level;
}

std::string BattleStrategy::getName() const
{
    return name;
}

void BattleStrategy::setName(const std::string &newName)
{
    name = newName;
}
