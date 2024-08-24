#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include <iostream>
#include <vector>
#include <memory>
#include "BattleStrategy.h"


//memento
class TacticalMemento 
{
    private:
    std::shared_ptr<BattleStrategy> strategy;


    public:
    TacticalMemento()=default;
     ~TacticalMemento()=default;

    //setter
    void storeStrategy(const std::shared_ptr<BattleStrategy>& strategy);

    //getters
    std::shared_ptr<BattleStrategy>getStrategy() const;


    
};


#endif 