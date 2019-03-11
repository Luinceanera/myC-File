#ifndef RECEPTIONIST_H
#define RECEPTIONIST_H

#include "Administrator.h"

class receptionist
{
private:
    char answering;
public:
    receptionist();
    receptionist(int theID, string theLastName, string theFirstName, string theDepartment, char theAnswering);
    char getAnswering() const;
    void setAnswering(char theAnswering);
    string toString() const;
};

#endif