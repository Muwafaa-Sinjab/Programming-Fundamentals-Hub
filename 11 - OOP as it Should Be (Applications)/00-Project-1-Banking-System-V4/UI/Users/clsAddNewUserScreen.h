#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsUser.h"
#include "../../Utilities/clsInputValidate.h"
using namespace std;

class clsAddNewUserScreen : protected clsScreen
{
private:

    static void _ReadUserInfo(clsUser& User)
    {
        cout << "\n" << setw(37) << left << "" << "Enter FirstName: ";
        User.SetFirstName(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter LastName: ";
        User.SetLastName(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter Email: ";
        User.SetEmail(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter Phone: ";
        User.SetPhoneNumber(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter Password: ";
        User.SetPassword(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter Permission: ";
        User.SetPermissions(_ReadPermissionsToSet());
    }

    static void _PrintUser(clsUser User)
    {
        cout << setw(37) << left << "" << "\nUser Card:" << endl;
        cout << setw(37) << left << "" << "___________________" << endl;
        cout << setw(37) << left << "" << "FirstName   : " << User.FirstName() << endl;
        cout << setw(37) << left << "" << "LastName    : " << User.LastName() << endl;
        cout << setw(37) << left << "" << "Full Name   : " << User.FullName() << endl;
        cout << setw(37) << left << "" << "Email       : " << User.Email() << endl;
        cout << setw(37) << left << "" << "Phone       : " << User.PhoneNumber() << endl;
        cout << setw(37) << left << "" << "User Name   : " << User.UserName() << endl;
        cout << setw(37) << left << "" << "Password    : " << User.Password() << endl;
        cout << setw(37) << left << "" << "Permissions : " << User.Permissions() << endl;
        cout << setw(37) << left << "" << "___________________" << endl;
    }

    static int _ReadPermissionsToSet()
    {

        int Permissions = 0;
        char Answer = 'n';

        cout << "\n" << setw(37) << left << "" << "Do you want to give full access? y/n? ";
        Answer = clsInputValidate::ReadChar();
        if (Answer == 'y' || Answer == 'Y')
        {
            return -1;
        }

        cout << setw(37) << left << "" << "Do you want to give access to : \n ";
        cout << setw(37) << left << "" << "Show Client List? y/n? ";
        Answer = clsInputValidate::ReadChar();

        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pListClients;
        }

        cout << setw(37) << left << "" << "Add New Client? y/n? ";
        Answer = clsInputValidate::ReadChar();
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pAddNewClient;
        }

        cout << setw(37) << left << "" << "Delete Client? y/n? ";
        Answer = clsInputValidate::ReadChar();
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pDeleteClient;
        }

        cout << setw(37) << left << "" << "Update Client? y/n? ";
        Answer = clsInputValidate::ReadChar();
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pUpdateClients;
        }

        cout << setw(37) << left << "" << "Find Client? y/n? ";
        Answer = clsInputValidate::ReadChar();
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pFindClient;
        }

        cout << setw(37) << left << "" << "Transactions? y/n? ";
        Answer = clsInputValidate::ReadChar();
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pTranactions;
        }

        cout << setw(37) << left << "" << "Manage Users? y/n? ";
        Answer = clsInputValidate::ReadChar();
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pManageUsers;
        }

        cout << setw(37) << left << "" << "Login Register? y/n? ";
        Answer = clsInputValidate::ReadChar();
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pListLogInRegister;
        }

        cout << setw(37) << left << "" << "Currency Exchange? y/n? ";
        Answer = clsInputValidate::ReadChar();
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pCurrencyExchange;
        }

        return Permissions;
    }

public:

    static void ShowAddNewUserScreen()
    {

        _DrawScreenHeader("Add New User Screen");
        cout << setw(37) << left << "" << "----------------------------------------" << endl;
        cout << endl;

        string UserName = "";

        cout << setw(37) << left << "" << "Please Enter UserName: ";
        UserName = clsInputValidate::ReadString();
        while (clsUser::IsUserExist(UserName))
        {
            cout << setw(37) << left << "" << "UserName Is Already Used, Choose another one: ";
            UserName = clsInputValidate::ReadString();
        }

        clsUser NewUser = clsUser::GetAddNewUserObject(UserName);

        _ReadUserInfo(NewUser);

        clsUser::enSaveResults SaveResult;

        SaveResult = NewUser.Save();

        switch (SaveResult)
        {
            case  clsUser::enSaveResults::svSucceeded:
            {
                cout << setw(37) << left << "" << "User Addeded Successfully :-)\n";
                _PrintUser(NewUser);
                break;
            }
            case clsUser::enSaveResults::svFaildEmptyObject:
            {
                cout << setw(37) << left << "" << "Error User was not saved because it's Empty";
                break;
            }
            case clsUser::enSaveResults::svFaildUserExists:
            {
                cout << setw(37) << left << "" << "Error User was not saved because UserName is used!\n";
                break;
            }
        }
    }
};