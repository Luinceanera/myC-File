#include "Doctor.h"

doctor::doctor()
{
    //hospitalEmployees HOS;
    //HOS.setID(0);
    //HOS.setLastName("Valdivia");
    //HOS.setFirstName("Corina");
    //setSpecialty("Lawyer");
}

doctor::doctor(int theID, string theLastName, string theFirstName, string theSpecialty)
{
    hospitalEmployees HOS;
    HOS.setID(theID);
    HOS.setLastName(theLastName);
    HOS.setFirstName(theFirstName);
    setSpecialty(theSpecialty);
}

string doctor::getSpecialty() const
{
    return specialty;
}

void doctor::setSpecialty(string theSpecialty)
{
    specialty = theSpecialty;
}

string doctor::toString() const
{
    hospitalEmployees HOS;
    return "DOC " + to_string(HOS.getID()) + " " + HOS.getLastName() + " " + HOS.getFirstName() + " " + getSpecialty();
}