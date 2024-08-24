#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include <iostream>
#include <vector>
#include <string>
#include "BattleStrategy.h"
#include "TacticalMemento.h"

//Originator

class TacticalPlanner
{
    private:
    std::shared_ptr<BattleStrategy> currentStrategy ;

    public:
    TacticalPlanner()=default;
    ~TacticalPlanner()=default;


     std::shared_ptr<TacticalMemento> createMemento();//should save current state into a memento

    void restoreMemento(const std::shared_ptr<TacticalMemento>& memento);//retores from a memento
    //setter:
    void setStrategy(const std::shared_ptr<BattleStrategy>& strategy);
    //getter:
   
    std::shared_ptr<BattleStrategy>  getStrategy() const;

};




#endif 