# Bank Client Management System – Version 1

A console-based application for managing bank client records. This first version handles only client data – no transactions and no user accounts are included yet.

## Overview

This project is a simple C++ program designed for terminal use. It provides a set of tools to maintain a list of bank clients. All operations are performed through a text-based menu, and client data is stored persistently in a plain text file.

The system allows a user to view, add, delete, update, and search for client records. It is intended as a learning example and is not suitable for real banking environments.

## Features

- **Client Listing** – Displays all stored clients in a formatted table with account number, PIN code, name, phone number, and balance.
- **Add Client** – Collects client details (account number, PIN, name, phone, balance) and saves them. It verifies that the account number is not already in use before adding.
- **Delete Client** – Accepts an account number, shows the matching record, and asks for confirmation before removing the client from storage.
- **Update Client** – Allows modification of PIN, name, phone, and balance for an existing client. Changes are saved after confirmation.
- **Find Client** – Searches for a client by account number and displays the full details if found.
- **Persistent Storage** – All client data is kept in a single file (`ClientData.txt`). The file is read at the start of the program and updated after every change. Records marked for deletion are omitted when saving, effectively removing them.

## Menu Structure

The main menu presents six numbered options:

1. **Show Client List** – prints a table of all clients.
2. **Add New Client** – starts the process of entering a new client record.
3. **Delete Client** – removes a client after verification and confirmation.
4. **Update Client Info** – changes the details of an existing client.
5. **Find Client** – looks up a client by account number.
6. **Exit** – terminates the program.

After each action (except exit), the program waits for a key press before returning to the main menu.

## Data File

Client information is stored in a text file named `ClientData.txt`, which must be located in the same directory as the executable. The file uses a custom separator `#//#` between fields.

Each line follows this pattern:

```
AccountNumber#//#PinCode#//#Name#//#PhoneNumber#//#Balance
```

**Example:**
```
A150#//#1234#//#John Smith#//#0799983838#//#55620.000000
A152#//#4321#//#Emily Johnson#//#93993993#//#1000.000000
```

**Important:** The separator `#//#` should not be altered manually, as the program relies on it for parsing.

## Compilation and Execution

The source code is written in standard C++ and can be compiled with any modern C++ compiler (e.g., `g++`).

**Compilation command** (in the terminal, from the project folder):
```bash
g++ -o BankApp main.cpp
```

**To run the program:**
```bash
./BankApp
```

If the file `ClientData.txt` does not exist, the program will start with an empty client list. The file will be created automatically when the first client is added.

## Input Validation

The program includes basic validation for numeric inputs. If a non-numeric value is entered where a number is expected (for example, in the menu choice or balance field), an error message is shown and the user is prompted again.

When an account number is entered for deletion, update, or search that does not exist in the system, a message informs that the client was not found.

## Limitations

- This version does not include transaction features (deposits, withdrawals) or a login system. Those are planned for later versions.
- The screen is cleared using the `system("clear")` command, which is compatible with macOS and Linux. On Windows, this command would need to be changed to `system("cls")`.
- The balance is stored as a floating-point number; extremely large values may experience precision loss.
- There is no backup mechanism; all data resides in the single text file.
- The number of clients is limited only by available memory and file size.

---

This is the first version of the Bank Management System. Future versions will introduce transaction processing and user accounts with permission control.

Muwafaa Sinjab @Muwafaa-Sinjab