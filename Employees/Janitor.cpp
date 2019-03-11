#include "Janitor.h"

janitor::janitor()
{
    //hospitalEmployees HOS;
    //administrator ADM;
    //HOS.setID(0);
    //HOS.setLastName("Valdivia");
    //HOS.setFirstName("Corina");
    //ADM.setDepartment("Lawyer");
    //setSweeping('Y');
}

janitor::janitor(int theID, string theLastName, string theFirstName, string theDepartment, char theSweeping)
{
    hospitalEmployees HOS;
    administrator ADM;
    HOS.setID(theID);
    HOS.setLastName(theLastName);
    HOS.setFirstName(theFirstName);
    ADM.setDepartment(theDepartment);
    setSweeping(theSweeping);
}

char janitor::getSweeping() const
{
    return sweeping;
}

void janitor::setSweeping(char theSweeping)
{
    sweeping = theSweeping;
}

string janitor::toString() const
{
    hospitalEmployees HOS;
    administrator ADM;
    return "JAN " + to_string(HOS.getID()) + " " + HOS.getLastName() + " " + HOS.getFirstName() + " " + ADM.getDepartment() + " " + getSweeping();
}