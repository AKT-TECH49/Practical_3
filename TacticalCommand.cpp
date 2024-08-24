#include "TacticalCommand.h"

TacticalCommand::TacticalCommand(std::shared_ptr<WarArchives> saved, std::shared_ptr<TacticalPlanner> pln)
{
    this->locked = std::move(saved);
    this->pln = std::move(pln);
}


void TacticalCommand::execute(std::string &label)
{
    std::string label_ = label;
    auto morty = locked->getMemento(label_);

    if (morty)
    {
        std::shared_ptr<TacticalMemento> sharedMorty(morty);
        pln->restoreMemento(sharedMorty);
        executeStrategy();
    }
    else
    {
        std::cerr << "Memento not found for: " << label << std::endl;
    }
}




void TacticalCommand::executeStrategy() const
{
    // Executes the current strategy
    auto strty = pln->getStrategy();
    if (strty)
    {
        strty->engage();
    }else
    {
        std::cerr<<"No strategy set. \n";
    }
}

void TacticalCommand::chooseBestStrategy() const
{
    // - chooses an appropraite strategy based on previous results
    //(using the Memento pattern, explaination to follow)
    // - returns the chosen strategy
    // getmemento funtion has a string &label passed in how do we account for that
    // we need to get the memento from the war archives and then pass it to the planner
    // the planner will then use the memento to restore the state of the battle
    // then we can get the strategy from the planner and execute it

    std::string best = locked->GetRecentLabel();
    auto morty = locked->getMemento(best);

    if (morty)
    {
         // Convert raw pointer to shared_ptr
        std::shared_ptr<TacticalMemento> sharedMorty(morty);
        pln->restoreMemento(sharedMorty);
        executeStrategy();
    }
    else
    {
        std::cerr << "Memento not found for: " << best << std::endl;
    }
}
