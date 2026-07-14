# 29 - 3-Tier Architecture

## Overview

This video introduces 3-Tier Architecture as a method for structuring software applications. It explains how dividing an application into three separate logical layers improves code organization, makes maintenance easier, and allows different parts of the system to be updated or scaled independently.

## Main Topics

### What is 3-Tier Architecture?

3-Tier Architecture is a design pattern that splits an application into three distinct layers. Each layer has a specific responsibility and operates independently from the others. Even though they work together to form a complete application, the code for each tier is kept separate. This concept is known as separation of concerns.

### Presentation Tier

The Presentation Tier is the user interface layer of the application. Its only job is to display information to the user and collect their input. It does not process data or connect directly to the database. This tier can take the form of a web page, a desktop application, or a mobile app interface. For example, a login screen with a username field, a password field, and a submit button represents the Presentation Tier.

### Business Logic Tier

The Business Logic Tier acts as the bridge between the user interface and the data storage. It contains the core rules and processing logic of the application. When the Presentation Tier sends user input, the Business Logic Tier processes that input, applies the necessary rules, and communicates with the Data Tier to retrieve or save information. Using the login example, this tier receives the username and password, checks if they are correct, and determines whether the login is successful or if an error should be returned.

### Data Tier

The Data Tier is responsible for storing, retrieving, and managing data. It usually consists of a database management system, such as SQL Server or MySQL. This tier does not process business rules or display interfaces; it simply executes commands to read or write data and sends the results back to the Business Logic Tier.

### How the Tiers Work Together

To illustrate the flow, consider a user attempting to log in:
1. The user types a username and password in the **Presentation Tier**.
2. The **Business Logic Tier** receives this input and sends a request to the database.
3. The **Data Tier** searches the database and returns the matching user record.
4. The **Business Logic Tier** checks if the password matches and decides if the login is valid.
5. The **Business Logic Tier** sends a success or error message back to the **Presentation Tier** to display to the user.

## Key Takeaways

- 3-Tier Architecture divides an application into Presentation, Business Logic, and Data tiers
- The Presentation Tier handles only the user interface and input collection
- The Business Logic Tier processes data and enforces the core rules of the application
- The Data Tier is solely responsible for storing and retrieving data from a database
- Separating the application into tiers makes it easier to maintain, test, and scale without affecting the entire system

Muwafaa Sinjab @Muwafaa-Sinjab