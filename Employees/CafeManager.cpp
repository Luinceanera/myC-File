#include "CafeManager.h"

cafeManager::cafeManager()
{
    //hospitalEmployees HOS;
    //HOS.setID(0);
    //HOS.setLastName("Valdivia");
    //HOS.setFirstName("Corina");
    //setCafeType("Buffet");
}

cafeManager::cafeManager(int theID, string theLastName, string theFirstName, string theCafeType)
{
    hospitalEmployees HOS;
    HOS.setID(theID);
    HOS.setLastName(theLastName);
    HOS.setFirstName(theFirstName);
    setCafeType(theCafeType);
}

string cafeManager::getCafeType() const
{
    return cafeType;
}

void cafeManager::setCafeType(string theCafeType)
{
    cafeType = theCafeType;
}

string cafeManager::toString() const
{
    hospitalEmployees HOS;
    return "CFM " + to_string(HOS.getID()) + " " + HOS.getLastName() + " " + HOS.getFirstName() + " " + getCafeType();
}