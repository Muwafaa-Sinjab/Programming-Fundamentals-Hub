#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

const string FILE_NAME = "ClientData.txt";

enum enMainMenuOptions
{
    eShowClient = 1,
    eAddClient,
    eDeleteClient,
    eUpdateClient,
    eFindClient,
    eTransactions,
    eExit
};

enum enTransactionMenuOptions
{
    eDeposit = 1,
    eWithdraw,
    eTotalBalance,
    eMainMenu
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

vector<string> splitString(string text, string delimiter);
sClientInfo convertLineToRecord(string line);
string convertRecordToLine(sClientInfo client, string separator = "#//#");
vector<sClientInfo> loadClientsFromFile(string fileName);
void saveClientsToFile(string fileName, vector<sClientInfo> vClients);

string readClientAccountNumber();
bool isClientExist(string accountNumber);
bool findClientByAccountNumber(string accountNumber, vector<sClientInfo> vClients, sClientInfo &client);
void printClientDetails(sClientInfo &client);

void showMainMenu();
short getUserChoiceFromMainMenu();
void performMainMenuOption(enMainMenuOptions mainMenuOption);
void goBackToMainMenu();

void printClientRecordLine(sClientInfo &client);
void printAllClientsData(vector<sClientInfo> &vClients);
void showAllClientsData();

void addNewClientHeader();
sClientInfo readClientInfo(string accountNumber);
void addClientDataToFile(string fileName, string dataLine);
void addClient();
void addClients();
void showAddClients();

void deleteClientHeader();
bool confirmDelete();
bool markClientForDeleteByAccountNumber(vector<sClientInfo> &vClients, string accountNumber);
void deleteClientByAccountNumber(string accountNumber, vector<sClientInfo> &vClients);
void showDeleteClient();

void updateClientHeader();
bool confirmUpdate();
void updateClientByAccountNumber(string accountNumber, vector<sClientInfo> &vClients);
void showUpdateClient();

void findClientHeader();
void showFindClient();

void showTransactionMainMenuScreen();
short getUserChoiceFromTransactionMainMenu();
void performTransactionMainMenuOption(enTransactionMenuOptions transactionsMenuOption);

void depositHeaderScreen();
bool confirmDeposit();
bool updateClientBalanceByAccountNumber(string accountNumber, double amount, vector<sClientInfo> &vClients);
void depositProcess();
void showDeposit();

void printClientBalanceRecordLine(sClientInfo &client);
void printAllClientsDataWithTotalBalances(vector<sClientInfo> &vClients);
void showTotalBalancesScreen();

void withdrawHeaderScreen();
bool confirmWithdraw();
bool updateClientBalanceAfterWithdrawByAccountNumber(string accountNumber, double amount, vector<sClientInfo> &vClients);
bool canWithdraw(string accountNumber, double amount, vector<sClientInfo> &vClients);
void withdrawProcess();
void showWithdraw();

void exitHeader();

// Safely reads a double from standard input (loops until valid)
double readDouble(string message);

int main()
{   
    showMainMenu();
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
    cout << "\t[7] Exit." << endl;
    cout << "================================================" << endl;

    performMainMenuOption(static_cast<enMainMenuOptions>(getUserChoiceFromMainMenu()));
}

// Reads a menu choice with validation against non‑numeric input
short getUserChoiceFromMainMenu()
{
    short num = 0;
    while (true)
    {
        cout << "Choose what do you want to do [1 - 7]: ";
        cin >> num;
        if (!cin.fail())
            break;
        cout << "Invalid input. Please enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
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
        goBackToMainMenu();
        break;

    case eExit:
        system("clear");
        exitHeader();
        return;

    default:
        cout << "Invalid Choice!\n";
        goBackToMainMenu();
        break;
    }
}

void goBackToMainMenu()
{
    cout << "\n\nPress Enter to go back to Main Menu...";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    showMainMenu();
}

// Splits a string by a delimiter and returns the tokens (ignoring empty ones)
vector<string> splitString(string text, string delimiter)
{
    short delimiterPosition = 0;
    string currentWord;
    vector<string> words;

    while ((delimiterPosition = text.find(delimiter)) != string::npos)
    {
        currentWord = text.substr(0, delimiterPosition);
        if (currentWord != "")
        {
            words.push_back(currentWord);
        }
        text.erase(0, delimiterPosition + delimiter.length());
    }

    if (text != "")
    {
        words.push_back(text);
    }

    return words;
}

// Converts one line from the data file into a client record
sClientInfo convertLineToRecord(string line)
{   
    sClientInfo client;
    vector<string> clientTokens;
    clientTokens = splitString(line, "#//#");

    client.accountNumber = clientTokens[0];
    client.pinCode = clientTokens[1];
    client.name = clientTokens[2];
    client.phoneNumber = clientTokens[3];
    client.accountBalance = stod(clientTokens[4]);

    return client;
}

// Serializes a client record back to a file line
string convertRecordToLine(sClientInfo client, string separator)
{
    string clientRecord = "";
    
    clientRecord += client.accountNumber + separator;
    clientRecord += client.pinCode + separator;
    clientRecord += client.name + separator;
    clientRecord += client.phoneNumber + separator;
    clientRecord += to_string(client.accountBalance);

    return clientRecord;
}

vector<sClientInfo> loadClientsFromFile(string fileName)
{
    fstream myFile;
    vector<sClientInfo> vFileContent;

    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        string line;
        sClientInfo client;

        while (getline(myFile, line))
        {
            client = convertLineToRecord(line);
            vFileContent.push_back(client);
        }
        myFile.close();
    }

    return vFileContent;
}

// Saves the client list back to the file, skipping records marked for deletion
void saveClientsToFile(string fileName, vector<sClientInfo> vClients)
{
    fstream myFile;
    myFile.open(fileName, ios::out); 

    if (myFile.is_open())
    {
        for (sClientInfo &client : vClients)
        {
            if (!client.markForDelete)
            {
                string line = convertRecordToLine(client);
                myFile << line << endl;
            }
        }
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
    {
        if (accountNumber == record.accountNumber)
        {   
            return true;
        }
    }
    return false;
}

bool findClientByAccountNumber(string accountNumber, vector<sClientInfo> vClients, sClientInfo &client)
{
    for (sClientInfo &c : vClients)
    {
        if (accountNumber == c.accountNumber)
        {   
            client = c;
            return true;
        }
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
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    printAllClientsData(vClients);
}

void addNewClientHeader()
{
    cout << "--------------------------" << endl;
    cout << "\tAdd New Client" << endl;
    cout << "--------------------------\n" << endl;
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

    client.accountBalance = readDouble("Enter Your Account Balance: ");

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
    sClientInfo client;
    string accountNumber;
    bool found;
    do
    {
        accountNumber = readClientAccountNumber();
        found = isClientExist(accountNumber);
        if (found)
        {
            cout << "Client with [" << accountNumber << "] already exists. ";
        }
    } while (found);
    
    client = readClientInfo(accountNumber);
    addClientDataToFile(FILE_NAME, convertRecordToLine(client));
}

void addClients()
{
    char choice;
    addNewClientHeader();
    do
    {   
        addClient();
        cout << "Client added successfully, do you want to add more clients? Y or N: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}

void showAddClients()
{   
    addClients();
}

void deleteClientHeader()
{
    cout << "--------------------------" << endl;
    cout << "\tDelete Client" << endl;
    cout << "--------------------------\n" << endl;
}

bool confirmDelete()
{   
    char answer;
    cout << "\nAre you sure you want to delete this client? Y/N: ";
    cin >> answer;
    return (answer == 'y' || answer == 'Y');
}

bool markClientForDeleteByAccountNumber(vector<sClientInfo> &vClients, string accountNumber)
{
    for (sClientInfo &c : vClients)
    {
        if (c.accountNumber == accountNumber)
        {
            c.markForDelete = true;
            return true;
        }
    }
    return false;
}

void deleteClientByAccountNumber(string accountNumber, vector<sClientInfo> &vClients)
{
    sClientInfo clientToDelete;

    if (findClientByAccountNumber(accountNumber, vClients, clientToDelete))
    {
        printClientDetails(clientToDelete);

        if (confirmDelete())
        {
            markClientForDeleteByAccountNumber(vClients, accountNumber);
            saveClientsToFile(FILE_NAME, vClients);

            vClients = loadClientsFromFile(FILE_NAME);

            cout << "\n\nClient Deleted Successfully.";
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";
    }
}

void showDeleteClient()
{
    deleteClientHeader();
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    string accountNumber = readClientAccountNumber();
    deleteClientByAccountNumber(accountNumber, vClients);
}

void updateClientHeader()
{
    cout << "--------------------------" << endl;
    cout << "\tUpdate Client" << endl;
    cout << "--------------------------\n" << endl;
}

bool confirmUpdate()
{   
    char answer;
    cout << "\nAre you sure you want to update this client? Y/N: ";
    cin >> answer;
    return (answer == 'y' || answer == 'Y');
}

void updateClientByAccountNumber(string accountNumber, vector<sClientInfo> &vClients)
{
    for (sClientInfo &client : vClients)
    {
        if (client.accountNumber == accountNumber)
        {
            printClientDetails(client);

            if (!confirmUpdate())
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

            client.accountBalance = readDouble("Enter Account Balance: ");

            saveClientsToFile(FILE_NAME, vClients);

            cout << "\nClient Updated Successfully.\n";
            return;
        }
    }
    cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";
}

void showUpdateClient()
{
    updateClientHeader();
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    string accountNumber = readClientAccountNumber();
    updateClientByAccountNumber(accountNumber, vClients);
}

void findClientHeader()
{
    cout << "--------------------------" << endl;
    cout << "\tFind Client" << endl;
    cout << "--------------------------\n" << endl;
}

void showFindClient()
{
    findClientHeader();
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    string accountNumber = readClientAccountNumber();

    sClientInfo client;

    if (findClientByAccountNumber(accountNumber, vClients, client))
    {
        printClientDetails(client);
    }
    else
    {
        cout << "Client with Account Number [" << accountNumber << "] is not found." << endl;
    }
}

void exitHeader()
{
    cout << "--------------------------" << endl;
    cout << "\tProgram Ends.." << endl;
    cout << "--------------------------\n" << endl;
}

void showTransactionMainMenuScreen()
{
    system("clear");
    cout << "================================================" << endl;
    cout << "\t\tTransaction Menu Screen" << endl;
    cout << "================================================" << endl;
    cout << "\t[1] Deposit." << endl;
    cout << "\t[2] Withdraw." << endl;
    cout << "\t[3] Total Balance." << endl;
    cout << "\t[4] Main Menu." << endl;
    cout << "================================================" << endl;
    
    performTransactionMainMenuOption(static_cast<enTransactionMenuOptions>(getUserChoiceFromTransactionMainMenu()));
}

// Reads a transaction menu choice with validation
short getUserChoiceFromTransactionMainMenu()
{
    short num = 0;
    while (true)
    {
        cout << "Choose what do you want to do [1 - 4]: ";
        cin >> num;
        if (!cin.fail())
            break;
        cout << "Invalid input. Please enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

void performTransactionMainMenuOption(enTransactionMenuOptions transactionsMenuOption)
{
    switch (transactionsMenuOption)
    {
    case eDeposit:
        system("clear");
        showDeposit();
        system("clear");
        showTransactionMainMenuScreen();
        break;

    case eWithdraw:
        system("clear");
        showWithdraw();
        goBackToMainMenu();
        break;

    case eTotalBalance:
        system("clear");
        showTotalBalancesScreen();
        showTransactionMainMenuScreen();
        break;

    case eMainMenu:
        system("clear");
        showMainMenu();
        break;

    default:
        cout << "Invalid Choice!\n";
        goBackToMainMenu();
        break;
    }
}

void depositHeaderScreen()
{
    cout << "--------------------------" << endl;
    cout << "\tDeposit Screen" << endl;
    cout << "--------------------------\n" << endl;
}

bool confirmDeposit()
{   
    char answer;
    cout << "Are you sure you want to perform this transaction? Y/N: ";
    cin >> answer;
    return (answer == 'y' || answer == 'Y');
}

// Adds the deposit amount to the client's balance and saves
bool updateClientBalanceByAccountNumber(string accountNumber, double amount, vector<sClientInfo> &vClients)
{
    for(sClientInfo &c : vClients)
    {
        if(c.accountNumber == accountNumber)
        {
            c.accountBalance += amount;
            saveClientsToFile(FILE_NAME, vClients);
            cout << "\nDone Successfully, New Balance is: " << c.accountBalance;
            return true;
        }
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
        {
            cout << "Client with [" << accountNumber << "] does not exists. ";
        }
    } while (!found);

    printClientDetails(client);
    depositAmount = readDouble("\nPlease Enter Deposit Amount: ");

    if(confirmDeposit())
    {
        updateClientBalanceByAccountNumber(accountNumber, depositAmount, vClients);
    }
}

void showDeposit()
{
    depositHeaderScreen();
    depositProcess();
}

// Prints a simplified line for balance listing (no pin, no phone)
void printClientBalanceRecordLine(sClientInfo &client)
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
        printClientBalanceRecordLine(client);
        totalBalances += client.accountBalance;
        cout << endl;
    }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "\t\t\t\t\t   Total Balances = " << left << setw(12) << totalBalances; 
}

void showTotalBalancesScreen()
{
    vector<sClientInfo> vClients = loadClientsFromFile(FILE_NAME);
    printAllClientsDataWithTotalBalances(vClients);
}

void withdrawHeaderScreen()
{
    cout << "--------------------------" << endl;
    cout << "\tWithdraw Screen" << endl;
    cout << "--------------------------\n" << endl;
}

bool confirmWithdraw()
{   
    char answer;
    cout << "Are you sure you want to perform this transaction? Y/N: ";
    cin >> answer;
    return (answer == 'y' || answer == 'Y');
}

// Subtracts the withdrawal amount from the client's balance and saves
bool updateClientBalanceAfterWithdrawByAccountNumber(string accountNumber, double amount, vector<sClientInfo> &vClients)
{
    for(sClientInfo &c : vClients)
    {
        if(c.accountNumber == accountNumber)
        {
            c.accountBalance -= amount;
            saveClientsToFile(FILE_NAME, vClients);
            cout << "\nDone Successfully, New Balance is: " << c.accountBalance;
            return true;
        }
    }
    return false;
}

// Returns true if the withdrawal amount does not exceed the available balance
bool canWithdraw(string accountNumber, double amount, vector<sClientInfo> &vClients)
{
    for(sClientInfo &c : vClients)
    {
        if(c.accountNumber == accountNumber)
        {
            if(c.accountBalance < amount)
            {
                return false;
            }
        }
    }
    return true;
}

void withdrawProcess()
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
        {
            cout << "Client with [" << accountNumber << "] does not exists. ";
        }
    } while (!found);

    printClientDetails(client);
    
    bool isValid;
    do
    {
        withdrawAmount = readDouble("\nPlease Enter Withdraw Amount: ");
        isValid = canWithdraw(accountNumber, withdrawAmount, vClients);
        if(!isValid)
        {
            cout << "Amount Exceeds the Balance, you can withdraw up to: " << client.accountBalance << endl;
        }
    } while(!isValid);

    if(confirmWithdraw())
    {
        updateClientBalanceAfterWithdrawByAccountNumber(accountNumber, withdrawAmount, vClients);
    }
}

void showWithdraw()
{
    withdrawHeaderScreen();
    withdrawProcess();
}

// Reads a double value with input validation (repeats until valid)
double readDouble(string message)
{
    double value = 0.0;
    while (true)
    {
        cout << message;
        cin >> value;
        if (!cin.fail())
            break;
        cout << "Invalid input. Please enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}