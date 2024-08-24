#ifndef INFANTRY_H
#define INFANTRY_H


#include "LegionUnit.h"
#include <iostream>
#include <string>
using namespace std;


class Infantry : public LegionUnit 
{
    private:
       int power; // this is for attacking 
       std::string formation;

     public:
        Infantry(int health, int defence, int power, std::string formation);
        void move()override;
        void attack()override;
        void changeFormation(std::string& newFormation);
        void defend(); //Im trying to creative here please dont mind me 
        void retreat();
        std::string getType() const override;

};

#endif 
