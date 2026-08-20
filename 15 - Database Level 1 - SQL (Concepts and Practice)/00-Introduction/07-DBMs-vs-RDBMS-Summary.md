# 07 - DBMS vs RDBMS

## Overview

This lesson explains the difference between DBMS and RDBMS. It covers databases, how data is stored, table relationships, data access, security, normalization, and scalability.

## Main Topics

### What is a Database?

A database is an organized collection of data that makes data easier to access and manage.

A **DBMS (Database Management System)** is used to manage this data.

There are two types mentioned in the lesson:

* **Non-Relational DBMS:** Examples include File System and XML.
* **Relational DBMS (RDBMS):** Supports relationships between data. Examples include SQL Server, Oracle, and MySQL.

### RDBMS

In an RDBMS, data is organized into tables. Tables contain rows and columns, with relationships between tables.

Important concepts include:

* **Table / Entity Set:** Contains the data.
* **Column / Field / Attribute:** A column or field in a table.
* **Row / Entity / Record:** A record in a table.
* **Primary Key:** Identifies each record.
* **Foreign Key:** Connects tables.

### DBMS vs RDBMS

| DBMS                                        | RDBMS                                     |
| ------------------------------------------- | ----------------------------------------- |
| Database Management System                  | Relational Database Management System     |
| Stores data in files without relationships. | Stores data in tables with relationships. |
| May have no built-in query language.        | Uses SQL to retrieve data.                |
| Supports limited data sharing.              | Supports centralized data sharing.        |
| Suitable for smaller amounts of data.       | Suitable for large amounts of data.       |
| Less scalable.                              | More scalable.                            |
| Less secure.                                | More secure.                              |
| Does not use normalization.                 | Uses normalization.                       |
| Has higher data repetition.                 | Reduces data repetition.                  |
| Has limited data integrity and consistency. | Supports data integrity and consistency.  |
| Difficult to manage.                        | Easier to manage.                         |

### Data Access and Scalability

DBMS supports limited access to data, while RDBMS supports multiple users.

RDBMS is also more suitable for large amounts of data and makes backups easier.

## Key Takeaways

* A database is an organized collection of data.
* DBMS is used to manage databases.
* RDBMS stores data in tables and supports relationships between them.
* Primary Keys identify records.
* Foreign Keys connect tables.
* RDBMS uses SQL to retrieve data.
* RDBMS supports normalization, data integrity, and data consistency.
* RDBMS supports multiple users and is more scalable.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)