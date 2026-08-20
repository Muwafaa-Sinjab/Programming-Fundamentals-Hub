# 06 - SQL (What is SQL?)

## Overview

This lesson introduces SQL (Structured Query Language). It explains how SQL is used to connect to databases, access data, and manage database data and structures.

## Main Topics

### What is SQL?

SQL stands for **Structured Query Language**. It is used to communicate with databases and access and manage their data.

SQL is supported by database systems such as Oracle, Microsoft SQL Server, Sybase, Access, and Ingres.

### What Can You Do with SQL?

SQL can be used to:

* Retrieve data from a database.
* Insert new records.
* Update records.
* Delete records.
* Create databases and tables.
* Create Stored Procedures and Views.
* Manage permissions and access to tables, procedures, and views.

### Types of SQL Statements

#### Data Definition Language (DDL)

DDL is used to define and build the structure of databases and tables.

Commands include:

* `CREATE`
* `DROP`
* `ALTER`
* `TRUNCATE`

#### Data Manipulation Language (DML)

DML is used to add, update, and delete data in tables.

Commands include:

* `INSERT`
* `UPDATE`
* `DELETE`

#### Data Query Language (DQL)

DQL is used to query and retrieve data from tables.

Command:

* `SELECT`

#### Data Control Language (DCL)

DCL is used to manage user permissions and access.

Commands include:

* `GRANT`
* `REVOKE`

#### Transaction Control Language (TCL)

TCL is used to manage transactions and changes to data.

Commands include:

* `COMMIT`
* `ROLLBACK`
* `SAVEPOINT`

### Common SQL Queries

SQL can be used to retrieve data with conditions:

```sql
SELECT * FROM Employees WHERE Salary < 1000;
```

It can also use aggregate functions:

```sql
SELECT COUNT(*) FROM Employees;
SELECT SUM(Salary) FROM Employees;
SELECT AVG(Salary) FROM Employees;
```

Data can be updated using:

```sql
UPDATE Employees
SET FirstName = 'Amjad'
WHERE ID = 10;
```

A new table can be created using:

```sql
CREATE TABLE Employees (
    ID int,
    FirstName varchar(255),
    LastName varchar(255),
    Address varchar(255),
    City varchar(255)
);
```

## Key Takeaways

* SQL stands for Structured Query Language.
* SQL is used to communicate with databases.
* SQL can retrieve, insert, update, and delete data.
* SQL can create and manage database structures.
* SQL statements are grouped into DDL, DML, DQL, DCL, and TCL.
* `SELECT` is used to retrieve data.
* `INSERT`, `UPDATE`, and `DELETE` are used to modify data.
* `CREATE`, `DROP`, `ALTER`, and `TRUNCATE` are DDL commands.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)