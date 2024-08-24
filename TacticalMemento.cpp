#include "TacticalMemento.h"



void TacticalMemento::storeStrategy(const std::shared_ptr<BattleStrategy>& strategy)
{
  this->strategy = std::make_shared<BattleStrategy>(*strategy);
}

std::shared_ptr<BattleStrategy> TacticalMemento::getStrategy() const
{
   return strategy;
}


