# Bank Client Management System – Version 3

A console‑based application for managing bank clients, performing transactions, and controlling user access through a permission system. This version combines client management, financial transactions, and a user management module with login and fine‑grained permissions.

## Overview

This project is the final iteration of the bank management system. It retains all features of the previous versions—client records and transaction operations—and adds a secure login screen plus a full user management module. Each user has a set of permissions that determine which parts of the system they can access.

The program runs entirely in the terminal. All data is stored in two plain text files: one for clients and one for users. It is designed as a learning tool and is not intended for production banking use.

## Features

### Client Management
- List all clients in a formatted table.
- Add a new client with a unique account number.
- Delete a client after confirmation.
- Update client information (PIN, name, phone, balance).
- Find a client by account number.

### Transactions
- Deposit money into a client account.
- Withdraw money (balance check prevents overdrawing).
- Display a summary of all client balances and the total.

### User Management and Security
- Login screen – a valid username and password are required to use the system.
- List all registered users.
- Add a new user with a password and specific permissions.
- Delete an existing user.
- Update a user's password or permission set.
- Find a user by username.
- Permission system – each user has a numeric permission value that controls which operations they can perform.

Access to every function (client operations, transactions, user management) is restricted based on the logged‑in user's permissions. A user with full access (permission value -1) can perform all actions.

## Menu Structure

### Main Menu
```
[1] Show Client List
[2] Add New Client
[3] Delete Client
[4] Update Client Info
[5] Find Client
[6] Transactions   (opens transaction sub‑menu)
[7] Manage Users   (opens user management sub‑menu)
[8] Logout         (returns to login screen)
```

### Transaction Sub‑menu
```
[1] Deposit
[2] Withdraw
[3] Total Balance
[4] Main Menu
```

### Manage Users Sub‑menu
```
[1] List Users
[2] Add New User
[3] Delete User
[4] Update User
[5] Find User
[6] Main Menu
```

## Permission System

Every user has a permission number stored in the users file. The number is interpreted as a combination of flags:

| Value | Permission |
|-------|------------|
| -1    | Full access (all operations allowed) |
| 1     | Show client list |
| 2     | Add new client |
| 4     | Delete client |
| 8     | Update client |
| 16    | Find client |
| 32    | Transactions (deposit, withdraw, total balance) |
| 64    | Manage users |

A user's permission number is the sum of the flags they are allowed to use. For example, `3` (=1+2) gives access to showing the client list and adding clients.

When a new user is created, the system interactively asks which permissions to grant (or gives full access). The resulting number is calculated automatically using bitwise OR.

If a user tries to enter a restricted area, an "Access Denied" message is shown and they are returned to the previous menu.

## Data Files

Two files are used, both stored in the same folder as the executable.

### `ClientData.txt`
**Format:**
```
AccountNumber#//#PinCode#//#Name#//#PhoneNumber#//#Balance
```

**Example:**
```
A150#//#1234#//#John Smith#//#0799983838#//#55620.000000
A152#//#4321#//#Emily Johnson#//#93993993#//#1000.000000
```

### `UsersData.txt`
**Format:**
```
Username#//#Password#//#Permission
```

**Example:**
```
admin#//#admin123#//#-1
user1#//#pass1#//#3
```

The separator `#//#` must not be altered manually.

## How to Compile and Run

**Requirements:** a C++ compiler (e.g., `g++`) and a terminal.

**Compilation:**
```bash
g++ -o BankApp main.cpp
```

**Execution:**
```bash
./BankApp
```

Both `ClientData.txt` and `UsersData.txt` must be present in the working directory. If they do not exist, the program will start with empty lists; an initial admin user can be created manually by adding a line to `UsersData.txt`.

## Default Admin User

The recommended first user is:

| Username | Password | Permission |
|----------|----------|------------|
| admin    | admin123 | -1         |

This user has full access and can log in immediately to add other users or clients.

## Input Validation

All numeric inputs (menu choices, balances, deposit/withdrawal amounts) are validated. Non‑numeric entries are rejected with a message, and the program asks again. Withdrawal requests that exceed the balance are also refused until a valid amount is entered.

## Limitations

- The program uses `system("clear")` to clear the screen. This works on macOS and Linux. On Windows it must be changed to `system("cls")`.
- Passwords are stored in plain text; the system is not cryptographically secure.
- The balance is stored as a `double`, so very large numbers may lose precision.
- There is no backup mechanism; all data resides in the two text files.
- The number of clients or users is limited only by memory and file size.

---

This is the complete version of the Bank Management System, containing all planned functionality. No further features are expected.

Muwafaa Sinjab @Muwafaa-Sinjab