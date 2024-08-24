#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include <iostream>
#include <string>
#include <memory>

// memento client
#include "TacticalPlanner.h"
#include "WarArchives.h"
#include "BattleStrategy.h"

class TacticalCommand
{
private:
    std::shared_ptr<WarArchives> locked;
    std::shared_ptr<TacticalPlanner> pln;

public:
    // client for memento and Context(Tactical Command) for strategy
    // the idea is to use the saved mementos from the WarArchives (caretaker) to make informed decisions of the strategies to use
    // The Strategy patterns Context(Tactical command) should use the stored mementos (as client) to programatically choose the best strategy
    TacticalCommand(std::shared_ptr<WarArchives> saved, std::shared_ptr<TacticalPlanner> pln);
    void execute(std::string &label);


    // setter
    void setStrategy(BattleStrategy *strategy);


    // action
    void executeStrategy() const;
    void chooseBestStrategy() const;
};

#endif // TACTICALCOMMAND_H