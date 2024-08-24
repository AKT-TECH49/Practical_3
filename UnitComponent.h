#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H


#include <string>

class UnitComponent
{
    public:
    virtual ~UnitComponent() = default;


    //methods to be overrode
    virtual void move() = 0;
    virtual void fight() = 0;
    virtual void add(UnitComponent* cmp) = 0;
    virtual void remove(UnitComponent* cmp) = 0;

};












#endif