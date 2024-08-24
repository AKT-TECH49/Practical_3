#ifndef LEGION_H
#define LEGION_H

#include "UnitComponent.h"
#include <vector>
#include <iostream>

class Legion : public UnitComponent
{

    private:
    std::vector<UnitComponent*> cmps;
public:
    ~Legion() override;

    void move() override;
    void fight() override;
    void add(UnitComponent* component) override;
    void remove(UnitComponent* component) override;


};

#endif // LEGION_H
