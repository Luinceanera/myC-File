#include "Surgeon.h"

surgeon::surgeon()
{
    //hospitalEmployees HOS;
    //doctor DOC;
    //HOS.setID(0);
    //HOS.setLastName("Valdivia");
    //HOS.setFirstName("Corina");
    //DOC.setSpecialty("Lawyer");
    //setOperating('Y');
}

surgeon::surgeon(int theID, string theLastName, string theFirstName, string theSpecialty, char theOperating)
{
    hospitalEmployees HOS;
    doctor DOC;
    HOS.setID(theID);
    HOS.setLastName(theLastName);
    HOS.setFirstName(theFirstName);
    DOC.setSpecialty(theSpecialty);
    setOperating(theOperating);
}

char surgeon::getOperating() const
{
    return operating;
}

void surgeon::setOperating(char theOperating)
{
    operating = theOperating;
}

string surgeon::toString() const
{
    hospitalEmployees HOS;
    doctor DOC;
    return "SGT " + to_string(HOS.getID()) + " " + HOS.getLastName() + " " + HOS.getFirstName() + " " + DOC.getSpecialty() + " " + getOperating();
}