#ifndef OPENFIELD_INFANTRY_H
#define OPENFIELD_INFANTRY_H

#include "Infantry.h"

class OpenFieldInfantry : public Infantry 
{
    public:
        OpenFieldInfantry();
        void move() override;
        void attack() override;
        std::string getType() const override;
};

#endif
