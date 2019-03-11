#ifndef HOSPITALEMPLOYEES_H
#define HOSPITALEMPLOYEES_H

#include "Tools.h"

class hospitalEmployees
{
private:
    int ID;
    string lastName;
    string firstName;
public:
    hospitalEmployees();
    hospitalEmployees(int theID, string theLastName, string theFirstName);
    int getID() const;
    string getLastName() const;
    string getFirstName() const;
    void setID(int theID);
    void setLastName(string theLastName);
    void setFirstName(string theFirstName);
    string toString() const;
};

#endif