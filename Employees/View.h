#ifndef VIEW_H
#define VIEW_H

#include "Tools.h"

class view
{
public:
    void mainMenu() const;
    void addEmployees()const ;
    void dropEmployees() const;
    void changeEmployees() const;
    void viewEmployees() const;
    void frame(string theString) const;
    void addLastName(int totalSteps) const;
    void addFirstName(int totalSteps) const;
    void addDepartment(int totalSteps) const;
    void addCafeType(int totalSteps) const;
    void addSpecialty(int totalSteps) const;
    void addPatients() const;
    void addFoodsPrepared() const;
    void addAnswering() const;
    void addSweeping() const;
    void addOperating() const;
    void addTotalCustomers() const;
};

#endif