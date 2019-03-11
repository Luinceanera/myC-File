#include "View.h"

void view::mainMenu() const
{
    frame("==");
    cout << "MENU" << endl;
    frame("--");
    cout << "Please choose the following below:" << endl;
    cout << "1 - Add Employees" << endl;
    cout << "2 - Change Employees" << endl;
    cout << "3 - Drop Employees" << endl;
    cout << "4 - Save Employees" << endl;
    cout << "5 - View Employees" << endl;
    cout << "0 - EXIT" << endl;
}

void view::addEmployees() const
{
    frame("==");
    cout << "MENU >> ADD" << endl;
    frame("--");
    cout << "Please choose the following below to add:" << endl;
    cout << "1 - Administrator" << endl;
    cout << "2 - Cafe Manager" << endl;
    cout << "3 - Chef" << endl;
    cout << "4 - Doctor" << endl;
    cout << "5 - Hospital Employee" << endl;
    cout << "6 - Janitor" << endl;
    cout << "7 - Nurse" << endl;
    cout << "8 - Receptionist" << endl;
    cout << "9 - Surgeon" << endl;
    cout << "10 - Waiter" << endl;
    cout << "11 - Return to Main Menu" << endl;
    cout << "0 - EXIT" << endl;
}

void view::dropEmployees() const
{
    frame("==");
    cout << "MENU >> DROP" << endl;
    frame("--");
}

void view::changeEmployees() const
{
    frame("==");
    cout << "MENU >> CHANGE" << endl;
    frame("--");
}

void view::viewEmployees() const
{
    frame("==");
    cout << "MENU >> VIEW" << endl;
    frame("--");
}

void view::frame(string theString) const
{
    cout << endl;
    for (int index = 0; index < 50; index++)
    {
	   cout << theString;
    }
    cout << endl << endl;
}

void view::addLastName(int totalSteps) const
{
    cout << "1 / " << totalSteps << endl << endl;
    cout << "Please enter the employee's last name: ";
}

void view::addFirstName(int totalSteps) const
{
    cout << "2 / " << totalSteps << endl << endl;
    cout << "Please enter the employee's first name: ";
}

void view::addDepartment(int totalSteps) const
{
    cout << "3 / " << totalSteps << endl << endl;
    cout << "Please enter the department: ";
}

void view::addCafeType(int totalSteps) const
{
    cout << "3 / " << totalSteps << endl << endl;
    cout << "Please enter the cafe type: ";
}

void view::addSpecialty(int totalSteps) const
{
    cout << "3 / " << totalSteps << endl << endl;
    cout << "Please enter the specialty: ";
}

void view::addPatients() const
{
    cout << "3 / 3" << endl << endl;
    cout << "Please enter the number of patients: ";
}

void view::addFoodsPrepared() const
{
    cout << "3 / 3" << endl << endl;
    cout << "How many foods prepared? ";
}

void view::addAnswering() const
{
    cout << "3 / 3" << endl << endl;
    cout << "(Y/N) Does this employee answer calls? ";
}

void view::addSweeping() const
{
    cout << "3 / 3" << endl << endl;
    cout << "(Y/N) Does this employee sweep? ";
}

void view::addOperating() const
{
    cout << "3 / 3" << endl << endl;
    cout << "(Y/N) Does this employee operate? ";
}

void view::addTotalCustomers() const
{
    cout << "3 / 3" << endl << endl;
    cout << "How many customers this employee receive? ";
}