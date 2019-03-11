#include "Waiter.h"

waiter::waiter()
{
    //hospitalEmployees HOS;
    //cafeManager CFM;
    //HOS.setID(0);
    //HOS.setLastName("Valdivia");
    //HOS.setFirstName("Corina");
    //CFM.setCafeType("Buffet");
    //setTotalCustomers(1000);
}

waiter::waiter(int theID, string theLastName, string theFirstName, string theCafeType, int theTotalCustomers)
{
    hospitalEmployees HOS;
    cafeManager CFM;
    HOS.setID(theID);
    HOS.setLastName(theLastName);
    HOS.setFirstName(theFirstName);
    CFM.setCafeType(theCafeType);
    setTotalCustomers(theTotalCustomers);
}

int waiter::getTotalCustomers() const
{
    return totalCustomers;
}

void waiter::setTotalCustomers(int theTotalCustomers)
{
    totalCustomers = theTotalCustomers;
}

void waiter::summary() const
{
    hospitalEmployees HOS;
    cafeManager CFM;
    cout << "ID          : " << HOS.getID() << endl;
    cout << "Last Name   : " << HOS.getLastName() << endl;
    cout << "First Name  : " << HOS.getFirstName() << endl;
    cout << "Cafe Type   : " << CFM.getCafeType() << endl;
    cout << "Customers   : " << getTotalCustomers() << endl;
}

string waiter::toString() const
{
    hospitalEmployees HOS;
    cafeManager CFM;
    return "WTR " + to_string(HOS.getID()) + " " + HOS.getLastName() + " " + HOS.getFirstName() + " " + CFM.getCafeType() + " " + to_string(getTotalCustomers());
}