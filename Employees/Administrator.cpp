#include "Administrator.h"

administrator::administrator()
{
    //hospitalEmployees HOS;
    //HOS.setID(0);
    //HOS.setLastName("Valdivia");
    //HOS.setFirstName("Corina");
    //setDepartment("Lawyer");
}

administrator::administrator(int theID, string theLastName, string theFirstName, string theDepartment)
{
    hospitalEmployees HOS;
    HOS.setID(theID);
    HOS.setLastName(theLastName);
    HOS.setFirstName(theFirstName);
    setDepartment(theDepartment);
}

string administrator::getDepartment() const
{
    return department;
}

void administrator::setDepartment(string theDepartment)
{
    department = theDepartment;
}

void administrator::summary() const
{
    hospitalEmployees HOS;
    cout << "ID          : " << HOS.getID() << endl;
    cout << "Last Name   : " << HOS.getLastName() << endl;
    cout << "First Name  : " << HOS.getFirstName() << endl;
    cout << "Department  : " << getDepartment() << endl;
}

string administrator::toString() const
{
    hospitalEmployees HOS;
    string a = to_string(HOS.getID());
    return "ADM " + a + " " + HOS.getLastName() + " " + HOS.getFirstName() + " " + getDepartment();
}