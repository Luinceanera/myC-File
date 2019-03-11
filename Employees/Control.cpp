/*#include "Control.h"

view VIE;

void control::reset()
{
    answer = '\0';
    b0 = false;
    b1 = false;
    b2 = false;
    b3 = false;
    cafeCustoms = NULL;
    customs = NULL;
    cafe = "\0";
    dept = "\0";
    first = "\0";
    food = 0;
    identity = 0;
    last = "\0";
    ops = '\0';
    special = "\0";
    sweep = '\0';
}

void control::addAdministrator()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(4);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(4);
    cin >> last;
    cout << endl;
    VIE.addFirstName(4);
    cin >> first;
    cout << endl;
    VIE.addDepartment(4);
    cin >> dept;
    cout << endl << endl;
    administrator a(identity, last, first, dept);
    while (b1 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Department: " << dept << endl;
	   cout << "Are these correct? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << a.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    b2 = false;
    while (b2 == false)
    {
	   cout << endl << "Create another Administrator? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
	   case 1:
		  addAdministrator();
		  break;
	   case 2:
		  SRC.addEmployees();
		  break;
	   case 3:
		  SRC.mainMenu();
		  break;
	   case 0:
		  cout << endl << endl << "END" << endl;
		  exit(0);
		  break;
    }
}

void control::addCafeManager()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(4);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(4);
    cin >> last;
    cout << endl;
    VIE.addFirstName(4);
    cin >> first;
    cout << endl;
    VIE.addCafeType(4);
    cin >> cafe;
    cout << endl;
    cout << endl << endl;
    cafeManager c(identity, last, first, cafe);
    while (b1 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Cafe Type : " << cafe << endl;
	   cout << "Are these correct? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << c.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    b2 = false;
    while (b2 == false)
    {
	   cout << endl << "Create another Cafe Manager? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addCafeManager();
	   break;
    case 2:
	   SRC.addEmployees();
	   break;
    case 3:
	   SRC.mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void control::addChef()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(5);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(5);
    cin >> last;
    cout << endl;
    VIE.addFirstName(5);
    cin >> first;
    cout << endl;
    VIE.addCafeType(5);
    cin >> cafe;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addFoodsPrepared();
	   cin >> food;
	   if (food >= 0)
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter a number equal to or greater than 0" << endl << endl;
	   }
    }
    cout << endl << endl;
    chef c(identity, last, first, cafe, food);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Cafe Type : " << cafe << endl;
	   cout << "Foods Made: " << food << endl;
	   cout << "Are these correct? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << c.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    while (b3 == false)
    {
	   cout << endl << "Create another Chef? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b3 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addChef();
	   break;
    case 2:
	   SRC.addEmployees();
	   break;
    case 3:
	   SRC.mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void control::addDoctor()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(4);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(4);
    cin >> last;
    cout << endl;
    VIE.addFirstName(4);
    cin >> first;
    cout << endl;
    VIE.addSpecialty(4);
    cin >> special;
    cout << endl << endl;
    doctor d(identity, last, first, special);
    while (b1 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Specialty : " << special << endl;
	   cout << "Are these correct? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << d.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    while (b2 == false)
    {
	   cout << endl << "Create another Doctor? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addDoctor();
	   break;
    case 2:
	   SRC.addEmployees();
	   break;
    case 3:
	   SRC.mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void control::addHospitalEmployee()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(3);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(3);
    cin >> last;
    cout << endl;
    VIE.addFirstName(3);
    cin >> first;
    cout << endl << endl;
    hospitalEmployees h(identity, last, first);
    while (b1 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Are these correct? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << h.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    while (b2 == false)
    {
	   cout << endl << "Create another Hospital Employee? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addHospitalEmployee();
	   break;
    case 2:
	   SRC.addEmployees();
	   break;
    case 3:
	   SRC.mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void control::addJanitor()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(5);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(5);
    cin >> last;
    cout << endl;
    VIE.addFirstName(5);
    cin >> first;
    cout << endl;
    VIE.addDepartment(5);
    cin >> dept;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addSweeping();
	   cin >> sweep;
	   if (sweep == 'Y' || sweep == 'y' || sweep == 'N' || sweep == 'n')
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter a number equal to or greater than 0" << endl << endl;
	   }
    }
    cout << endl << endl;
    janitor j(identity, last, first, dept, sweep);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Department: " << dept << endl;
	   cout << "Sweeping  : " << sweep << endl;
	   cout << "Are these correct? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << j.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    while (b3 == false)
    {
	   cout << endl << "Create another Janitor? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b3 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addJanitor();
	   break;
    case 2:
	   SRC.addEmployees();
	   break;
    case 3:
	   SRC.mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void control::addNurse()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(4);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(4);
    cin >> last;
    cout << endl;
    VIE.addFirstName(4);
    cin >> first;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addPatients();
	   cin >> customs;
	   if (identity >= 0)
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    cin >> special;
    cout << endl << endl;
    nurse n(identity, last, first, customs);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Patients  : " << customs << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << n.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    while (b3 == false)
    {
	   cout << endl << "Create another Nurse? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b3 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addNurse();
	   break;
    case 2:
	   SRC.addEmployees();
	   break;
    case 3:
	   SRC.mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void control::addReceptionist()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(5);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(5);
    cin >> last;
    cout << endl;
    VIE.addFirstName(5);
    cin >> first;
    cout << endl;
    VIE.addDepartment(5);
    cin >> dept;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addAnswering();
	   cin >> answer;
	   if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n')
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter a number equal to or greater than 0" << endl << endl;
	   }
    }
    cout << endl << endl;
    receptionist r(identity, last, first, dept, answer);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Department: " << dept << endl;
	   cout << "Answers   : " << answer << endl;
	   cout << "Are these correct? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << r.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    while (b3 == false)
    {
	   cout << endl << "Create another Receptionist? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b3 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addReceptionist();
	   break;
    case 2:
	   SRC.addEmployees();
	   break;
    case 3:
	   SRC.mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void control::addSurgeon()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(5);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(5);
    cin >> last;
    cout << endl;
    VIE.addFirstName(5);
    cin >> first;
    cout << endl;
    VIE.addSpecialty(5);
    cin >> special;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addOperating();
	   cin >> ops;
	   if (ops == 'Y' || ops == 'y' || ops == 'N' || ops == 'n')
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter a number equal to or greater than 0" << endl << endl;
	   }
    }
    cout << endl << endl;
    surgeon s(identity, last, first, special, ops);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Specialty : " << special << endl;
	   cout << "Operates  : " << ops << endl;
	   cout << "Are these correct? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << s.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    while (b3 == false)
    {
	   cout << endl << "Create another Surgeon? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b3 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addSurgeon();
	   break;
    case 2:
	   SRC.addEmployees();
	   break;
    case 3:
	   SRC.mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void control::addWaiter()
{
    fstream file;
    source SRC;
    reset();
    while (b0 == false)
    {
	   VIE.addID(5);
	   cin >> identity;
	   if (identity >= 0)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "Identification must be 0 or greater" << endl;
	   }
    }
    VIE.addLastName(5);
    cin >> last;
    cout << endl;
    VIE.addFirstName(5);
    cin >> first;
    cout << endl;
    VIE.addCafeType(5);
    cin >> cafe;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addTotalCustomers();
	   cin >> cafeCustoms;
	   if (food >= 0)
	   {
		  b1 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter a number equal to or greater than 0" << endl << endl;
	   }
    }
    cout << endl << endl;
    waiter w(identity, last, first, cafe, cafeCustoms);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "ID        : " << identity << endl;
	   cout << "Last Name : " << last << endl;
	   cout << "First Name: " << first << endl;
	   cout << "Cafe Type : " << cafe << endl;
	   cout << "Customers : " << cafeCustoms << endl;
	   cout << "Are these correct? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 2)
	   {
		  b2 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter 1 or 2" << endl << endl;
	   }
    }
    if (selection == 1)
    {
	   cout << "Opening File..." << endl;
	   file.open("EmployeeList.txt");
	   cout << "Writing to File..." << endl;
	   file << w.toString() << endl;
	   cout << "Closing File..." << endl;
	   file.close();
	   cout << "Complete!" << endl;
    }
    while (b3 == false)
    {
	   cout << endl << "Create another Waiter? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 0 && selection <= 3)
	   {
		  b3 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Must be equal to or between 0 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addWaiter();
	   break;
    case 2:
	   SRC.addEmployees();
	   break;
    case 3:
	   SRC.mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}*/