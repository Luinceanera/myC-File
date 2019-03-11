#include "Tools.h"

#include "Source.h"

int main()
{
    cout << "BEGIN" << endl << endl;
    source SRC;
    SRC.loadEmployees();
    cout << endl << endl << "END" << endl;
    return 0;
}