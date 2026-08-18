#pragma once
#include <iostream>
#include <iomanip>
#include "../../Core/clsUser.h"
#include "../../Global.h"
#include "../../Utilities/clsDate.h"
using namespace std;

class clsScreen
{   
protected:
    static void _DrawScreenHeader(string Title, string SubTitle = "")
    {  
        cout << setw(37) << left << "" << "ـــــــــــــــــــــــــــــــــــــــــــ\n";
        cout << setw(37) << left << "" << "                " << Title << "\n";
        if (SubTitle != "")
        {
            cout << setw(37) << left << "" << "                " << SubTitle << "\n";
        }
        cout << setw(37) << left << "" << "ـــــــــــــــــــــــــــــــــــــــــــ\n\n";
        cout << setw(37) << left << "" << "User: " << CurrentUser.UserName() << endl;
        cout << setw(37) << left << "" << "Date: " << clsDate::DateToString(clsDate()) << endl;
    }

    static bool CheckAccessRight(clsUser::enPermissions Permissions)
    {
        if(!CurrentUser.CheckAccessPermissions(Permissions))
        {   
            cout << "\t\t\t\t\t______________________________________";
                cout << "\n\n\t\t\t\t\t  Access Denied! Contact your Admin.";   
                cout << "\n\t\t\t\t\t______________________________________\n\n";
            return false;
        }
        else
        {
            return true;
        }
    }
};