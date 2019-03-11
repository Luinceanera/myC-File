#ifndef DOCTOR_H
#define DOCTOR_H

#include "HospitalEmployees.h"

class doctor
{
private:
    string specialty;
public:
    doctor();
    doctor(int theID, string theLastName, string theFirstName, string theSpecialty);
    string getSpecialty() const;
    void setSpecialty(string theSpecialty);
    string toString() const;
};

#endif