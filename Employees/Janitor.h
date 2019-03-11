#ifndef JANITOR_H
#define JANITOR_H

#include "Administrator.h"

class janitor
{
private:
    char sweeping;
public:
    janitor();
    janitor(int theID, string theLastName, string theFirstName, string theDepartment, char theSweeping);
    char getSweeping() const;
    void setSweeping(char theSweeping);
    string toString() const;
};

#endif