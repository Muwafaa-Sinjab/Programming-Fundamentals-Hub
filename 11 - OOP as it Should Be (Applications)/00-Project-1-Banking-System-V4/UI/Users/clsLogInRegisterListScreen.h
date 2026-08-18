#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsUser.h"
#include "../../Utilities/clsDate.h"

class clsLogInRegisterListScreen :protected clsScreen
{
private:
    static void _PrintUserRecordLine(clsUser::stLoginRegisterRecord UserLogInRegisterData)
    {
        cout << setw(8) << left << "" << "| " << setw(35) << left << UserLogInRegisterData.DateTime;
        cout << "| " << setw(20) << left << UserLogInRegisterData.UserName;
        cout << "| " << setw(20) << left << UserLogInRegisterData.Password;
        cout << "| " << setw(10) << left << UserLogInRegisterData.Permissions;
    }

public:

    static void ShowLogInRegisterList()
    {   
        
        if(!CheckAccessRight(clsUser::enPermissions::pListLogInRegister))
        {
            return;
        }

        vector <clsUser::stLoginRegisterRecord> vLogInRegisterRecord = clsUser::GetLogInRegisterUsersList();

        string Title = "Login Register Screen";
        string SubTitle = "  (" + to_string(vLogInRegisterRecord.size()) + ") User(s).";

        _DrawScreenHeader(Title, SubTitle);

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "______________________________________________\n" << endl;

        cout << setw(8) << left << "" << "| " << left << setw(35) << "Date Time";
        cout << "| " << left << setw(20) << "Username";
        cout << "| " << left << setw(20) << "Password";
        cout << "| " << left << setw(10) << "Permissions";
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "______________________________________________\n" << endl;

        if (vLogInRegisterRecord.size() == 0)
            cout << "\t\t\t\tNo Users Available In the System!";
        else

            for (clsUser::stLoginRegisterRecord User : vLogInRegisterRecord)
            {

                _PrintUserRecordLine(User);
                cout << endl;
            }

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "______________________________________________\n" << endl;
    }
};
