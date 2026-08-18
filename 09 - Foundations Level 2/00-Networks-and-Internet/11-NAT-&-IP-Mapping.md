# 11 - NAT & IP Mapping

## Overview

This video explains how devices with private IP addresses communicate with the internet using a single public IP address. It covers the concept of Network Address Translation (NAT), how routers track multiple requests, and how IP Mapping allows external traffic to reach specific internal devices.

## Main Topics

### Network Address Translation (NAT)

NAT stands for Network Address Translation. In a typical home or office network, all connected devices use private IP addresses. These private addresses are not visible or accessible from the internet. NAT solves this by allowing all devices on the local network to share the single public IP address provided by the Internet Service Provider. When any internal device sends a request to the internet, the router uses NAT to translate the device's private IP into the public IP. Externally, the entire local network appears as a single device with one public IP.

### The NAT Table and Ports

Because multiple devices and multiple applications might be using the internet at the same time, the router needs a way to keep track of where to send the returning data. The IP address alone only identifies the device, much like a building address, but it does not identify the specific application inside the device. To solve this, the router creates a NAT table. This table records the private IP address and the specific software port used by each application. By combining the IP address and the port number, the router can accurately route the incoming responses to the correct device and the correct application.

### IP Mapping

While NAT manages outgoing traffic from the local network to the internet, IP Mapping handles incoming traffic. It is the process of directing external internet traffic to a specific device inside a private network. This is done by mapping a specific public IP address or external port to a specific private IP address on the local network.

IP Mapping is essential when a device inside the network needs to provide a service to the outside world. Common use cases include hosting game servers, setting up remote desktop access, or allowing external users to connect to a specific machine within the company network.

## Key Takeaways

- NAT allows multiple devices with private IPs to share a single public IP address
- Externally, all traffic from a local network appears to come from one public IP
- The router uses a NAT table combined with port numbers to distinguish between different devices and applications
- IP Mapping directs incoming internet traffic to a specific device inside a private network
- IP Mapping is required for hosting services like game servers or remote desktop access from outside the local network

Muwafaa Sinjab @Muwafaa-Sinjab