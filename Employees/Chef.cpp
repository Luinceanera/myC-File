#include "Chef.h"

chef::chef()
{
    //hospitalEmployees HOS;
    //cafeManager CFM;
    //HOS.setID(0);
    //HOS.setLastName("Valdivia");
    //HOS.setFirstName("Corina");
    //CFM.setCafeType("Buffet");
    //setFoodsPrepared(1000);
}

chef::chef(int theID, string theLastName, string theFirstName, string theCafeType, int theFoodsPrepared)
{
    hospitalEmployees HOS;
    cafeManager CFM;
    HOS.setID(theID);
    HOS.setLastName(theLastName);
    HOS.setFirstName(theFirstName);
    CFM.setCafeType(theCafeType);
    setFoodsPrepared(theFoodsPrepared);
}

int chef::getFoodsPrepared() const
{
    return foodsPrepared;
}

void chef::setFoodsPrepared(int theFoodsPrepared)
{
    foodsPrepared = theFoodsPrepared;
}

string chef::toString() const
{
    hospitalEmployees HOS;
    cafeManager CFM;
    return "CHF " + to_string(HOS.getID()) + " " + HOS.getLastName() + " " + HOS.getFirstName() + " " + CFM.getCafeType() + " " + to_string(getFoodsPrepared());
}