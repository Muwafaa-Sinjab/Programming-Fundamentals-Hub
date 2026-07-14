# 21 - DNS (Domain Name Server)

## Overview

This video explains the Domain Name System (DNS). It covers how DNS translates human-readable domain names into numerical IP addresses, the step-by-step process of resolving a domain, and how devices save this information to speed up future requests.

## Main Topics

### What is DNS?

DNS stands for Domain Name Server. It is a global system that functions like a phone directory for the internet. When a user types a domain name like "google.com", the DNS system looks up this name and finds the correct IP address associated with it. Without DNS, users would need to remember and type the exact numerical IP address of every website they want to visit.

### The Resolution Process

When a user types a domain name in a browser, the browser first checks a local DNS server, which is usually provided by the network's router. If this is the first time the domain is requested, the local server will not have the IP address saved. The local server then contacts a Root Server, which acts as the main directory for the global system. The Root Server does not store all IP addresses, but it directs the request to the correct Top-Level Domain (TLD) server, such as the server responsible for all ".com" addresses. The TLD server finds the specific IP for the requested website and sends it back to the user's device.

### Caching and Updates

Once the IP address is found, the device saves, or caches, this information locally. The next time the user types the same domain name, the browser checks the local cache first and connects directly without contacting the external DNS servers again. However, because a website's IP address can change over time (for example, if a company moves its website to a different server), this cached information is periodically updated to ensure the domain still points to the correct location.

### Multiple Domains for One IP

A single server can have multiple domain names pointing to it. A user can purchase several different domain names and configure all of them to resolve to the exact same IP address. This means that typing any of those different names will lead the user to the same website.

## Key Takeaways

- DNS translates domain names into numerical IP addresses
- It functions as a global directory that includes root servers and TLD servers
- Devices cache DNS records locally to avoid repeating the lookup process
- Cached records are updated periodically in case a website's IP address changes
- Multiple domain names can be configured to point to the same IP address

Muwafaa Sinjab @Muwafaa-Sinjab