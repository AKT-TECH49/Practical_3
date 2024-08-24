#include "Legion.h"

Legion::~Legion()
{
    for (UnitComponent* cmp : cmps)
    {
        delete cmp;
    }
}

void Legion::move()
{
    std::cout << "Legion moving as a group." << std::endl;
    for (UnitComponent* cmp : cmps)
    {
        cmp->move();
    }
}

void Legion::fight()
{
     std::cout << "Legion engaing in combat." << std::endl;
    for (UnitComponent* cmp : cmps)
    {
        cmp->fight();
    }
}

void Legion::add(UnitComponent* cmp)
{
    cmps.push_back(cmp);
}


void Legion::remove(UnitComponent* cmp)
{
    std::vector<UnitComponent*>::iterator i = cmps.begin();
   while(i != cmps.end())
    {
        if (*i == cmp)
        {
            delete *i;
            i = cmps.erase(i);  
        }
        else
        {
            ++i;  
        }
    }
}