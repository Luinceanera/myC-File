#include "Nurse.h"

nurse::nurse()
{
    //hospitalEmployees HOS;
    //HOS.setID(0);
    //HOS.setLastName("Valdivia");
    //HOS.setFirstName("Corina");
    //setPatients(1000);
}

nurse::nurse(int theID, string theLastName, string theFirstName, int thePatients)
{
    hospitalEmployees HOS;
    HOS.setID(theID);
    HOS.setLastName(theLastName);
    HOS.setFirstName(theFirstName);
    setPatients(thePatients);
}

int nurse::getPatients() const
{
    return patients;
}

void nurse::setPatients(int thePatients)
{
    patients = thePatients;
}

string nurse::toString() const
{
    hospitalEmployees HOS;
    return "NRS " + to_string(HOS.getID()) + " " + HOS.getLastName() + " " + HOS.getFirstName() + " " + to_string(getPatients());
}