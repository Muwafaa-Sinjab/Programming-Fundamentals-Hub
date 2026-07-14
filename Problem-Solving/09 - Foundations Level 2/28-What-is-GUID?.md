# 28 - What is GUID?

## Overview

This video introduces the Globally Unique Identifier (GUID). It explains what a GUID is, how it is generated to guarantee uniqueness, and why it is commonly used in software development and databases instead of traditional sequential numbers.

## Main Topics

### What is GUID?

GUID stands for Globally Unique Identifier. It is a 128-bit number represented in a hexadecimal format. A GUID is typically written as a string of 32 characters divided into five groups separated by hyphens. An example of a GUID looks like `550e8400-e29b-41d4-a716-446655440000`. It is a standardized concept, meaning the logic behind it is the same across all programming languages.

### Uniqueness and Generation

A GUID is designed to be practically impossible to duplicate anywhere in the world. This extreme level of uniqueness is achieved because the generation algorithm relies on a combination of three elements: the physical MAC address of the device generating it, a set of random bits, and a unique timestamp specific to that machine. Because of this combination, even if billions of devices generate a GUID at the exact same moment, the resulting values will be completely different.

### Practical Uses

GUIDs are widely used in software systems for several purposes. In databases, they are frequently used as Primary Keys instead of sequential numbers (1, 2, 3). Using a GUID removes the need for the database to count and assign the next number, which is especially useful in large, distributed systems where multiple servers are adding records at the same time.

Additionally, GUIDs are used as unique identifiers in API requests. They can also be used to randomly sort data, such as shuffling a list of employees or exam questions in a different order every time. Another benefit of using GUIDs instead of sequential numbers is that it hides the actual total number of records in a database from end users.

### Generation in Code

Because GUID is a universal concept, every major programming language and database system has built-in libraries to generate one. For example, C# uses `Guid.NewGuid()`, SQL Server uses the `NEWID()` function, Python uses `uuid.uuid4()`, and JavaScript uses `crypto.randomUUID()`. The generated value is simply stored as a text string within the system.

## Key Takeaways

- GUID stands for Globally Unique Identifier and is a 128-bit hexadecimal value
- It is practically impossible for a GUID to be duplicated across any devices in the world
- The uniqueness is guaranteed by combining the device's MAC address, random bits, and a timestamp
- GUIDs are commonly used as primary keys in databases to avoid sequential numbering
- They are useful in distributed systems, API requests, and for hiding the total number of database records

Muwafaa Sinjab @Muwafaa-Sinjab