#ifndef CHEF_H
#define CHEF_H

#include "CafeManager.h"

class chef
{
private:
    int foodsPrepared;
public:
    chef();
    chef(int theID, string theLastName, string theFirstName, string theCafeType, int theFoodsPrepared);
    int getFoodsPrepared() const;
    void setFoodsPrepared(int theFoodsPrepared);
    string toString() const;
};

#endif