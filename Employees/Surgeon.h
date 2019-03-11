#ifndef SURGEON_H
#define SURGEON_H

#include "Doctor.h"

class surgeon
{
private:
    char operating;
public:
    surgeon();
    surgeon(int theID, string theLastName, string theFirstName, string theSpecialty, char theOperating);
    char getOperating() const;
    void setOperating(char theOperating);
    string toString() const;
};

#endif