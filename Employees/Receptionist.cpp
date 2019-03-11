#include "Receptionist.h"

receptionist::receptionist()
{
    //hospitalEmployees HOS;
    //administrator ADM;
    //HOS.setID(0);
    //HOS.setLastName("Valdivia");
    //HOS.setFirstName("Corina");
    //ADM.setDepartment("Lawyer");
    //setAnswering('Y');
}

receptionist::receptionist(int theID, string theLastName, string theFirstName, string theDepartment, char theAnswering)
{
    hospitalEmployees HOS;
    administrator ADM;
    HOS.setID(theID);
    HOS.setLastName(theLastName);
    HOS.setFirstName(theFirstName);
    ADM.setDepartment(theDepartment);
    setAnswering(theAnswering);
}

char receptionist::getAnswering() const
{
    return answering;
}

void receptionist::setAnswering(char theAnswering)
{
    answering = theAnswering;
}

string receptionist::toString() const
{
    hospitalEmployees HOS;
    administrator ADM;
    return "REC " + to_string(HOS.getID()) + " " + HOS.getLastName() + " " + HOS.getFirstName() + " " + ADM.getDepartment() + " " + getAnswering();
}