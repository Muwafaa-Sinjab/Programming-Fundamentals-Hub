# Bank Client Management System – Version 2

A console‑based application for managing bank client records and performing financial transactions. This second version adds deposit, withdrawal, and total balance operations to the client management features of Version 1.

## Overview

This project is an extension of the first‑version client management tool. It keeps all the previous client management functions (view, add, delete, update, find) and introduces a transaction menu. Users can now increase or decrease a client's balance and view a summary of all client balances.

The program runs entirely in the terminal. All data is stored in a single text file. As with the previous version, it is intended for learning purposes and is not suitable for real banking environments.

## Features

### Client Management (from Version 1)
- Show all clients in a formatted table.
- Add a new client with a unique account number.
- Delete a client after confirmation.
- Update client details (PIN, name, phone, balance).
- Find a client by account number.

### Transactions (new in Version 2)
- **Deposit** – add money to a client's account.
- **Withdraw** – take money from a client's account (only if the balance is sufficient).
- **Total Balances** – display a list of all clients together with the sum of all balances.

Data is saved automatically after every change, and records marked for deletion are removed when the file is written.

## Menu Structure

### Main Menu
```
[1] Show Client List
[2] Add New Client
[3] Delete Client
[4] Update Client Info
[5] Find Client
[6] Transactions   (opens the transaction sub‑menu)
[7] Exit
```

### Transaction Sub‑menu
```
[1] Deposit
[2] Withdraw
[3] Total Balance
[4] Main Menu   (returns to the main menu)
```

After each action (except moving between menus or exiting), the program waits for a key press before returning to the previous menu.

## How the Transactions Work

### Deposit
- The user enters an account number. The system searches for the client.
- If the client is found, the current details are shown.
- The deposit amount is requested (numeric input is validated).
- After confirmation, the amount is added to the client's balance and the file is updated.

### Withdraw
- The user enters an account number and the system finds the client.
- The withdrawal amount is requested. The system checks that the amount does not exceed the current balance.
- If the amount is too large, a message is shown and the user must enter a smaller amount.
- Once a valid amount is given and confirmed, the balance is reduced and saved.

### Total Balances
- A simplified table is printed, showing each client's account number, name, and balance.
- At the bottom, the total of all balances is displayed.

## Data File

All client information is stored in a single file named `ClientData.txt`. The format is exactly the same as in Version 1:

```
AccountNumber#//#PinCode#//#Name#//#PhoneNumber#//#Balance
```

**Example:**
```
A150#//#1234#//#John Smith#//#0799983838#//#55620.000000
A152#//#4321#//#Emily Johnson#//#93993993#//#1000.000000
```

The separator `#//#` must not be changed manually, as the program relies on it for parsing.

## Compilation and Execution

A C++ compiler (such as `g++`) and a terminal are required.

**Compile with:**
```bash
g++ -o BankApp main.cpp
```

**Run with:**
```bash
./BankApp
```

If the file `ClientData.txt` does not exist, the program starts with an empty client list; it will be created when the first client is added.

## Input Validation

All numeric inputs (menu choices, balance, deposit and withdrawal amounts) are checked. If a non‑numeric value is entered, an error message is shown and the input is requested again. When a withdrawal exceeds the available balance, the user is informed and must enter a new amount.

## Limitations

- This version adds transactions but does not include user accounts or permission control. Those will appear in Version 3.
- The screen is cleared with `system("clear")` (macOS/Linux). On Windows, this must be changed to `system("cls")`.
- The balance is stored as a floating‑point number; very large amounts may lose precision.
- There is no backup mechanism; all data lives in the single text file.
- The number of clients is limited only by memory and file size.

---

This is the second version of the Bank Management System. The next version will introduce user login and permission management.

Muwafaa Sinjab @Muwafaa-Sinjab