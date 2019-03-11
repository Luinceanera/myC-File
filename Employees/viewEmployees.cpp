/*#include "viewEmployees.h"

fstream file;

void viewEmployees::getList()
{
    file.open("EmployeeList.txt");
    index = 0;
    while (!file.eof())
    {
	   file >> categories[index];
	   if (categories[index] == "ADM")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index] >> dept[index];
	   }
	   else if (categories[index] == "CFM")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index] >> cafe[index];
	   }
	   else if (categories[index] == "CHF")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index] >> cafe[index];
		  file >> food[index];
	   }
	   else if (categories[index] == "DOC")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index] >> special[index];
	   }
	   else if (categories[index] == "HOS")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index];
	   }
	   else if (categories[index] == "JAN")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index] >> dept[index];
		  file >> sweep[index];
	   }
	   else if (categories[index] == "NRS")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index];
		  file >> customs[index];
	   }
	   else if (categories[index] == "REC")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index] >> dept[index];
		  file >> answer[index];
	   }
	   else if (categories[index] == "SGT")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index] >> special[index];
		  file >> ops[index];
	   }
	   else if (categories[index] == "WTR")
	   {
		  file >> identity[index];
		  file >> last[index] >> first[index] >> cafe[index];
		  file >> cafeCustoms[index];
	   }
	   index++;
    }
    file.close();
    view VIE;
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

void viewEmployees::getAdministrators()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    string tDepartment[1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "ADM")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  tDepartment[count] = dept[index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " administrator";
	   if (count > 1)
	   {
		  cout << "s";
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				string d = tDepartment[index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tDepartment[index0] = tDepartment[index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				tDepartment[index0 - 1] = d;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << setw(20) << "Department" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << setw(20) << tDepartment[index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Administrators" << endl;
    }
}

void viewEmployees::getCafeManager()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    string tCafeType[1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "CFM")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  tCafeType[count] = cafe[index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " Cafe Manager";
	   if (count > 1)
	   {
		  cout << "s";
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				string d = tCafeType[index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tCafeType[index0] = tCafeType[index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				tCafeType[index0 - 1] = d;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << setw(20) << "Cafe Type" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << setw(20) << tCafeType[index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Cafe Managers" << endl;
    }
}

void viewEmployees::getChef()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    string tCafeType[1000];
    int tFoodsPrepared[1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "CHF")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  tCafeType[count] = cafe[index0];
		  tFoodsPrepared[count] = cafeCustoms[index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " Chef";
	   if (count > 1)
	   {
		  cout << "s";
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				string d = tCafeType[index0];
				int e = tFoodsPrepared[index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tCafeType[index0] = tCafeType[index - 1];
				tFoodsPrepared[index0] = tFoodsPrepared[index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				tCafeType[index0 - 1] = d;
				tFoodsPrepared[index0 - 1] = e;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << setw(20) << "Cafe Type" << setw(20) << "Food Prepared" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << setw(20) << tCafeType[index0] << setw(20) << tFoodsPrepared[index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Chefs" << endl;
    }
}

void viewEmployees::getDoctor()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    string tSpecialty[1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "DOC")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  tSpecialty[count] = special[index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " Doctor";
	   if (count > 1)
	   {
		  cout << "s" << endl;
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				string d = tSpecialty[index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tSpecialty[index0] = tSpecialty[index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				tSpecialty[index0 - 1] = d;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << setw(20) << "Specialty" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << setw(20) << tSpecialty[index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Doctors" << endl;
    }
}

void viewEmployees::getHospitalEmployees()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "HOS")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " Hospital Employee";
	   if (count > 1)
	   {
		  cout << "s" << endl;
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Hospital Employees" << endl;
    }
}

void viewEmployees::getJanitor()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    string tDepartment[1000];
    char tSweeping[1][1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "JAN")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  tDepartment[count] = dept[index0];
		  tSweeping[1][count] = sweep[1][index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " Janitor";
	   if (count > 1)
	   {
		  cout << "s" << endl;
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				string d = tDepartment[index0];
				char e = tSweeping[1][index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tDepartment[index0] = tDepartment[index - 1];
				tSweeping[1][index0] = tSweeping[1][index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				tDepartment[index0 - 1] = d;
				tSweeping[1][index0 - 1] = e;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << setw(20) << "Department" << setw(20) << "Sweeping" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << setw(20) << tDepartment[index0] << setw(20) << tSweeping[1][index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Janitors" << endl;
    }
}

void viewEmployees::getNurse()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    int tPatients[1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "NRS")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  tPatients[count] = customs[index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " Nurse";
	   if (count > 1)
	   {
		  cout << "s" << endl;
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				int d = tPatients[index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tPatients[index0] = tPatients[index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				tPatients[index0 - 1] = d;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << setw(20) << "Patient" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << setw(20) << tPatients[index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Nurses" << endl;
    }
}

void viewEmployees::getReceptionist()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    string tDepartment[1000];
    char tAnswering[1][1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "REC")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  tDepartment[count] = dept[index0];
		  tAnswering[1][count] = answer[1][index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " Receptionist";
	   if (count > 1)
	   {
		  cout << "s" << endl;
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				string d = tDepartment[index0];
				char e = tAnswering[1][index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tDepartment[index0] = tDepartment[index - 1];
				tAnswering[1][index0] = tAnswering[1][index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				tDepartment[index0 - 1] = d;
				tAnswering[1][index0 - 1] = e;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << setw(20) << "Department" << setw(20) << "Answering" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << setw(20) << tDepartment[index0] << setw(20) << tAnswering[1][index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Receptionists" << endl;
    }
}

void viewEmployees::getSurgeon()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    string tSpecialty[1000];
    char tOperating[1][1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "SGT")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  tSpecialty[count] = special[index0];
		  tOperating[1][count] = ops[1][index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " Surgeon";
	   if (count > 1)
	   {
		  cout << "s" << endl;
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				string d = tSpecialty[index0];
				char e = tOperating[1][index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tSpecialty[index0] = tSpecialty[index - 1];
				tOperating[1][index0] = tOperating[1][index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				tSpecialty[index0 - 1] = d;
				tOperating[1][index0 - 1] = e;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << setw(20) << "Specialty" << setw(20) << "Operating" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << setw(20) << tSpecialty[index0] << setw(20) << tOperating[1][index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Surgeons" << endl;
    }
}

void viewEmployees::getWaiter()
{
    view VIE;
    int tID[1000];
    string tLastName[1000];
    string tFirstName[1000];
    string tCafeType[1000];
    int tCustomers[1000];
    int count = 0;
    for (int index0 = 0; index0 < index; index0++)
    {
	   if (categories[index0] == "WTR")
	   {
		  tID[count] = identity[index0];
		  tLastName[count] = last[index0];
		  tFirstName[count] = first[index0];
		  tCafeType[count] = cafe[index0];
		  tCustomers[count] = cafeCustoms[index0];
		  count++;
	   }
    }
    if (count > 0)
    {
	   cout << endl << endl << "There are currently " << count << " Waiter";
	   if (count > 1)
	   {
		  cout << "s" << endl;
	   }
	   bool b0 = false;
	   while (b0 == false)
	   {
		  b0 = true;
		  for (int index0 = 1; index0 < index; index0++)
		  {
			 if (tLastName[index0 - 1] < tLastName[index0])
			 {
				int a = tID[index0];
				string b = tLastName[index0];
				string c = tFirstName[index0];
				string d = tCafeType[index0];
				int e = tCustomers[index0];
				tID[index0] = tID[index - 1];
				tLastName[index0] = tLastName[index - 1];
				tFirstName[index0] = tFirstName[index - 1];
				tCafeType[index0] = tCafeType[index - 1];
				tCustomers[index0] = tCustomers[index - 1];
				tID[index0 - 1] = a;
				tLastName[index0 - 1] = b;
				tFirstName[index0 - 1] = c;
				tCafeType[index0 - 1] = d;
				tCustomers[index0 - 1] = e;
				b0 = false;
			 }
		  }
	   }
	   VIE.frame("--");
	   cout << setw(4) << "#" << setw(20) << "Last Name" << setw(20) << "First Name" << setw(10) << "ID" << setw(20) << "Cafe Type" << setw(20) << "Customer" << endl;
	   VIE.frame("--");
	   for (int index0 = 0; index0 < count; index0++)
	   {
		  cout << setw(4) << index0  << setw(20) << tLastName[index0] << setw(20) << tFirstName[index0] << setw(10) << tID[index0] << setw(20) << tCafeType[index0] << setw(20) << tCustomers[index0] << endl;
	   }
	   cout << endl << endl;
    }
    else
    {
	   cout << "There are currently no Waiters" << endl;
    }
}*/