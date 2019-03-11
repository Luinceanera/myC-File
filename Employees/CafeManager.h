#ifndef CAFEMANAGER_H
#define CAFEMANAGER_H

#include "HospitalEmployees.h"

class cafeManager
{
private:
    string cafeType;
public:
    cafeManager();
    cafeManager(int theID, string theLastName, string theFirstName, string theCafeType);
    string getCafeType() const;
    void setCafeType(string theCafeType);
    string toString() const;
};

#endif