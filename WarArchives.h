#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include <string>
#include<map>
#include <list>
#include <ctime>



#include "TacticalMemento.h"


//caretaker
//• The Caretaker interacts with the Memento(Tactical Memento) to store and retrieve strategies. 

class WarArchives
{
    private:
    //the mementos which are a strategy and a label must be stored in a data structure to be able to get a specific saved state and not neccessarily the one at the top so we need a map
    std::map<std::string, std::list<TacticalMemento*>::iterator> idx ; // Map for quick lookups
    std::list<TacticalMemento*> mementos; // List for storage
    std::map<std::string , std::time_t> timeP;



    public:

    void addTacticalMemento(TacticalMemento* memento , std::string& label);

    void removeTacticalMemento(std::string& label);

    TacticalMemento *getMemento(const std::string& label);

    std::string GetRecentLabel() const;


};


#endif