#pragma once
#include <iostream>
#include "Core/clsUser.h"
#include "UI/Shared/clsScreen.h"
#include "Utilities/clsInputValidate.h"
#include "UI/Shared/clsMainScreen.h"
#include "Global.h"

class clsLoginScreen : protected clsScreen
{
private:
    static bool _Login()
    {  
        bool LoginFalid = false;
        string Username, Password;
        short FaildLoginCount = 0;
        do
        {
            
            if (LoginFalid)
            {
                FaildLoginCount++;

                cout << "\n" << setw(37) << left << "" << "Invlaid Username/Password!" << endl;;
                cout << setw(37) << left << "" << "You have " << (3-FaildLoginCount)
                     << " Trial(s) to login.\n\n";   
            }

            if (FaildLoginCount == 3)
            {
                cout << setw(37) << left << "" << "Your are Locked after 3 faild trails \n\n";
                return false;
            }

            cout << "\n" << setw(37) << left << "" << "Enter Username: ";
            Username = clsInputValidate::ReadString();
            cout << setw(37) << left << "" << "Enter Password: ";
            Password = clsInputValidate::ReadString();

            CurrentUser = clsUser::Find(Username,Password);
            LoginFalid = CurrentUser.IsEmpty();

        }while(LoginFalid);
        CurrentUser.RegsterLogIn();
        clsMainSreen::ShowMainMenue();
        return true;
    }

public:


    static bool ShowLoginScreen()
    {
        system("clear");
        _DrawScreenHeader("Login Screen");
        return _Login();
    };
};