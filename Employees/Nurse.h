#ifndef NURSE_H
#define NURSE_H

#include "HospitalEmployees.h"

class nurse
{
private:
    int patients;
public:
    nurse();
    nurse(int theID, string theLastName, string theFirstName, int thePatients);
    int getPatients() const;
    void setPatients(int thePatients);
    string toString() const;
};

#endif