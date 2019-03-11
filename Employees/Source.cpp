#include "Source.h"
#include <iostream>

using namespace std;

void source::reset()
{
    b0 = false;
    b1 = false;
    b2 = false;
    b3 = false;
    selection = NULL;
    selection0 = NULL;
    selection1 = NULL;
    temporaryCategories = "\0";
    temporaryIdentity = NULL;
    temporaryLastName = "\0";
    temporaryFirstName = "\0";
    temporaryDepartment = "\0";
    temporaryCafeType = "\0";
    temporaryFoodsPrepared = NULL;
    temporarySpecialty = "\0";
    temporarySweep = NULL;
    temporaryPatients = NULL;
    temporaryAnswering = NULL;
    temporaryOperating = NULL;
    temporaryCustomers = NULL;
}

void source::loadEmployees()
{
    cout << "Opening File..." << endl;
    file.open("Employee List.txt");
    cout << "Retrieveing Data..." << endl;
    index = 0;
    for (int a = index; a <= 1000; a++)
    {
	   identity[a - 1] = -1;
    }
    while (!file.eof())
    {
	   file >> identity[index] >> categories[index] >> last[index] >> first[index];
	   if (categories[index] == "ADM")
	   {
		  file >> dept[index];
	   }
	   else if (categories[index] == "CFM")
	   {
		  file >> cafe[index];
	   }
	   else if (categories[index] == "CHF")
	   {
		  file >> cafe[index] >> food[index];
	   }
	   else if (categories[index] == "DOC")
	   {
		  file >> special[index];
	   }
	   else if (categories[index] == "JAN")
	   {
		  file >> dept[index] >> sweep[index];
	   }
	   else if (categories[index] == "NRS")
	   {
		  file >> customs[index];
	   }
	   else if (categories[index] == "REC")
	   {
		  file >> dept[index] >> answer[index];
	   }
	   else if (categories[index] == "SGT")
	   {
		  file >> special[index] >> ops[index];
	   }
	   else if (categories[index] == "WTR")
	   {
		  file >> cafe[index] >> cafeCustoms[index];
	   }
	   if (identity[index] != -1)
	   {
		  index++;
	   }
    }
    cout << "Closing File" << endl;
    file.close();
    mainMenu();
}

int source::getID()
{
    int number = 0;
    bool bull_ian = false;
    while (bull_ian == false)
    {
	   bull_ian = true;
	   for (int index0 = 0; identity[index0] != -1; index0++)
	   {
		  if (number == identity[index0])
		  {
			 bull_ian = false;
		  }
	   }
	   if (bull_ian == false)
	   {
		  number++;
	   }
    }
    return number;
}

void source::saveEmployees()
{
    cout << "Opening File..." << endl;
    ofstream file0;
    file0.open("Employee List.txt");
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (identity[index0] >= 0)
	   {
		  if (categories[index0] == "ADM")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << " " << dept[index0] << endl;
		  }
		  else if (categories[index0] == "CFM")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << " " << cafe[index0];
		  }
		  else if (categories[index0] == "CHF")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << " " << cafe[index0] << " " << food[index0] << endl;
		  }
		  else if (categories[index0] == "DOC")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << " " << special[index0] << endl;
		  }
		  else if (categories[index0] == "HOS")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << endl;
		  }
		  else if (categories[index0] == "JAN")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << " " << dept[index0] << " " << sweep[index0] << endl;
		  }
		  else if (categories[index0] == "NRS")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << " " << customs[index0] << endl;
		  }
		  else if (categories[index0] == "REC")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << " " << dept[index0] << " " << answer[index0] << endl;
		  }
		  else if (categories[index0] == "SGT")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << " " << special[index0] << " " << ops[index0] << endl;
		  }
		  else if (categories[index0] == "WTR")
		  {
			 file0 << identity[index0] << " " << categories[index0] << " " << last[index0] << " " << first[index0] << " " << cafe[index0] << " " << cafeCustoms[index0] << endl;
		  }
	   }
    }
    cout << "Closing File..." << endl;
    file0.close();
    cout << "File Saved!" << endl << endl;
}

void source::mainMenu()
{
    reset();
    int count = 0;
    b0 = false;
    while (b0 == false)
    {
	   b1 = false;
	   while (b1 == false)
	   {
		  VIE.mainMenu();
		  cin >> selection;
		  if (selection >= 0 && selection <= 5)
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
			 cout << "ERROR: Range of selection must be equal to or between 0 and 4" << endl << endl;
		  }
	   }
	   switch (selection)
	   {
	   case 0:
		  b0 = true;
		  break;
	   case 1:
		  addEmployees();
		  break;
	   case 2:
		  changeEmployees();
		  break;
	   case 3:
		  dropEmployees();
		  break;
	   case 4:
		  saveEmployees();
		  break;
	   case 5:
		  viewEmployees();
		  break;
	   }
    }
}

void source::addEmployees()
{
    b1 = false;
    while (b1 == false)
    {
	   VIE.addEmployees();
	   cin >> selection;
	   if (selection >= 0 && selection <= 11)
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
		  cout << "ERROR: Range of selection must be equal to or between 0 and 11" << endl << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addAdministrator();
	   break;
    case 2:
	   addCafeManager();
	   break;
    case 3:
	   addChef();
	   break;
    case 4:
	   addDoctor();
	   break;
    case 5:
	   addHospitalEmployee();
	   break;
    case 6:
	   addJanitor();
	   break;
    case 7:
	   addNurse();
	   break;
    case 8:
	   addReceptionist();
	   break;
    case 9:
	   addSurgeon();
	   break;
    case 10:
	   addWaiter();
	   break;
    case 11:
	   mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void source::changeEmployees()
{
    VIE.changeEmployees();
    reset();
    while (b0 == false)
    {
	   cout << "Which of the following would you like to change?" << endl;
	   for (int a = 0; a < index; a++)
	   {
		  cout << identity[a] << " - " << first[a] << " " << last[a] << endl;
	   }
	   cout << index << " - Return to Main Menu" << endl;
	   cout << "Please enter a number: ";
	   cin >> selection;
	   if (selection >= 0 && selection <= index)
	   {
		  b0 = false;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Enter a number equal to or between 0 and " << index << endl << endl;
	   }
    }
    if (selection < index)
    {
	   cout << "ORIGINAL SUMMARY" << endl;
	   cout << "If necessary, please copy the list below:" << endl << endl;
	   cout << "                    Name: " << first[selection] << " " << last[selection] << endl;
	   cout << "   Identification Number: " << identity[selection] << endl;
	   cout << "                     Job: " << categories[selection] << endl;
	   if (categories[selection] == "ADM" || categories[selection] == "JAN" || categories[selection] == "REC")
	   {
		  cout << "              Department: " << dept[selection] << endl;
		  if (categories[selection] == "JAN")
		  {
			 cout << "                Sweeping: " << sweep[selection] << endl;
		  }
		  else if (categories[selection] == "REC")
		  {
			 cout << "               Answering: " << answer[selection] << endl;
		  }
	   }
	   else if (categories[selection] == "CFM" || categories[selection] == "CHF" || categories[selection] == "WTR")
	   {
		  cout << "               Cafe Type: " << cafe[selection] << endl;
		  if (categories[selection] == "CHF")
		  {
			 cout << "Number of Foods Prepared: " << food[selection] << endl;
		  }
		  else if (categories[selection] == "WTR")
		  {
			 if (cafeCustoms[selection] > 1)
			 {
				cout << "        Customers Served: " << cafeCustoms[selection] << endl;
			 }
			 else
			 {
				cout << "         Customer Served: " << cafeCustoms[selection] << endl;
			 }
		  }
	   }
	   else if (categories[selection] == "DOC" || categories[selection] == "SGT")
	   {
		  cout << "               Specialty: " << special[selection] << endl;
		  if (categories[selection] == "SGT")
		  {
			 cout << "               Operating: " << ops[selection] << endl;
		  }
	   }
	   else if (categories[selection] == "NRS")
	   {
		  if (customs[selection] > 1)
		  {
			 cout << "      Number of Patients: " << customs[selection] << endl;
		  }
		  else
		  {
			 cout << "       Number of Patient: " << customs[selection] << endl;
		  }
	   }
	   system("pause");
	   cin.ignore();
	   cin.get();
	   categories[selection] = "\0";
	   first[selection] = "\0";
	   last[selection] = "\0";
	   dept[selection] = "\0";
	   answer[selection] = NULL;
	   sweep[selection] = NULL;
	   cafe[selection] = "\0";
	   food[selection] = NULL;
	   cafeCustoms[selection] = NULL;
	   special[selection] = "\0";
	   ops[selection] = NULL;
	   customs[selection] = NULL;
	   while (b1 == false)
	   {
		  cout << "Please enter the following to assign a position: " << endl;
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
		  cout << "Please enter a number: ";
		  cin >> selection0;
		  if (selection0 > 0 && selection0 < 11)
		  {
			 b1 = true;
		  }
		  else if (cin.good() == false)
		  {
			 cout << endl << endl << "END" << endl;
		  }
		  else
		  {
			 cout << "ERROR: Please enter a number equal to or between 1 and 10" << endl << endl;
		  }
	   }
	   cout << "Please enter the First Name: ";
	   cin >> first[selection];
	   cout << "Please enter the Last Name: ";
	   cin >> last[selection];
	   switch (selection0)
	   {
	   case 1:
		  categories[selection] = "ADM";
		  cout << "Please enter the Department: ";
		  cin >> dept[selection];
		  break;
	   case 2:
		  categories[selection] = "CFM";
		  cout << "Cafe Type: ";
		  cin >> cafe[selection];
		  break;
	   case 3:
		  categories[selection] = "CHF";
		  cout << "Cafe Type: ";
		  cin >> cafe[selection];
		  b1 = false;
		  while (b1 == false)
		  {
			 cout << "Number of Foods Prepared: ";
			 cin >> food[selection];
			 if (food[selection] > -1)
			 {
				b1 = true;
			 }
			 else if (cin.good() == false)
			 {
				cout << endl << endl << "END" << endl;
				exit(0);
			 }
			 else
			 {
				cout << "ERROR: Please enter a number equal to or greater than 0" << endl;
			 }
		  }
		  break;
	   case 4:
		  categories[selection] = "DOC";
		  cout << "Enter a Specialty: ";
		  cin >> special[selection];
		  break;
	   case 5:
		  categories[selection] = "HOS";
		  break;
	   case 6:
		  categories[selection] = "JAN";
		  cout << "Please enter the Department: ";
		  cin >> dept[selection];
		  b1 = false;
		  while (b1 == false)
		  {
			 cout << "Sweep? (Y/N): ";
			 cin >> sweep[selection];
			 if (sweep[selection] == 'Y' || sweep[selection] == 'y' || sweep[selection] == 'N' || sweep[selection] == 'n')
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
				cout << "ERROR: Enter Y or N" << endl << endl;
			 }
		  }
		  break;
	   case 7:
		  categories[selection] = "NRS";
		  b1 = false;
		  while (b1 == false)
		  {
			 cout << "Number of Patient(s): ";
			 cin >> customs[selection];
			 if (customs[selection] > -1)
			 {
				b1 = true;
			 }
			 else if (cin.good() == false)
			 {
				cout << endl << endl << "END" << endl;
				exit(0);
			 }
			 else
			 {
				cout << "ERROR: Please enter a number equal to or greater than 0" << endl;
			 }
		  }
		  break;
	   case 8:
		  categories[selection] = "REC";
		  cout << "Please enter the Department: ";
		  b1 = false;
		  while (b1 == false)
		  {
			 cout << "Answers? (Y/N): ";
			 cin >> answer[selection];
			 if (answer[selection] == 'Y' || answer[selection] == 'y' || answer[selection] == 'N' || answer[selection] == 'n')
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
				cout << "ERROR: Enter Y or N" << endl << endl;
			 }
		  }
		  cin >> dept[selection];
		  break;
	   case 9:
		  categories[selection] = "SGT";
		  cout << "Enter a Specialty: ";
		  cin >> special[selection];
		  b1 = false;
		  while (b1 == false)
		  {
			 cout << "Operates? (Y/N): ";
			 cin >> ops[selection];
			 if (ops[selection] == 'Y' || ops[selection] == 'y' || ops[selection] == 'N' || ops[selection] == 'n')
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
				cout << "ERROR: Enter Y or N" << endl << endl;
			 }
		  }
		  break;
	   case 10:
		  categories[selection] = "WTR";
		  cout << "Cafe Type: ";
		  cin >> cafe[selection];
		  b1 = false;
		  while (b1 == false)
		  {
			 cout << "Number of Customer(s): ";
			 cin >> cafeCustoms[selection];
			 if (cafeCustoms[selection] > -1)
			 {
				b1 = true;
			 }
			 else if (cin.good() == false)
			 {
				cout << endl << endl << "END" << endl;
				exit(0);
			 }
			 else
			 {
				cout << "ERROR: Please enter a number equal to or greater than 0" << endl;
			 }
		  }
		  break;
	   }
    }
    b0 = false;
    selection = 0;
    while (b0 == false)
    {
	   cout << "Change another Employee?" << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No" << endl;
	   cin >> selection;
	   if (selection == 1 || selection == 2)
	   {
		  b0 = true;
	   }
	   else if (cin.good() == false)
	   {
		  cout << endl << endl << "END" << endl;
		  exit(0);
	   }
	   else
	   {
		  cout << "ERROR: Please enter 1 or 2" << endl;
	   }
    }
}

void source::viewEmployees()
{
    VIE.viewEmployees();
    getList();
}

void source::addAdministrator()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(3);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(3);
    cin >> temporaryFirstName;
    cout << endl;
    VIE.addCafeType(3);
    cin >> temporaryDepartment;
    cout << endl;
    cout << endl << endl;
    while (b1 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
	   cout << "Department : " << temporaryDepartment << endl;
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
	   categories[index] = "ADM";
	   identity[index] = temporaryIdentity;
	   last[index] = temporaryLastName;
	   first[index] = temporaryFirstName;
	   dept[index] = temporaryDepartment;
	   index++;
    }
    sortEmployees();
    while (b2 == false)
    {
	   cout << endl << "Create another Administrator? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 3)
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
		  cout << "ERROR: Must be equal to or between 1 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addCafeManager();
	   break;
    case 2:
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::addCafeManager()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(3);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(3);
    cin >> temporaryFirstName;
    cout << endl;
    VIE.addCafeType(3);
    cin >> temporaryCafeType;
    cout << endl;
    cout << endl << endl;
    while (b1 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
	   cout << " Cafe Type : " << temporaryCafeType << endl;
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
	   categories[temporaryIdentity] = "CFM";
	   identity[temporaryIdentity] = temporaryIdentity;
	   last[temporaryIdentity] = temporaryLastName;
	   first[temporaryIdentity] = temporaryFirstName;
	   cafe[temporaryIdentity] = temporaryCafeType;
	   index++;
    }
    sortEmployees();
    while (b2 == false)
    {
	   cout << endl << "Create another Cafe Manager? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 3)
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
		  cout << "ERROR: Must be equal to or between 1 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addCafeManager();
	   break;
    case 2:
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::addChef()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(4);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(4);
    cin >> temporaryFirstName;
    cout << endl;
    VIE.addCafeType(4);
    cin >> temporaryCafeType;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addFoodsPrepared();
	   cin >> temporaryFoodsPrepared;
	   if (temporaryFoodsPrepared >= 0)
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
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
	   cout << " Cafe Type : " << temporaryCafeType << endl;
	   cout << "Foods Made : " << temporaryFoodsPrepared << endl;
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
	   categories[index] = "CHF";
	   identity[index] = temporaryIdentity;
	   last[index] = temporaryLastName;
	   first[index] = temporaryFirstName;
	   cafe[index] = temporaryCafeType;
	   food[index] = temporaryFoodsPrepared;
	   index++;
    }
    sortEmployees();
    while (b3 == false)
    {
	   cout << endl << "Create another Chef? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 3)
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
		  cout << "ERROR: Must be equal to or between 1 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addChef();
	   break;
    case 2:
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::addDoctor()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(3);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(3);
    cin >> temporaryFirstName;
    cout << endl;
    VIE.addSpecialty(3);
    cin >> temporarySpecialty;
    cout << endl << endl;
    doctor d(temporaryIdentity, temporaryLastName, temporaryFirstName, temporarySpecialty);
    while (b1 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
	   cout << " Specialty : " << temporarySpecialty << endl;
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
	   categories[index] = "DOC";
	   identity[index] = temporaryIdentity;
	   last[index] = temporaryLastName;
	   first[index] = temporaryFirstName;
	   special[index] = temporarySpecialty;
	   index++;
    }
    sortEmployees();
    while (b2 == false)
    {
	   cout << endl << "Create another Doctor? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 3)
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
		  cout << "ERROR: Must be equal to or between 1 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addDoctor();
	   break;
    case 2:
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::addHospitalEmployee()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(2);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(2);
    cin >> temporaryFirstName;
    cout << endl << endl;
    hospitalEmployees h(temporaryIdentity, temporaryLastName, temporaryFirstName);
    while (b1 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
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
	   categories[index] = "HOS";
	   identity[index] = temporaryIdentity;
	   last[index] = temporaryLastName;
	   first[index] = temporaryFirstName;
	   index++;
    }
    sortEmployees();
    while (b2 == false)
    {
	   cout << endl << "Create another Hospital Employee? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 3)
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
		  cout << "ERROR: Must be equal to or between 1 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addHospitalEmployee();
	   break;
    case 2:
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::addJanitor()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(4);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(4);
    cin >> temporaryFirstName;
    cout << endl;
    VIE.addDepartment(4);
    cin >> temporaryDepartment;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addSweeping();
	   cin >> temporarySweep;
	   if (temporarySweep == 'Y' || temporarySweep == 'y' || temporarySweep == 'N' || temporarySweep == 'n')
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
		  cout << "ERROR: Enter 'Y' or 'N'" << endl << endl;
	   }
    }
    if (temporarySweep == 'y')
    {
	   temporarySweep = 'Y';
    }
    else if (temporarySweep == 'n')
    {
	   temporarySweep = 'N';
    }
    cout << endl << endl;
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
	   cout << "Department : " << temporaryDepartment << endl;
	   cout << "  Sweeping : " << temporarySweep << endl;
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
	   categories[index] = "JAN";
	   identity[index] = temporaryIdentity;
	   last[index] = temporaryLastName;
	   first[index] = temporaryFirstName;
	   dept[index] = temporaryDepartment;
	   sweep[index] = temporarySweep;
	   index++;
    }
    sortEmployees();
    while (b3 == false)
    {
	   cout << endl << "Create another Janitor? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
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
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::addNurse()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(3);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(3);
    cin >> temporaryFirstName;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addPatients();
	   cin >> temporaryPatients;
	   if (temporaryIdentity >= 0)
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
    cin >> special[index];
    cout << endl << endl;
    nurse n(temporaryIdentity, temporaryLastName, temporaryFirstName, temporaryPatients);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
	   cout << "  Patients : " << temporaryPatients << endl;
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
	   categories[index] = "NRS";
	   identity[index] = temporaryIdentity;
	   last[index] = temporaryLastName;
	   first[index] = temporaryFirstName;
	   customs[index] = temporaryPatients;
	   index++;
    }
    sortEmployees();
    while (b3 == false)
    {
	   cout << endl << "Create another Nurse? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
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
		  cout << "ERROR: Must be equal to or between 1 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addNurse();
	   break;
    case 2:
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::addReceptionist()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(4);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(4);
    cin >> temporaryFirstName;
    cout << endl;
    VIE.addDepartment(4);
    cin >> temporaryDepartment;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addAnswering();
	   cin >> temporaryAnswering;
	   if (temporaryAnswering == 'Y' || temporaryAnswering == 'y' || temporaryAnswering == 'N' || temporaryAnswering == 'n')
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
    if (temporaryAnswering == 'y')
    {
	   temporaryAnswering = 'Y';
    }
    else if (temporaryAnswering == 'n')
    {
	   temporaryAnswering = 'N';
    }
    cout << endl << endl;
    receptionist r(temporaryIdentity, temporaryLastName, temporaryFirstName, temporaryDepartment, temporaryAnswering);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
	   cout << "Department : " << temporaryDepartment << endl;
	   cout << "   Answers : " << temporaryAnswering << endl;
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
	   categories[index] = "REC";
	   identity[index] = temporaryIdentity;
	   last[index] = temporaryLastName;
	   first[index] = temporaryFirstName;
	   dept[index] = temporaryDepartment;
	   answer[index] = temporaryAnswering;
    }
    sortEmployees();
    while (b3 == false)
    {
	   cout << endl << "Create another Receptionist? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cout << "0 - Quit" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 3)
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
		  cout << "ERROR: Must be equal to or between 1 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addReceptionist();
	   break;
    case 2:
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::addSurgeon()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(4);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(4);
    cin >> temporaryFirstName;
    cout << endl;
    VIE.addSpecialty(4);
    cin >> temporarySpecialty;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addOperating();
	   cin >> temporaryOperating;
	   if (temporaryOperating == 'Y' || temporaryOperating == 'y' || temporaryOperating == 'N' || temporaryOperating == 'n')
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
    if (temporaryOperating == 'y')
    {
	   temporaryOperating = 'Y';
    }
    else if (temporaryOperating == 'n')
    {
	   temporaryOperating = 'N';
    }
    cout << endl << endl;
    surgeon s(temporaryIdentity, temporaryLastName, temporaryFirstName, temporarySpecialty, temporaryOperating);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
	   cout << " Specialty : " << temporarySpecialty << endl;
	   cout << "  Operates : " << temporaryOperating << endl;
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
	   categories[index] = "SGT";
	   identity[index] = temporaryIdentity;
	   last[index] = temporaryLastName;
	   first[index] = temporaryFirstName;
	   special[index] = temporarySpecialty;
	   ops[index] = temporaryOperating;
	   index++;
    }
    sortEmployees();
    while (b3 == false)
    {
	   cout << endl << "Create another Surgeon? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 3)
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
		  cout << "ERROR: Must be equal to or between 1 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addSurgeon();
	   break;
    case 2:
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::addWaiter()
{
    reset();
    temporaryIdentity = getID();
    VIE.addLastName(4);
    cin >> temporaryLastName;
    cout << endl;
    VIE.addFirstName(4);
    cin >> temporaryFirstName;
    cout << endl;
    VIE.addCafeType(4);
    cin >> temporaryCafeType;
    cout << endl;
    while (b1 == false)
    {
	   VIE.addTotalCustomers();
	   cin >> temporaryCustomers;
	   if (temporaryCustomers >= 0)
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
    waiter w(temporaryIdentity, temporaryLastName, temporaryFirstName, temporaryCafeType, temporaryCustomers);
    while (b2 == false)
    {
	   cout << "SUMMARY" << endl << endl;
	   cout << "        ID : " << temporaryIdentity << endl;
	   cout << " Last Name : " << temporaryLastName << endl;
	   cout << "First Name : " << temporaryFirstName << endl;
	   cout << " Cafe Type : " << temporaryCafeType << endl;
	   cout << " Customers : " << temporaryCustomers << endl;
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
	   categories[index] = "WTR";
	   identity[index] = temporaryIdentity;
	   last[index] = temporaryLastName;
	   first[index] = temporaryFirstName;
	   cafe[index] = temporaryCafeType;
	   cafeCustoms[index] = temporaryCustomers;
	   index++;
    }
    sortEmployees();
    while (b3 == false)
    {
	   cout << endl << "Create another Waiter? " << endl;
	   cout << "1 - Yes" << endl;
	   cout << "2 - No, return to Add Employees" << endl;
	   cout << "3 - No, return to Main Menu" << endl;
	   cin >> selection;
	   if (selection >= 1 && selection <= 3)
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
		  cout << "ERROR: Must be equal to or between 1 and 3" << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addWaiter();
	   break;
    case 2:
	   addEmployees();
	   break;
    case 3:
	   mainMenu();
	   break;
    }
}

void source::getList()
{
    VIE.frame("==");

    getAdministrators();
    getCafeManager();
    getChef();
    getDoctor();
    getHospitalEmployees();
    getJanitor();
    getNurse();
    getReceptionist();
    getSurgeon();
    getWaiter();
}

void source::getAdministrators()
{
    int count = 1;
    VIE.frame("--");
    cout << "ADMINISTRATORS" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << setw(20) << "Department" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "ADM")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(20) << identity[index0] << setw(20) << dept[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::getCafeManager()
{
    int count = 1;
    VIE.frame("--");
    cout << "CAFE MANAGERS" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << setw(20) << "Cafe Type" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "CFM")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(200) << identity[index0] << setw(20) << cafe[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::getChef()
{
    int count = 1;
    VIE.frame("--");
    cout << "CHEFS" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << setw(20) << "Cafe Type" << setw(20) << "Foods Prepared" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "CHF")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(20) << identity[index0] << setw(20) << cafe[index0] << setw(20) << food[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::getDoctor()
{
    int count = 1;
    VIE.frame("--");
    cout << "DOCTORS" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << setw(20) << "Specialty" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "DOC")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(20) << identity[index0] << setw(20) << special[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::getHospitalEmployees()
{
    int count = 1;
    VIE.frame("--");
    cout << "HOSPITAL EMPLOYEES" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "HOS")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(20) << identity[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::getJanitor()
{
    int count = 1;
    VIE.frame("--");
    cout << "JANITORS" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << setw(20) << "Department" << setw(20) << "Sweeping?" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "JAN")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(20) << identity[index0] << setw(20) << dept[index0] << setw(20) << sweep[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::getNurse()
{
    int count = 1;
    VIE.frame("--");
    cout << "NURSES" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << setw(20) << "Patients" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "NRS")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(20) << identity[index0] << setw(20) << customs[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::getReceptionist()
{
    int count = 1;
    VIE.frame("--");
    cout << "RECEPTIONISTS" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << setw(20) << "Department" << setw(20) << "Answering?" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "REC")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(20) << identity[index0] << setw(20) << dept[index0] << setw(20) << answer[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::getSurgeon()
{
    int count = 1;
    VIE.frame("--");
    cout << "SURGEONS" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << setw(20) << "Specialty" << setw(20) << "Operating?" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "SGT")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(20) << identity[index0] << setw(20) << special[index0] << setw(20) << ops[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::getWaiter()
{
    int count = 1;
    VIE.frame("--");
    cout << "WAITORS" << endl;
    VIE.frame("--");
    cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(20) << "ID" << setw(20) << "Cafe Type" << setw(20) << "Customers" << endl;
    VIE.frame("--");
    for (int index0 = 0; index0 <= count; index0++)
    {
	   if (categories[index0] == "WTR")
	   {
		  cout << setw(4) << count << setw(20) << last[index0] << setw(20) << first[index0] << setw(20) << identity[index0] << setw(20) << cafe[index0] << setw(20) << cafeCustoms[index0] << endl;
		  count++;
	   }
    }
    cout << endl << endl;
    system("pause");
}

void source::dropEmployees()
{
    reset();
    int index0 = index - 1;
    VIE.dropEmployees();
    while (b0 == false)
    {
	   cout << "Which of the following employee would you like to drop?" << endl;
	   for (int a = 0; a < index0; a++)
	   {
		  cout << identity[a - 1] << " - " << last[a - 1] << ", " << first[a - 1] << endl;
	   }
	   cout << index0 << " - Return to the Main Menu" << endl;
	   cout << "ID: ";
	   cin >> selection;
	   if (selection >= 0 && selection <= index0)
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
		  cout << "ERROR: Please enter a number between 0 and " << index0 << endl;
	   }
    }
    if (selection == index0)
    {
	   mainMenu();
    }
    else
    {
	   while (b1 == false)
	   {
		  cout << "Are you sure you want to drop this employee: " << endl;
		  cout << "                    Name: " << first[selection] << " " << last[selection] << endl;
		  cout << "   Identification Number: " << identity[selection] << endl;
		  cout << "                     Job: " << categories[selection] << endl;
		  if (categories[selection] == "ADM" || categories[selection] == "JAN" || categories[selection] == "REC")
		  {
			 cout << "              Department: " << dept[selection] << endl;
			 if (categories[selection] == "JAN")
			 {
				cout << "                Sweeping: " << sweep[selection] << endl;
			 }
			 else if (categories[selection] == "REC")
			 {
				cout << "               Answering: " << answer[selection] << endl;
			 }
		  }
		  else if (categories[selection] == "CFM" || categories[selection] == "CHF" || categories[selection] == "WTR")
		  {
			 cout << "               Cafe Type: " << cafe[selection] << endl;
			 if (categories[selection] == "CHF")
			 {
				cout << "Number of Foods Prepared: " << food[selection] << endl;
			 }
			 else if (categories[selection] == "WTR")
			 {
				if (cafeCustoms[selection] > 1)
				{
				    cout << "        Customers Served: " << cafeCustoms[selection] << endl;
				}
				else
				{
				    cout << "         Customer Served: " << cafeCustoms[selection] << endl;
				}
			 }
		  }
		  else if (categories[selection] == "DOC" || categories[selection] == "SGT")
		  {
			 cout << "               Specialty: " << special[selection] << endl;
			 if (categories[selection] == "SGT")
			 {
				cout << "               Operating: " << ops[selection] << endl;
			 }
		  }
		  else if (categories[selection] == "NRS")
		  {
			 if (customs[selection] > 1)
			 {
				cout << "      Number of Patients: " << customs[selection] << endl;
			 }
			 else
			 {
				cout << "       Number of Patient: " << customs[selection] << endl;
			 }
		  }
		  cout << "1 - Yes" << endl;
		  cout << "2 - No" << endl;
		  cin >> selection0;
		  if (selection0 == 1 || selection0 == 2)
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
			 cout << "ERROR: Please enter 1 or 2" << endl;
		  }
	   }
	   if (selection0 == 1)
	   {
		  cout << "Now Dropping " << first[selection] << " " << last[selection] << "..." << endl;
		  string s = categories[selection];
		  /*if (s == "ADM")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
			 dept[selection] = "";
		  }
		  else if (s == "CFM")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
			 cafe[selection] = "";
		  }
		  else if (s == "CHF")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
			 cafe[selection] = "";
			 food[selection] = NULL;
		  }
		  else if (s == "DOC")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
			 special[selection] = "";
		  }
		  else if (s == "HOS")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
		  }
		  else if (s == "JAN")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
			 dept[selection] = "";
			 sweep[selection] = '\0';
		  }
		  else if (s == "NRS")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
			 customs[selection] = NULL;
		  }
		  else if (s == "REC")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
			 dept[selection] = "";
			 answer[selection] = '\0';
		  }
		  else if (s == "SGT")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
			 special[selection] = "";
			 ops[selection] = '\0';
		  }
		  else if (s == "WTR")
		  {
			 categories[selection] = "";
			 identity[selection] = -1;
			 last[selection] = "";
			 first[selection] = "";
			 cafe[selection] = "";
			 cafeCustoms[selection] = NULL;
		  }*/
		  for (int a = selection; a < index; a++)
		  {
			 if (a != (index - 1))
			 {
				temporaryCategories = categories[a - 1];
				temporaryIdentity = identity[a - 1];
				temporaryLastName = last[a - 1];
				temporaryFirstName = first[a - 1];
				temporaryDepartment = dept[a - 1];
				temporaryAnswering = answer[a - 1];
				temporarySweep = sweep[a - 1];
				temporaryCafeType = cafe[a - 1];
				temporaryFoodsPrepared = food[a - 1];
				temporaryCustomers = cafeCustoms[a - 1];
				temporarySpecialty = special[a - 1];
				temporaryOperating = ops[a - 1];
				temporaryPatients = customs[a - 1];
				categories[a - 1] = categories[a + 1];
				identity[a - 1] = identity[a + 1];
				first[a - 1] = first[a + 1];
				last[a - 1] = last[a + 1];
				dept[a - 1] = dept[a + 1];
				answer[a - 1] = answer[a + 1];
				sweep[a - 1] = sweep[a + 1];
				cafe[a - 1] = cafe[a + 1];
				food[a - 1] = food[a + 1];
				cafeCustoms[a - 1] = cafeCustoms[a + 1];
				special[a - 1] = special[a + 1];
				ops[a - 1] = ops[a + 1];
				customs[a - 1] = customs[a + 1];
				categories[a + 1] = temporaryCategories;
				identity[a + 1] = temporaryIdentity;
				first[a + 1] = temporaryFirstName;
				last[a + 1] = temporaryLastName;
				dept[a + 1] = temporaryDepartment;
				answer[a + 1] = temporaryAnswering;
				sweep[a + 1] = temporarySweep;
				cafe[a + 1] = temporaryCafeType;
				food[a + 1] = temporaryFoodsPrepared;
				cafeCustoms[a + 1] = temporaryCustomers;
				special[a + 1] = temporarySpecialty;
				ops[a + 1] = temporaryOperating;
				customs[a + 1] = temporaryPatients;
			 }
			 else
			 {
				categories[a - 1] = "";
				identity[a - 1] = -1;
				first[a - 1] = "";
				last[a - 1] = "";
				dept[a - 1] = "";
				answer[a - 1] = NULL;
				sweep[a - 1] = NULL;
				cafe[a - 1] = "";
				food[a - 1] = 0;
				cafeCustoms[a - 1] = 0;
				special[a - 1] = "";
				ops[a - 1] = NULL;
				customs[a - 1] = NULL;
			 }
		  }
		  index--;
	   }
	   while (b2 == false)
	   {
		  cout << endl << "Drop another employee?" << endl;
		  cout << "1 - Yes" << endl;
		  cout << "2 - No" << endl;
		  cin >> selection1;
		  if (selection1 == 1 || selection1 == 2)
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
			 cout << "ERROR: Please enter 1 or 2" << endl;
		  }
	   }
	   switch (selection1)
	   {
	   case 1:
		  dropEmployees();
		  break;
	   case 2:
		  mainMenu();
		  break;
	   }
    }
}

/*#include "Control.h"
#include "Source.h"
#include "viewEmployees.h"

control CTRL;
viewEmployees VEM;

void source::mainMenu()
{
    b0 = false;
    while (b0 == false)
    {
	   b1 = false;
	   while (b1 == false)
	   {
		  VIE.mainMenu();
		  cin >> selection;
		  if (selection >= 0 && selection <= 4)
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
			 cout << "ERROR: Range of selection must be equal to or between 0 and 4" << endl << endl;
		  }
	   }
	   switch (selection)
	   {
	   case 0:
		  b0 = true;
		  break;
	   case 1:
		  addEmployees();
		  break;
	   case 2:
		  changeEmployees();
		  break;
	   case 3:
		  dropEmployees();
		  break;
	   case 4:
		  viewEmployees();
		  break;
	   }
    }
}

void source::addEmployees()
{
    b1 = false;
    while (b1 == false)
    {
	   VIE.addEmployees();
	   cin >> selection;
	   if (selection >= 0 && selection <= 11)
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
		  cout << "ERROR: Range of selection must be equal to or between 0 and 11" << endl << endl;
	   }
    }
    switch (selection)
    {
    case 1:
	   addAdministrator();
	   break;
    case 2:
	   addCafeManager();
	   break;
    case 3:
	   addChef();
	   break;
    case 4:
	   addDoctor();
	   break;
    case 5:
	   addHospitalEmployee();
	   break;
    case 6:
	   addJanitor();
	   break;
    case 7:
	   addNurse();
	   break;
    case 8:
	   addReceptionist();
	   break;
    case 9:
	   addSurgeon();
	   break;
    case 10:
	   addWaiter();
	   break;
    case 11:
	   mainMenu();
	   break;
    case 0:
	   cout << endl << endl << "END" << endl;
	   exit(0);
	   break;
    }
}

void source::changeEmployees()
{
    VIE.changeEmployees();
}

void source::dropEmployees()
{
    VIE.dropEmployees();
}

void source::viewEmployees()
{
    VIE.viewEmployees();
    vem.getList();
}*/

void source::sortEmployees()
{
    reset();
    while (b0 == false)
    {
	   b0 = true;
	   for (int a = 1; a < index; a++)
	   {
		  if (identity[a - 1] > identity[a] && identity[a - 1] != -1 && identity[a] != -1)
		  {
			 b0 = false;
			 temporaryCategories = categories[a - 1];
			 temporaryIdentity = identity[a - 1];
			 temporaryLastName = last[a - 1];
			 temporaryFirstName = first[a - 1];
			 temporaryDepartment = dept[a - 1];
			 temporaryAnswering = answer[a - 1];
			 temporarySweep = sweep[a - 1];
			 temporaryCafeType = cafe[a - 1];
			 temporaryFoodsPrepared = food[a - 1];
			 temporaryCustomers = cafeCustoms[a - 1];
			 temporarySpecialty = special[a - 1];
			 temporaryOperating = ops[a - 1];
			 temporaryPatients = customs[a - 1];
			 categories[a - 1] = categories[a];
			 identity[a - 1] = identity[a];
			 first[a - 1] = first[a];
			 last[a - 1] = last[a];
			 dept[a - 1] = dept[a];
			 answer[a - 1] = answer[a];
			 sweep[a - 1] = sweep[a];
			 cafe[a - 1] = cafe[a];
			 food[a - 1] = food[a];
			 cafeCustoms[a - 1] = cafeCustoms[a];
			 special[a - 1] = special[a];
			 ops[a - 1] = ops[a];
			 customs[a - 1] = customs[a];
			 categories[a] = temporaryCategories;
			 identity[a] = temporaryIdentity;
			 first[a] = temporaryFirstName;
			 last[a] = temporaryLastName;
			 dept[a] = temporaryDepartment;
			 answer[a] = temporaryAnswering;
			 sweep[a] = temporarySweep;
			 cafe[a] = temporaryCafeType;
			 food[a] = temporaryFoodsPrepared;
			 cafeCustoms[a] = temporaryCustomers;
			 special[a] = temporarySpecialty;
			 ops[a] = temporaryOperating;
			 customs[a] = temporaryPatients;
		  }
	   }
    }
}