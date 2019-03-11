#include "HospitalEmployees.h"

hospitalEmployees::hospitalEmployees()
{
    //setID(0);
    //setLastName("Valdivia");
    //setFirstName("Corina");
}

hospitalEmployees::hospitalEmployees(int theID, string theLastName, string theFirstName)
{
    ID = theID;
    lastName = theLastName;
    firstName = theFirstName;
}

int hospitalEmployees::getID() const
{
    return ID;
}

string hospitalEmployees::getLastName() const
{
    return lastName;
}

string hospitalEmployees::getFirstName() const
{
    return firstName;
}

void hospitalEmployees::setID(int theID)
{
    ID = theID;
}

void hospitalEmployees::setLastName(string theLastName)
{
    lastName = theLastName;
}

void hospitalEmployees::setFirstName(string theFirstName)
{
    firstName = theFirstName;
}

string hospitalEmployees::toString() const
{
    return "HOS " + to_string(getID()) + " " + getLastName() + " " + getFirstName();
}