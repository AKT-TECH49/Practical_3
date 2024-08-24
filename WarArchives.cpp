#include "WarArchives.h"



void WarArchives::addTacticalMemento(TacticalMemento *memento, std::string& label)
{
    //will be using a list might make us finding the memento must faster
    mementos.push_back(memento);
    idx[label] = std::prev(mementos.end());
    timeP[label] = std::time(NULL);
}


void WarArchives::removeTacticalMemento(std::string& label)
{
    std::map<std::string, std::list<TacticalMemento*>::iterator>::iterator fetch = idx.find(label);
    if (fetch != idx.end())
    {
        mementos.erase(fetch->second);
        idx.erase(fetch);   
    }

}

TacticalMemento* WarArchives::getMemento(const std::string& label)
{
    auto searched = idx.find(label);

    if(searched != idx.end())
    {
       return *(searched->second);
    }
    else
    {
    return NULL;
    }

}



std::string WarArchives::GetRecentLabel() const
{
    std::string recent;
    std::time_t tme =0;
    for(const auto& entry : timeP)
    {
        if(entry.second > tme)
        {
            tme = entry.second;
            recent = entry.first;
        }
    }
    return recent;
}
