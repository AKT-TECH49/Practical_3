#ifndef OPENFIELD_CAVALRY_H
#define OPENFIELD_CAVALRY_H

#include "Cavalry.h"

class OpenFieldCavalry : public Cavalry {
public:
    OpenFieldCavalry();
    void move() override;
    void attack() override;
    std::string getType() const override;
};

#endif
