#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "HospitalEmployees.h"

class administrator
{
private:
    string department;
public:
    administrator();
    administrator(int theID, string theLastName, string theFirstName, string theDepartment);
    string getDepartment() const;
    void setDepartment(string theDepartment);
    void summary() const;
    string toString() const;
};

#endif