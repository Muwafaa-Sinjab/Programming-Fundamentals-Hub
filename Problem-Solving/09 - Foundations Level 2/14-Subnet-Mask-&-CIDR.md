# 14 - Subnet Mask & CIDR

## Overview

This video explains how an IP address is structured and how networks are divided. It covers the Subnet Mask, which separates the network identity from the device identity, and CIDR, which is a modern method for writing and managing this division.

## Main Topics

### IP Address Structure

An IP address is not just a single random number. It is logically divided into two parts:
- **Network ID**: Identifies the specific network the device belongs to.
- **Host ID**: Identifies the specific device within that network.

For example, in the IP address 192.168.1.10, the first three parts represent the network, and the last part represents the device.

### Subnet Mask

The Subnet Mask is a value that looks similar to an IP address, commonly starting with 255 (such as 255.255.255.0). Its function is to tell the computer exactly which part of the IP address belongs to the network and which part belongs to the device. The router uses the subnet mask to determine whether a destination device is on the same local network or if the data needs to be sent out to a different network. It also determines the maximum number of devices allowed on that specific network.

### CIDR Notation

CIDR stands for Classless Inter-Domain Routing. It is a simplified way to write the subnet mask. Instead of typing out the full mask, a slash followed by a number is added to the end of the IP address. For example, instead of writing the IP and then the mask 255.255.255.0, it is written as 192.168.1.10/24. The number after the slash represents the number of bits reserved for the Network ID.

### Network Classes

Historically, networks were grouped into standard classes based on their size:
- **Class A (/8)**: Uses the first part for the network and the rest for devices. It supports a very large number of devices, over 16 million.
- **Class B (/16)**: Uses the first two parts for the network. It supports around 65,000 devices.
- **Class C (/24)**: Uses the first three parts for the network. It supports up to 254 devices and is the most common class used in homes and companies.

### Practical Use of Subnetting

Network administrators are not limited to just /8, /16, or /24. The CIDR value can be adjusted to create custom network sizes. This is useful for security and efficiency. For example, a company can use subnetting to logically separate departments, such as Human Resources and Finance, into different subnets even if they are connected to the same physical switch. This prevents users in one department from accessing the files of another department without a router connecting the two subnets.

## Key Takeaways

- An IP address is divided into a Network ID and a Host ID
- The Subnet Mask tells the computer how to split the IP address into these two parts
- CIDR is a simplified notation that writes the subnet mask as a slash followed by the number of network bits
- Standard network classes include Class A (/8), Class B (/16), and Class C (/24)
- Subnetting allows administrators to divide a network into smaller, secure sections for different departments

Muwafaa Sinjab @Muwafaa-Sinjab