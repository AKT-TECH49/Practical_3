#ifndef  WOODLAND_ARTILLERY_H
#define WOODLAND_ARTILLERY_H

#include "Artillery.h"
#include <iostream>
using namespace std;

class WoodlandArtillery : public Artillery
{
    public:
       WoodlandArtillery(int health, int defense);
       void move() override;
       std::string getType()const override;
       void attack()override;
       

};
#endif