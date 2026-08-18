# 13 - Ports & Socket

## Overview

This video explains how data is directed to the correct application on a device. It introduces the concepts of software ports and sockets, clarifying how they work alongside IP addresses to manage network communication between specific applications.

## Main Topics

### What is a Port?

A port is a logical endpoint on a device used for sending and receiving data. While an IP address identifies the device itself, similar to a building address, a port identifies the specific application or service inside that device, similar to an apartment door. Ports are represented by numbers, which allow a single device to run multiple services simultaneously. For example, a server can use Port 80 to handle web traffic (HTTP) and Port 25 to handle email (SMTP) at the same time without any confusion between the two.

### What is a Socket?

A socket is the complete communication identifier created by combining an IP address with a port number. Because an IP address alone only points to the machine, and a port alone has no context, the socket brings both elements together to define a specific channel for data exchange. It is formatted as the IP address followed by a colon and the port number, such as 192.168.1.10:80.

### How Sockets Work in a Connection

Every network connection relies on a pair of sockets. When a client device connects to a server, the client uses its own IP address along with a randomly generated port number to create the first socket. The server receives this request on its own IP address and a specific service port, creating the second socket. By tracking both sockets, the network ensures that incoming responses are accurately routed back to the exact application that made the request on the client device.

## Key Takeaways

- A software port is a logical endpoint that identifies a specific application or service on a device
- The IP address identifies the device, while the port number identifies the exact service inside that device
- Common ports include Port 80 for web traffic (HTTP) and Port 25 for email (SMTP)
- A socket is the combination of an IP address and a port number, formatted as IP:Port
- Every network connection is defined by a unique socket on both the client and the server

Muwafaa Sinjab @Muwafaa-Sinjab