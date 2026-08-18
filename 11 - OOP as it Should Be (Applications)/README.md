# 11 - OOP as it Should Be (Applications)

## About This Course

**Course 11 - OOP as it Should Be (Applications)** is a practical C++ course focused on applying Object-Oriented Programming concepts through real projects.

The course moves beyond learning OOP as separate theoretical concepts. It focuses on using these concepts together to build complete systems with organized code and a structured architecture.

The learning path starts with building reusable libraries, then moves into larger management systems. The main project is a complete **Bank System**, followed by a **Currency Exchange System**, while also covering advanced OOP topics and project organization.

The course focuses on building systems using a structured approach and separating different parts of the project, including data, business logic, and user interface screens.

---

## Course Structure

The course can be divided into four main areas:

1. **Utility & Validation Libraries**
2. **Bank System Project**
3. **Currency Exchange Project**
4. **Advanced OOP & Project Organization**

---

# 1. Utility & Validation Libraries

Before building the larger systems, the course focuses on creating reusable libraries that can be used in different parts of the projects.

## `clsUtil` - Utility Library

The `clsUtil` library contains general-purpose functions used for different tasks.

### Random Data Generation

The library includes functions for generating different types of random data, including:

* Random numbers.
* Random characters.
* Random words.
* Random keys.

The key generation functionality is used to generate keys through the Key Generator functionality.

### Encryption & Decryption

The library also includes functionality for:

* Encrypting text.
* Decrypting text.

These functions are later used as part of the system features.

### Swap & Shuffle

The library includes general functions for:

* Swapping values.
* Randomly changing the order of array elements using Shuffle.

The purpose is to provide reusable functions that can be used in different parts of the projects.

---

## `clsInputValidate` - Input & Validation Library

The `clsInputValidate` library focuses on checking and validating user input.

It provides tools to help prevent invalid input from causing problems during program execution.

### Number Validation

The library includes validation for numbers and checking whether they are inside specific ranges.

This includes:

* Integer numbers.
* Decimal numbers.
* Checking whether a number is between two specified values using `IsNumberBetween`.

### Date Validation

The library also handles date validation.

It works with the `clsDate` library to:

* Check whether a date is valid.
* Check dates against other dates.
* Check whether dates are within specified ranges.

These validation functions provide reusable tools for the larger systems built later in the course.

---

# 2. Bank System Project

The **Bank System** is the main project of the course.

The project is built through multiple stages and focuses on separating the different parts of the system.

The system includes data and business logic, user interface screens, user management, permissions, financial transactions, and additional security features.

---

## Data & Business Layer

The Data & Business Layer contains the objects and operations used to manage the bank's data.

### `clsBankClient`

The project includes a client object represented by `clsBankClient`.

This object is used as part of the system's client management functionality.

### `clsPerson`

The project also includes a person object represented by `clsPerson`.

### Working with `Clients.txt`

The Bank System uses a text file named `Clients.txt` for storing client data.

The system includes operations for working with this file.

These operations include:

* `Find`
* `Update`
* `AddNewClient`
* `DeleteClient`

The system also includes functionality for reading data from the file and converting the data between text lines and objects.

This allows the system to work with client information as objects while also storing the information in the text file.

---

# 3. UI Layer & Screens

The Bank System includes a separate user interface layer with different screens for the system's operations.

Instead of placing all operations in one screen, the project includes independent screens for different tasks.

These include:

* Main Screen.
* Clients List Screen.
* Find Client Screen.
* Update Client Screen.
* Add New Client Screen.

This structure separates the user interaction from the other parts of the system.

---

## Transactions Menu

The Bank System also includes a dedicated **Transactions Menu** for financial operations.

The Transactions Menu includes:

### Deposit

A screen and operation for depositing money.

### Withdraw

A screen and operation for withdrawing money.

### Total Balances

A screen and operation for displaying the total balances.

These operations form the financial transaction part of the Bank System.

---

# 4. Users & Permissions

The Bank System also introduces user management and system security.

## `clsUser`

The project includes a user object represented by `clsUser`.

This object is used as part of the user management system.

## Manage Users

The system includes screens for managing users.

These screens provide the user management functionality required by the system.

## Login & Logout

The system includes a login and logout system.

Users can log into the system and log out when they finish using it.

## User Permissions

The system includes a permission system that controls which screens each user is allowed to open.

The permissions are implemented using **Bitwise Operations**.

This provides a way to define the screens and operations that each user can access.

---

# 5. Bank System Extensions

After building the main Bank System functionality, the project is extended with additional features.

These extensions add more functionality to the system, especially in the areas of login tracking, security, transfers, and data protection.

---

## Login Register Log

The system is extended with a **Login Register Log**.

This log records user login operations.

The system also provides the ability to print the login register.

---

## System Protection

The system includes additional protection for incorrect login attempts.

The system automatically locks after **3 incorrect login attempts**.

---

## Transfer System

The Bank System is extended to support transfers between accounts.

This includes:

* Transfer Screen.
* Transfer Log.

The Transfer Log keeps a record of the transfer operations.

---

## Password Encryption

The system also includes password encryption.

Passwords are encrypted inside the storage files to protect their stored data.

---

# 6. Currency Exchange Project

The course includes another complete project called the **Currency Exchange Project**.

This project is used to further apply OOP concepts while keeping the different parts of the system separated.

---

## `clsCurrency`

The Currency Exchange Project includes a currency object represented by `clsCurrency`.

The system can search for a currency using:

* Currency Code.
* Country name.

This provides two ways to identify and find a currency.

---

## Currency Screens & Operations

The project includes several screens and operations for managing and working with currencies.

### Currency List & Search

The system includes a screen for displaying the list of currencies.

It also provides functionality for searching for currencies.

### Update Rate

The system includes an **Update Rate** screen for modifying currency exchange rates.

### Currency Calculator

The project includes a **Currency Calculator** for converting between different currencies.

The calculator uses **USD as the reference currency** for the conversion process.

---

# 7. Advanced OOP Topics

After working with the larger projects, the course also covers advanced OOP concepts.

These concepts are applied through practical examples.

---

## Abstract Classes & Interfaces

The course includes practical examples of:

* Abstract Classes.
* Interfaces.

They are used to define programming contracts.

---

## Template Functions & Classes

The course also covers Templates.

This includes:

* Template Functions.
* Template Classes.

These are used to create functions and classes that can work with different data types.

---

# 8. Project Organization

The course also focuses on organizing the code into separate files.

Classes and screens are separated into independent `.h` header files.

This organization makes the project structure clearer and helps with reading and maintaining the code.

The goal is to keep the different parts of the system organized instead of placing everything in one file.

---

# What This Course Covers

By completing this course, the student works through a progression that starts with reusable libraries and moves into complete systems.

The course covers:

* Utility Library development.
* Input and Validation Library development.
* Random data generation.
* Encryption and decryption.
* Value swapping and array shuffling.
* Input validation.
* Number and date validation.
* Client management.
* File-based data management.
* Bank system screens.
* Financial transactions.
* User management.
* Login and logout.
* User permissions.
* Login logging.
* System protection.
* Account transfers.
* Transfer logging.
* Password encryption.
* Currency management.
* Currency searching.
* Exchange rate updates.
* Currency conversion.
* Abstract Classes.
* Interfaces.
* Template Functions.
* Template Classes.
* Organized project structure.

---

# Projects

The course includes two main system projects:

### Bank System

The main project of the course, covering client management, users, permissions, transactions, transfers, logs, and password encryption.

### Currency Exchange System

An additional project covering currency management, searching, exchange rate updates, and currency conversion using USD as the reference currency.

---

# Key Takeaways

This course focuses on moving from individual OOP concepts to applying them together in complete C++ systems.

The learning progression is:

**Reusable Libraries → Bank System → System Extensions → Currency Exchange System → Advanced OOP → Organized Project Structure**

The course provides practical work with:

* Reusable libraries.
* File-based data.
* Objects and classes.
* Business operations.
* User interface screens.
* User management.
* Permissions.
* Security features.
* Financial transactions.
* Currency operations.
* Abstract Classes and Interfaces.
* Templates.
* Structured project organization.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)