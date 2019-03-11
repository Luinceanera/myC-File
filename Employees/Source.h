#ifndef SOURCE_H
#define SOURCE_H

#include "Administrator.h"
#include "CafeManager.h"
#include "Chef.h"
#include "Doctor.h"
#include "HospitalEmployees.h"
#include "Janitor.h"
#include "Nurse.h"
#include "Receptionist.h"
#include "Surgeon.h"
#include "Waiter.h"

#include "Tools.h"
#include "View.h"

class source
{
private:

    fstream file;

    administrator ADM;
    cafeManager CFM;
    chef CHF;
    doctor DOC;
    hospitalEmployees HOS;
    janitor JAN;
    nurse NRS;
    receptionist REC;
    surgeon SGT;
    view VIE;
    waiter WTR;

    bool b0;
    bool b1;
    bool b2;
    bool b3;
    int selection;
    int selection0;
    int selection1;
    char answer[1000];
    char temporaryAnswering;
    char ops[1000];
    char temporaryOperating;
    char sweep[1000];
    char temporarySweep;
    int cafeCustoms[1000];
    int temporaryCustomers;
    int customs[1000];
    int temporaryPatients;
    int food[1000];
    int temporaryFoodsPrepared;
    int identity[1000];
    int temporaryIdentity;
    int index;
    string cafe[1000];
    string temporaryCafeType;
    string categories[1000];
    string temporaryCategories;
    string dept[1000];
    string temporaryDepartment;
    string first[1000];
    string temporaryFirstName;
    string last[1000];
    string temporaryLastName;
    string special[1000];
    string temporarySpecialty;
public:
    void mainMenu();
    void addEmployees();
    void changeEmployees();
    void dropEmployees();
    void viewEmployees();
    void addAdministrator();
    void addCafeManager();
    void addChef();
    void addDoctor();
    void addHospitalEmployee();
    void addJanitor();
    void addNurse();
    void addReceptionist();
    void addSurgeon();
    void addWaiter();
    void getAdministrators();
    void getCafeManager();
    void getChef();
    void getDoctor();
    void getHospitalEmployees();
    void getJanitor();
    void getNurse();
    void getReceptionist();
    void getSurgeon();
    void getWaiter();
    void getList();
    void loadEmployees();
    void saveEmployees();
    int getID();
    void reset();
    void sortEmployees();
};

#endif