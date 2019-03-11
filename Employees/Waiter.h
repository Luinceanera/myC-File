#ifndef WAITER_H
#define WAITER_H

#include "CafeManager.h"

class waiter
{
private:
    int totalCustomers;
public:
    waiter();
    waiter(int theID, string theLastName, string theFirstName, string theCafeType, int theTotalCustomers);
    int getTotalCustomers() const;
    void setTotalCustomers(int theTotalCustomers);
    void summary() const;
    string toString() const;
};

#endif