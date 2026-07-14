# 19 - HTTP & HTTPS Protocols

## Overview

This video explains the protocols used to transfer web pages between browsers and servers. It covers the function of HTTP, the security limitations it has, and how HTTPS solves these issues by encrypting data during transmission.

## Main Topics

### HTTP (HyperText Transfer Protocol)

HTTP is the protocol that manages the transfer of data on the World Wide Web. When a user types a website address and presses Enter, the browser sends an HTTP Request to the server. The server processes this request and sends back an HTTP Response, which contains the web page data. The main limitation of HTTP is that it does not use any encryption. Data is sent in plain text, meaning that if the traffic is intercepted at any point, the content can be easily read by anyone.

### HTTPS (HyperText Transfer Protocol Secure)

HTTPS is the secure version of HTTP. It performs the exact same function of transferring web pages, but it adds a layer of encryption to the data being sent between the browser and the server. Because the data is encrypted, even if it is intercepted, it cannot be read without the correct decryption key. HTTPS is essential for any website that handles sensitive information, such as online shopping, banking, or login pages.

### Encryption Methods: SSL and TLS

HTTPS relies on specific security protocols to encrypt the data. The two main methods are SSL (Secured Socket Layer) and TLS (Transport Layer Security). SSL is the older and slower version. TLS is the modern replacement that is faster, more secure, and currently the standard used by all modern websites.

### Differences in Practice

There are a few visible differences between HTTP and HTTPS. In the address bar of a browser, HTTP websites start with `http://`, while secure websites start with `https://`. Behind the scenes, they also use different default communication ports; HTTP uses Port 80, while HTTPS uses Port 443. Additionally, modern browsers like Google Chrome display a "Not Secure" warning next to the address bar when a user visits an HTTP website, clearly indicating that the data is not encrypted.

## Key Takeaways

- HTTP is the protocol used to request and receive web pages from a server
- HTTP sends data in plain text, making it unsecure and open to interception
- HTTPS adds encryption to protect data as it travels between the browser and the server
- TLS is the modern, faster, and more secure encryption method used by HTTPS, replacing the older SSL
- HTTPS uses Port 443 and displays a secure indicator in the browser, unlike HTTP which uses Port 80 and shows a security warning

Muwafaa Sinjab @Muwafaa-Sinjab