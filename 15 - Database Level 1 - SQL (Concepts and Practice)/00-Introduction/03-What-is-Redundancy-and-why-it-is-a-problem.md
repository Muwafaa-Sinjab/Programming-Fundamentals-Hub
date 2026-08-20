# 03 - What is Redundancy? and why it's a problem?

## Overview

This lesson explains data redundancy and how normalization helps organize data. It shows how normalization reduces repeated data and improves data integrity.

## Main Topics

### Data Redundancy

Data redundancy means storing the same information more than once without a need.

It can happen when the same information is stored many times or when information can be calculated from other data.

### Problems Caused by Redundancy

Data redundancy can cause:

* Wasted storage space.
* Data inconsistency.
* Data corruption.
* Data integrity problems.
* Difficult maintenance.

### Normalization

Normalization is the process of organizing and restructuring data to reduce redundancy and improve data integrity.

It divides data into smaller and more atomic pieces and connects tables using relationships.

### Primary Keys and Foreign Keys

Primary Keys and Foreign Keys are used to create relationships between tables and help prevent unnecessary repeated data.

### Example

Before normalization, department information such as the department name and location may be repeated for every employee.

After normalization, the data is divided into two tables:

* `Employees`
* `Departments`

The `DepartmentID` in the `Employees` table is connected to the `ID` in the `Departments` table. This removes unnecessary repetition.

## Key Takeaways

* Data redundancy means unnecessary repeated data.
* Redundancy can waste storage space and cause data problems.
* Normalization organizes data to reduce redundancy.
* Normalization divides data into smaller and more atomic pieces.
* Primary Keys and Foreign Keys help connect related tables.
* Separating `Employees` and `Departments` can remove repeated department data.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)
