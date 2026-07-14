#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

const string FILE_NAME = "ClientData.txt";
const string USERS_FILE_NAME = "UsersData.txt";

enum enPermissionOptions
{   
    ePermissionToAll = -1,
    ePermissionToShowClientList = 1,
    ePermissionToAddClient = 2,
    ePermissionToDeleteClient = 4,
    ePermissionToUpdateClient = 8,
    ePermissionToFindClient = 16,
    ePermissionToTransactions = 32,
    ePermissionToMangeUsers = 64
};

enum enMainMenuOptions
{
    eShowClient = 1,
    eAddClient,
    eDeleteClient,
    eUpdateClient,
    eFindClient,
    eTransactions,
    eMangeUsers,
    eLogout
};

enum enManageUserMenuOptions
{
    eListUser = 1,
    eAddNewUser,
    eDeleteUser,
    eUpdateUser,
    eFindUser,
    eMainMenueFromManage
};

enum enTransactionMenuOptions
{
    eDeposit = 1,
    eWithdraw,
    eTotalBalance,
    eMainMenueFromTransaction
};

struct sClientInfo
{
    string accountNumber;
    string pinCode;
    string name;
    string phoneNumber;
    double accountBalance;
    bool markForDelete = false;
};

struct sUserInfo
{
    string userName;
    string password;
    short permission;
    bool markForDelete = false;
};

sUserInfo currentUser;

void printScreenHeader(string title);
bool askConfirmation(string message);
bool CheckAccessPermissions(enPermissionOptions permission);
void ShowAccessDeniedMessage();
vector<string> splitString(string text, string delimiter);
sClientInfo convertLineToRecord(string line);
string convertRecordToLine(sClientInfo client, string separator = "#//#");
vector<sClientInfo> loadClientsFromFile(string fileName);
void saveClientsToFile(string fileName, vector<sClientInfo> vClients);

string readClientAccountNumber();
bool isClientExist(string accountNumber);
bool findClientByAccountNumber(string accountNumber, vector<sClientInfo> vClients, sClientInfo &client);
void printClientDetails(sClientInfo &client);
short getUserChoice(string Massage);

void showMainMenu();
void performMainMenuOption(enMainMenuOptions mainMenuOption);
void goBackToMainMenu();

void printClientRecordLine(sClientInfo &client);
void printAllClientsData(vector<sClientInfo> &vClients);
void showAllClientsData();

sClientInfo readClientInfo(string accountNumber);
void addClientDataToFile(string fileName, string dataLine);
void addClient();
void addClients();
void showAddClients();

bool markClientForDeleteByAccountNumber(vector<sClientInfo> &vClients, string accountNumber);
void deleteClientByAccountNumber(string accountNumber, vector<sClientInfo> &vClients);
void showDeleteClient();

void updateClientByAccountNumber(string accountNumber, vector<sClientInfo> &vClients);
void showUpdateClient();

void showFindClient();

void showTransactionMainMenuScreen();
void performTransactionMainMenuOption(enTransactionMenuOptions transactionsMenuOption);

bool updateClientBalanceByAccountNumber(string accountNumber, double amount, vector<sClientInfo> &vClients);
void depositProcess();
void showDeposit();

void printClientRecordLinee(sClientInfo &client);
void printAllClientsDataWithTotalBalances(vector<sClientInfo> &vClients);
void showTotalBalancesScreen();

bool updateClientBalanceAfterWithDrawByAccountNumber(string accountNumber, double amount, vector<sClientInfo> &vClients);
bool IsWithDrawGraeterThanAmount(string accountNumber, double amount, vector<sClientInfo> &vClients);
void withDrawProcess();
void showWithDraw();

//==================================================================
sUserInfo convertUserDataLineToRecord(string line);
string convertUserRecordToLine(sUserInfo user, string separator = "#//#");

vector<sUserInfo> loadUserDataFromFile(string fileName);
void saveUsersToFile(string fileName, vector<sUserInfo> vUsers);

bool findUserByUserName(string userName, vector<sUserInfo> vUsers, sUserInfo &user);
bool FindUserByUserNameAndPassword(string userName, string password, sUserInfo &user);
bool markUserForDeleteByUserName(vector<sUserInfo> &vUsers, string userName);

void printUserDetails(sUserInfo &user);
void printUserRecordLine(sUserInfo &User);
void printAllUsersData(vector<sUserInfo> &vUser);
void showListUserData();

void deleteUserByUserName(string userName, vector<sUserInfo> &vUsers);
void showDeleteUser();

string readUserUserName();
string readUserPassword();

void LognScreen();
void showManageUserMainMenuScreen();
void performManageUserMainMenuOption(enManageUserMenuOptions ManageUserMenuOption);
void goBackToManageUserMainMenu();

void showUpdateUserScreen();
void updateUserByUserName(string userName, vector<sUserInfo> &vUsers);

void showFinduserScreen();
bool findUserByUsername(string userName, vector<sUserInfo> vUsers, sUserInfo &user);
bool isUserExist(string userName);
sUserInfo addUser();
void addUsers();
void showAddUserSrceen();
void addUserDataToFile(string fileName, string dataLine);

void exitScreen();

int main()
{
    LognScreen();
    
    return 0;
}

void showMainMenu()
{
    system("clear");

    cout << "================================================" << endl;
    cout << "\t\tMain Menu Screen" << endl;
    cout << "================================================" << endl;
    cout << "\t[1] Show Client list." << endl;
    cout << "\t[2] Add New Client." << endl;
    cout << "\t[3] Delete Client." << endl;
    cout << "\t[4] Update Client Info." << endl;
    cout << "\t[5] Find Client." << endl;
    cout << "\t[6] Transactions." << endl;
    cout << "\t[7] Mange Users." << endl;
    cout << "\t[8] Logout." << endl;
    cout << "================================================" << endl;

    performMainMenuOption(static_cast<enMainMenuOptions>(getUserChoice("Choose what do you want to do [1 - 8]: ")));
}

short getUserChoice(string Massage)
{
    short num = 0;
    cout << Massage;
    cin >> num;
    return num;
}

void performMainMenuOption(enMainMenuOptions mainMenuOption)
{
    switch (mainMenuOption)
    {
    case eShowClient:
        system("clear");
        showAllClientsData();
        goBackToMainMenu();
        break;

    case eAddClient:
        system("clear");
        showAddClients();
        goBackToMainMenu();
        break;

    case eDeleteClient:
        system("clear");
        showDeleteClient();
        goBackToMainMenu();
        break;

    case eUpdateClient:
        system("clear");
        showUpdateClient();
        goBackToMainMenu();
        break;

    case eFindClient:
        system("clear");
        showFindClient();
        goBackToMainMenu();
        break;

    case eTransactions:
        system("clear");
        showTransactionMainMenuScreen();
        break;

    case eMangeUsers:
        system("clear");
        showManageUserMainMenuScreen();
        break;

    case eLogout:
        system("clear");
        LognScreen();
        return;

    default:
        cout << "Invalid Choice!\n";
        goBackToMainMenu();
        break;
    }
}

void goBackToMainMenu()
{
    cout << "\nPress Enter to go back to Main Menu...";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    showMainMenu();
}

vector<string> splitString(string text, string delimiter)
{
    short delimiterPosition = 0;
    string currentWord;
    vector<string> words;
    while ((delimiterPosition = text.find(delimiter)) != string::npos)
    {
        currentWord = text.substr(0, delimiterPosition);
        if (currentWord != "")
            words.push_back(currentWord);
        text.erase(0, delimiterPosition + delimiter.length());
    }
    if (text != "")
        words.push_back(text);
    return words;
}

sClientInfo convertLineToRecord(string line)
{
    sClientInfo client;
    vector<string> clientTokens = splitString(line, "#//#");
    client.accountNumber = clientTokens[0];
    client.pinCode = clientTokens[1];
    client.name = clientTokens[2];
    client.phoneNumber = clientTokens[3];
    client.accountBalance = stod(clientTokens[4]);
    return client;
}

string convertRecordToLine(sClientInfo client, string separator)
{
    return client.accountNumber + separator +
           client.pinCode + separator +
           client.name + separator +
           client.phoneNumber + separator +
           to_string(client.accountBalance);
}

vector<sClientInfo> loadClientsFromFile(string fileName)
{
    fstream myFile;
    vector<sClientInfo> vFileContent;
    myFile.open(fileName, ios::in);
    if (myFile.is_open())
    {
        string line;
        while (getline(myFile, line))
            vFileContent.push_back(convertLineToRecord(line));
        myFile.close();
    }
    return vFileContent;
}

void saveClientsToFile(string fileName, vector<sClientInfo> vClients)
{
    fstream myFile;
    myFile.open(fileName, ios::out);
    if (myFile.is_open())
    {
        for (sClientInfo &client : vClients)
            if (!client.markForDelete)
                myFile << convertRecordToLine(client) << endl;
        myFile.close();
    }
}

string readClientAccountNumber()
{
    string desiredClient;
    cout << "Please Enter Account Number: ";
    getline(cin >> ws, desiredClient);
    return desiredClient;
}

bool isClientExist(string accountNumber)
{
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    for (sClientInfo &record : vClients)
        if (accountNumber == record.accountNumber)
            return true;
    return false;
}

bool findClientByAccountNumber(string accountNumber, vector<sClientInfo> vClients, sClientInfo &client)
{
    for (sClientInfo &c : vClients)
        if (accountNumber == c.accountNumber)
        {
            client = c;
            return true;
        }
    return false;
}

void printClientDetails(sClientInfo &client)
{
    cout << "\n--- Client Details ---\n";
    cout << "Account Number : " << client.accountNumber << endl;
    cout << "Pin Code       : " << client.pinCode << endl;
    cout << "Client Name    : " << client.name << endl;
    cout << "Phone          : " << client.phoneNumber << endl;
    cout << "Balance        : " << client.accountBalance << endl;
    cout << "----------------------\n";
}

void printClientRecordLine(sClientInfo &client)
{
    cout << "| " << setw(15) << left << client.accountNumber;
    cout << "| " << setw(10) << left << client.pinCode;
    cout << "| " << setw(40) << left << client.name;
    cout << "| " << setw(12) << left << client.phoneNumber;
    cout << "| " << setw(12) << left << client.accountBalance;
}

void printAllClientsData(vector<sClientInfo> &vClients)
{
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    for (sClientInfo &client : vClients)
    {
        printClientRecordLine(client);
        cout << endl;
    }
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
}

void showAllClientsData()
{
    if(!CheckAccessPermissions(enPermissionOptions::ePermissionToShowClientList))
    {
        ShowAccessDeniedMessage();
        goBackToMainMenu();
    }

    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    printAllClientsData(vClients);
}

sClientInfo readClientInfo(string accountNumber)
{
    sClientInfo client;
    client.accountNumber = accountNumber;
    cout << "Enter Your Pin Code: ";
    getline(cin >> ws, client.pinCode);
    cout << "Enter Your Name: ";
    getline(cin, client.name);
    cout << "Enter Your Phone Number: ";
    getline(cin, client.phoneNumber);
    cout << "Enter Your Account Balance: ";
    cin >> client.accountBalance;
    return client;
}

void addClientDataToFile(string fileName, string dataLine)
{
    fstream myFile;
    myFile.open(fileName, ios::out | ios::app);
    if (myFile.is_open())
    {
        myFile << dataLine << endl;
        myFile.close();
    }
}

void addClient()
{
    string accountNumber;
    bool found;
    do
    {
        accountNumber = readClientAccountNumber();
        found = isClientExist(accountNumber);
        if (found)
            cout << "Client with [" << accountNumber << "] already exists. ";
    } while (found);
    sClientInfo client = readClientInfo(accountNumber);
    addClientDataToFile(FILE_NAME, convertRecordToLine(client));
}

void addClients()
{
    char choice;
    do
    {
        addClient();
        cout << "Client added successfully, do you want to add more clients? Y or N: ";
        cin >> choice;
    } while (toupper(choice) == 'Y');
}

void showAddClients()
{
    if(!CheckAccessPermissions(enPermissionOptions::ePermissionToAddClient))
    {
        ShowAccessDeniedMessage();
        goBackToMainMenu();
    }

    printScreenHeader("Add New Client");
    addClients();
}

bool markClientForDeleteByAccountNumber(vector<sClientInfo> &vClients, string accountNumber)
{
    for (sClientInfo &c : vClients)
        if (c.accountNumber == accountNumber)
        {
            c.markForDelete = true;
            return true;
        }
    return false;
}

void deleteClientByAccountNumber(string accountNumber, vector<sClientInfo> &vClients)
{
    sClientInfo clientToDelete;
    if (findClientByAccountNumber(accountNumber, vClients, clientToDelete))
    {
        printClientDetails(clientToDelete);
        if (askConfirmation("Are you sure you want to delete this client?"))
        {
            markClientForDeleteByAccountNumber(vClients, accountNumber);
            saveClientsToFile(FILE_NAME, vClients);
            vClients = loadClientsFromFile(FILE_NAME);
            cout << "\n\nClient Deleted Successfully.";
        }
    }
    else
        cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";
}

void showDeleteClient()
{
    if(!CheckAccessPermissions(enPermissionOptions::ePermissionToDeleteClient))
    {
        ShowAccessDeniedMessage();
        goBackToMainMenu();
    }

    printScreenHeader("Delete Client");
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    string accountNumber = readClientAccountNumber();
    deleteClientByAccountNumber(accountNumber, vClients);
}

void updateClientByAccountNumber(string accountNumber, vector<sClientInfo> &vClients)
{
    for (sClientInfo &client : vClients)
        if (client.accountNumber == accountNumber)
        {
            printClientDetails(client);
            if (!askConfirmation("Are you sure you want to update this client?"))
            {
                cout << "\nUpdate cancelled by user.\n";
                return;
            }
            cout << "\nEnter new data:\n";
            cout << "Enter Pin Code       : ";
            getline(cin >> ws, client.pinCode);
            cout << "Enter Name           : ";
            getline(cin, client.name);
            cout << "Enter Phone Number   : ";
            getline(cin, client.phoneNumber);
            cout << "Enter Account Balance: ";
            cin >> client.accountBalance;
            saveClientsToFile(FILE_NAME, vClients);
            cout << "\nClient Updated Successfully.\n";
            return;
        }
    cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";
}

void showUpdateClient()
{
    if(!CheckAccessPermissions(enPermissionOptions::ePermissionToUpdateClient))
    {
        ShowAccessDeniedMessage();
        goBackToMainMenu();
    }

    printScreenHeader("Update Client");
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    string accountNumber = readClientAccountNumber();
    updateClientByAccountNumber(accountNumber, vClients);
}

void showFindClient()
{
    if(!CheckAccessPermissions(enPermissionOptions::ePermissionToFindClient))
    {
        ShowAccessDeniedMessage();
        goBackToMainMenu();
    }

    printScreenHeader("Find Client");
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    string accountNumber = readClientAccountNumber();
    sClientInfo client;
    if (findClientByAccountNumber(accountNumber, vClients, client))
    {
        printClientDetails(client);
    }
    else
    {
        cout << "Client with Account Number [" << accountNumber << "] is not found.";
    }
        
}

void exitScreen()
{
    printScreenHeader("Program Ends..");
}

void showTransactionMainMenuScreen()
{
    if(!CheckAccessPermissions(enPermissionOptions::ePermissionToTransactions))
    {
        ShowAccessDeniedMessage();
        goBackToMainMenu();
    }

    system("clear");
    cout << "================================================" << endl;
    cout << "\t\tTransaction Menu Screen" << endl;
    cout << "================================================" << endl;
    cout << "\t[1] Deposit." << endl;
    cout << "\t[2] Withdraw." << endl;
    cout << "\t[3] Total Balance." << endl;
    cout << "\t[4] Main Menu." << endl;
    cout << "================================================" << endl;
    performTransactionMainMenuOption(static_cast<enTransactionMenuOptions>(getUserChoice("Choose what do you want to do [1 - 4]: ")));
}

void performTransactionMainMenuOption(enTransactionMenuOptions transactionsMenuOption)
{
    switch (transactionsMenuOption)
    {
    case eDeposit:
        showDeposit();
        showTransactionMainMenuScreen();
        break;
    case eWithdraw:
        showWithDraw();
        showTransactionMainMenuScreen();
        break;
    case eTotalBalance:
        showTotalBalancesScreen();
        showTransactionMainMenuScreen();
        break;
    case eMainMenueFromTransaction:
        showMainMenu();
        break;
    default:
        cout << "Invalid Choice!\n";
        goBackToMainMenu();
        break;
    }
}

bool updateClientBalanceByAccountNumber(string accountNumber, double amount, vector<sClientInfo> &vClients)
{
    for (sClientInfo &C : vClients)
        if (C.accountNumber == accountNumber)
        {
            C.accountBalance += amount;
            saveClientsToFile(FILE_NAME, vClients);
            cout << "\nDone Successfully, New Balance is: " << C.accountBalance;
            return true;
        }
    return false;
}

void depositProcess()
{
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    sClientInfo client;
    string accountNumber;
    bool found;
    double depositAmount;
    do
    {
        accountNumber = readClientAccountNumber();
        found = findClientByAccountNumber(accountNumber, vClients, client);
        if (!found)
            cout << "Client with [" << accountNumber << "] does not exists. ";
    } while (!found);
    printClientDetails(client);
    cout << "\nPlease Enter Deposit Amount: ";
    cin >> depositAmount;
    if (askConfirmation("Are you sure you want to perform this transaction?"))
        updateClientBalanceByAccountNumber(accountNumber, depositAmount, vClients);
}

void showDeposit()
{
    printScreenHeader("Deposit Screen");
    depositProcess();
}

void printClientRecordLinee(sClientInfo &client)
{
    cout << "| " << setw(15) << left << client.accountNumber;
    cout << "| " << setw(40) << left << client.name;
    cout << "| " << setw(12) << left << client.accountBalance;
}

void printAllClientsDataWithTotalBalances(vector<sClientInfo> &vClients)
{
    double totalBalances = 0;
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    for (sClientInfo &client : vClients)
    {
        printClientRecordLinee(client);
        totalBalances += client.accountBalance;
        cout << endl;
    }
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "\t\t\t\t\t   Total Balances = " << left << setw(12) << totalBalances;
}

void showTotalBalancesScreen()
{
    printScreenHeader("Total Balances");
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    printAllClientsDataWithTotalBalances(vClients);
}

bool updateClientBalanceAfterWithDrawByAccountNumber(string accountNumber, double amount, vector<sClientInfo> &vClients)
{
    for (sClientInfo &C : vClients)
        if (C.accountNumber == accountNumber)
        {
            C.accountBalance -= amount;
            saveClientsToFile(FILE_NAME, vClients);
            cout << "\nDone Successfully, New Balance is: " << C.accountBalance;
            return true;
        }
    return false;
}

bool IsWithDrawGraeterThanAmount(string accountNumber, double amount, vector<sClientInfo> &vClients)
{
    for (sClientInfo &C : vClients)
        if (C.accountNumber == accountNumber)
            if (C.accountBalance < amount)
                return false;
    return true;
}

void withDrawProcess()
{
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    sClientInfo client;
    string accountNumber;
    bool found;
    double withdrawAmount;
    do
    {
        accountNumber = readClientAccountNumber();
        found = findClientByAccountNumber(accountNumber, vClients, client);
        if (!found)
            cout << "Client with [" << accountNumber << "] does not exists. ";
    } while (!found);
    printClientDetails(client);
    bool isValid;
    do
    {
        cout << "\nPlease Enter Withdraw Amount: ";
        cin >> withdrawAmount;
        isValid = IsWithDrawGraeterThanAmount(accountNumber, withdrawAmount, vClients);
        if (!isValid)
            cout << "Amount Exceeds the Balance, you can withdraw up to: " << client.accountBalance << endl;
    } while (!isValid);
    if (askConfirmation("Are you sure you want to perform this transaction?"))
        updateClientBalanceAfterWithDrawByAccountNumber(accountNumber, withdrawAmount, vClients);
}

void showWithDraw()
{
    printScreenHeader("WithDraw Screen");
    withDrawProcess();
}

void printScreenHeader(string title)
{
    system("clear");
    cout << "------------------------------------------" << endl;
    cout << "\t" << title << endl;
    cout << "------------------------------------------\n" << endl;
}

bool askConfirmation(string message)
{
    char answer;
    cout << "\n" << message << " (Y/N): ";
    cin >> answer;
    return (toupper(answer) == 'Y');
}

// ================================================================================================

void saveUsersToFile(string fileName, vector<sUserInfo> vUsers)
{
    fstream myFile;
    myFile.open(fileName, ios::out);
    if (myFile.is_open())
    {
        for (sUserInfo &user : vUsers)
            if (!user.markForDelete)
                myFile << convertUserRecordToLine(user) << endl;
        myFile.close();
    }
}

string convertUserRecordToLine(sUserInfo user, string separator)
{
    return user.userName + separator +
           user.password + separator +
           to_string(user.permission);
}

vector<sUserInfo> loadUserDataFromFile(string fileName)
{
    fstream myFile;
    vector<sUserInfo> vFileContent;

    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        string line;
        sUserInfo user;

        while (getline(myFile, line))
        {
            user = convertUserDataLineToRecord(line);
            vFileContent.push_back(user);
        }
        myFile.close();
    }

    return vFileContent;
}

sUserInfo convertUserDataLineToRecord(string line)
{   
    sUserInfo user;
    vector<string> userDataTokens = splitString(line, "#//#");

    if (userDataTokens.size() >= 3)
    {
        user.userName = userDataTokens[0];
        user.password = userDataTokens[1];
        user.permission = (short)stoi(userDataTokens[2]);
    }
    return user;
}

bool FindUserByUserNameAndPassword(string userName, string password, sUserInfo &user)
{
    vector<sUserInfo> vUsers = loadUserDataFromFile(USERS_FILE_NAME);

    for (sUserInfo &record : vUsers)
    {
        if (userName == record.userName && password == record.password)
        {   
            user = record;
            return true;
        }
    }
    return false;
}

bool findUserByUsername(string userName, vector<sUserInfo> vUsers, sUserInfo &user)
{
    for (sUserInfo &c : vUsers)
        if (userName == c.userName)
        {
            user = c;
            return true;
        }
    return false;
}

bool loadUserData(string userName, string password)
{
    if(FindUserByUserNameAndPassword(userName, password, currentUser))
        return true;
    else
        return false;
}
void LognScreen()
{
    bool loginFaild = false;
    string password, userName;
    do
    {
        system("clear");
        printScreenHeader("Login Screen");

        if(loginFaild)
        {
            cout << "Invalid User Name or Password! Try again.\n";
        }
        cout << "Enter Username: ";
        cin >> userName;
        cout << "Enter Password: ";
        cin >> password;

        loginFaild = !loadUserData(userName, password);

    }while (loginFaild);

    showMainMenu();
}

string readUserUserName()
{
    string desiredUser;
    cout << "Enter Username: ";
    getline(cin >> ws, desiredUser);
    return desiredUser;
}

string readUserPassword()
{
    string desiredUser;
    cout << "Please Enter Password: ";
    getline(cin >> ws, desiredUser);
    return desiredUser;
}

void goBackToManageUserMainMenu()
{
    cout << "\nPress Enter to go back to Main Menu...";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    showManageUserMainMenuScreen();
}

void showManageUserMainMenuScreen()
{
    if(!CheckAccessPermissions(enPermissionOptions::ePermissionToMangeUsers))
    {
        ShowAccessDeniedMessage();
        goBackToMainMenu();
    }

    system("clear");
    cout << "================================================" << endl;
    cout << "\t\tManage User Menu Screen" << endl;
    cout << "================================================" << endl;
    cout << "\t[1] List Users." << endl;
    cout << "\t[2] Add New User." << endl;
    cout << "\t[3] Delete User." << endl;
    cout << "\t[4] Update User." << endl;
    cout << "\t[5] Find User." << endl;
    cout << "\t[6] Main Menu." << endl;
    cout << "================================================" << endl;
    performManageUserMainMenuOption(static_cast<enManageUserMenuOptions>(getUserChoice("Choose what do you want to do [1 - 6]: ")));
}

void performManageUserMainMenuOption(enManageUserMenuOptions ManageUserMenuOption)
{
    switch (ManageUserMenuOption)
    {
    case eListUser:
        system("clear");
        showListUserData();
        goBackToManageUserMainMenu();
        break;
    case eAddNewUser:
        system("clear");
        showAddUserSrceen();
        goBackToManageUserMainMenu();
        break;
    case eDeleteUser:
        system("clear");
        showDeleteUser();
        goBackToManageUserMainMenu();
        break;
    case eUpdateUser:
        system("clear");
        showUpdateUserScreen();
        goBackToManageUserMainMenu();
        break;
    case eFindUser:
        system("clear");
        showFinduserScreen();
        goBackToManageUserMainMenu();
        break;
    case eMainMenueFromManage:
        system("clear");
        showMainMenu();
        break;
    default:
        cout << "Invalid Choice!\n";
        goBackToMainMenu();
        break;
    }
}

void printUserRecordLine(sUserInfo &User)
{
    cout << "| " << setw(15) << left << User.userName;
    cout << "| " << setw(40) << left << User.password;
    cout << "| " << setw(12) << left << User.permission;
}

void printAllUsersData(vector<sUserInfo> &vUser)
{
    cout << "\n\t\t\t\t\tUsers List (" << vUser.size() << ") User(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "| " << left << setw(15) << "UserName";
    cout << "| " << left << setw(40) << "Password";
    cout << "| " << left << setw(12) << "Permission";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    for (sUserInfo &user : vUser)
    {
        printUserRecordLine(user);
        cout << endl;
    }
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
}

void showListUserData()
{
    vector<sUserInfo> vUsers = loadUserDataFromFile(USERS_FILE_NAME);
    printAllUsersData(vUsers);
}

void deleteUserByUserName(string userName, vector<sUserInfo> &vUsers)
{
    sUserInfo userToDelete;
    if (findUserByUserName(userName, vUsers, userToDelete))
    {
        printUserDetails(userToDelete);
        if (askConfirmation("Are you sure you want to delete this user?"))
        {
            markUserForDeleteByUserName(vUsers, userName);
            saveUsersToFile(USERS_FILE_NAME, vUsers);
            vUsers = loadUserDataFromFile(USERS_FILE_NAME);
            cout << "\n\nUser Deleted Successfully.";
        }
    }
    else
        cout << "\nUser with UserName (" << userName << ") is Not Found!";
}

void showDeleteUser()
{
    printScreenHeader("Delete User");
    vector<sUserInfo> vUsers = loadUserDataFromFile(USERS_FILE_NAME);
    string userName = readUserUserName();
    deleteUserByUserName(userName, vUsers);
}

bool findUserByUserName(string userName, vector<sUserInfo> vUsers, sUserInfo &user)
{
    for (sUserInfo &c : vUsers)
        if (userName == c.userName)
        {
            user = c;
            return true;
        }
    return false;
}

bool markUserForDeleteByUserName(vector<sUserInfo> &vUsers, string userName)
{
    for (sUserInfo &c : vUsers)
        if (c.userName == userName)
        {
            c.markForDelete = true;
            return true;
        }
    return false;
}

void printUserDetails(sUserInfo &user)
{
    cout << "\n--- User Details ---\n";
    cout << "UserName    : " << user.userName << endl;
    cout << "Password    : " << user.password << endl;
    cout << "Permission  : " << user.permission << endl;
    cout << "----------------------\n";
}

void showFinduserScreen()
{
    printScreenHeader("Find User");
    vector<sUserInfo> vUsers = loadUserDataFromFile(USERS_FILE_NAME);
    string userName = readUserUserName();
    sUserInfo user;
    if (findUserByUsername(userName, vUsers, user))
    {
        printUserDetails(user);
    }
    else
    {
        cout << "User with Username [" << userName << "] is not found.";
    }
}

short askForUserPermissions()
{
    char answer;
    cout <<"\nDo you want to give full access?: ";
    cin >> answer;

    if (toupper(answer) == 'Y')
        return -1; 

    short userPermissions = 0;
        cout << "Do you want to give access to.." << endl;
        cout << "Show Client list Y/N ? ";
        cin >> answer;
            if (toupper(answer) == 'Y')
               userPermissions += ePermissionToShowClientList;
    
        cout << "Add New Client Y/N ? ";
        cin >> answer;
            if (toupper(answer) == 'Y')
                userPermissions += ePermissionToAddClient;

        cout << "Delete Client Y/N ? ";
        cin >> answer;
            if (toupper(answer) == 'Y')
                userPermissions += ePermissionToDeleteClient;

        cout << "Update Client Info Y/N ? ";
        cin >> answer;
            if (toupper(answer) == 'Y')
                userPermissions += ePermissionToUpdateClient;

        cout << "Find Client Y/N ? ";
        cin >> answer;
            if (toupper(answer) == 'Y')
                userPermissions += ePermissionToFindClient;

        cout << "Transactions Y/N ? ";
        cin >> answer;
            if (toupper(answer) == 'Y')
                userPermissions += ePermissionToTransactions;

        cout << "Manage Users Y/N ? ";
        cin >> answer;
            if (toupper(answer) == 'Y')
                userPermissions += ePermissionToMangeUsers;
          return userPermissions;
}

bool isUserExist(string userName)
{
    vector<sUserInfo> vUsers = loadUserDataFromFile(USERS_FILE_NAME);
    for (sUserInfo &record : vUsers)
        if (userName == record.userName)
            return true;
    return false;
}

sUserInfo addUser()
{
    sUserInfo user;
    bool found;
    do
    {
        user.userName = readUserUserName();
        found = isUserExist(user.userName);
        if (found)
            cout << "User with [" << user.userName << "] already exists. ";
    } while (found);

    user.password = readUserPassword();
    user.permission = askForUserPermissions(); 

    addUserDataToFile(USERS_FILE_NAME, convertUserRecordToLine(user));
    return user;
}

void addUsers()
{
    char choice;
    do
    {
        addUser(); 
        cout << "User added successfully, do you want to add more Users? Y or N: ";
        cin >> choice;
    } while (toupper(choice) == 'Y');
}

void showAddUserSrceen()
{
    printScreenHeader("Add New User"); 
    addUsers(); 
}
void addUserDataToFile(string fileName, string dataLine)
{
    fstream myFile;
    myFile.open(fileName, ios::out | ios::app);
    if (myFile.is_open())
    {
        myFile << dataLine << endl;
        myFile.close();
    }
}


bool CheckAccessPermissions(enPermissionOptions permission)
{
    if(currentUser.permission == enPermissionOptions::ePermissionToAll)
        return true;
    if((permission & currentUser.permission) == permission)
        return true;
    else
        return false;
}

void ShowAccessDeniedMessage()
{
    cout << "\n------------------------------------\n";
    cout << "Access Denied, \nYou dont Have Permission To Do this,\nPlease Conact Your Admin.";
    cout << "\n------------------------------------\n";
}

void showUpdateUserScreen()
{
    printScreenHeader("Update User");
    vector<sUserInfo> vUsers = loadUserDataFromFile(USERS_FILE_NAME);
    string userName = readUserUserName();
    updateUserByUserName(userName, vUsers);
}

void updateUserByUserName(string userName, vector<sUserInfo> &vUsers)
{
    for (sUserInfo &user : vUsers)
        if (user.userName == userName)
        {
            printUserDetails(user);
            if (!askConfirmation("Are you sure you want to update this user?"))
            {
                cout << "\nUpdate cancelled by user.\n";
                return;
            }
            cout << "\nEnter new data:\n";
            cout << "Enter Password       : ";
            getline(cin >> ws, user.password);
            
            user.permission = askForUserPermissions();
            saveUsersToFile(USERS_FILE_NAME, vUsers);
            cout << "\nUser Updated Successfully.\n";
            return;
        }
    cout << "\nUser with Account Number (" << userName << ") is Not Found!";
}