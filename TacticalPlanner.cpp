#include "TacticalPlanner.h"


  std::shared_ptr<TacticalMemento> TacticalPlanner::createMemento()
{
        auto menty = std::make_shared<TacticalMemento>();
        menty->storeStrategy(currentStrategy);
        return menty;
}


void TacticalPlanner::restoreMemento(const std::shared_ptr<TacticalMemento>& memento)
{
    // Restore the state of the tactical planner from the memento
    if(memento)
    {
        currentStrategy = memento->getStrategy();
    }
    
}

void TacticalPlanner::setStrategy(const std::shared_ptr<BattleStrategy>& strategy)
{
    this->currentStrategy = strategy;
}


std::shared_ptr<BattleStrategy> TacticalPlanner::getStrategy() const
{
    return currentStrategy;
}
