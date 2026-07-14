# 05 - Transmission Control Protocol (TCP)

## Overview

This video introduces the Transmission Control Protocol (TCP). It explains the specific role TCP plays in network communication, how it manages the delivery of data packets, and how it works together with the IP protocol.

## Main Topics

### Role of TCP

TCP stands for Transmission Control Protocol. It is the protocol directly responsible for dividing files into packets, transmitting them across the network, and reassembling them back into the original file at the destination.

### Data Organization

TCP ensures that data packets are arranged in the correct sequential order. By managing this sequence, TCP guarantees that the receiving device can reconstruct the file accurately, regardless of the order in which the packets arrived.

### Handling Transmission Issues

TCP is designed to manage network problems during transmission. If network congestion or errors occur while the data is being sent, TCP works to ensure that the data, or at least a readable portion of it, still successfully reaches the destination device.

### Relationship with IP

TCP and IP are complementary protocols that work together to complete data transfer. While TCP handles the division, sequencing, and reassembly of the data, it does not determine the actual destination of the data. Identifying the address of the receiving device is the specific responsibility of the IP protocol.

## Key Takeaways

- TCP stands for Transmission Control Protocol
- It is responsible for dividing files into packets and reassembling them
- TCP ensures that packets are organized in the correct sequential order
- It handles data delivery and manages issues like network congestion or errors
- TCP and IP work together, with IP handling the addressing of the destination device

Muwafaa Sinjab @Muwafaa-Sinjab