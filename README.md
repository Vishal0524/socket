# Socket Programming (TCP/IP)

## Overview

This project demonstrates basic **socket programming** using an **IPv4 TCP connection**.
It connects to a web server over the internet or a local network and sends data using the **HTTP protocol on port 80** (clear-text communication).

The example shows how to manually communicate with a web server and inspect the raw HTTP response.

---

## What Is a Socket?

A **socket** is an endpoint for communication between two machines over a network.
In this project:

* Protocol: **TCP**
* Address family: **IPv4**
* Port: **80 (HTTP)**

---

## Connecting to a Web Server

We connect directly to a web server and send an HTTP request.

### Example Using `netcat`

```bash
nc www.google.se 80
```

Send an HTTP request:

```http
HEAD / HTTP/1.0
```

### Example Response

```http
HTTP/1.0 200 OK
Content-Type: text/html; charset=ISO-8859-1
Date: Sun, 01 Feb 2026 17:15:54 GMT
Server: gws
Cache-Control: private
Set-Cookie: AEC=...
Set-Cookie: NID=...
```

This confirms a successful TCP connection and HTTP response from the server.

---

## DNS Resolution (IPv4)

The hostname is resolved to an IPv4 address using standard DNS tools.

```bash
nslookup www.google.se
host www.google.se
ping www.google.se
```

These commands verify:

* DNS name resolution
* Reachability of the server
* IPv4 connectivity

---

## Compilation & Execution

Compile the socket program using `gcc`:

```bash
gcc sockets.c -o sockets
```

Run the program:

```bash
./sockets
```

---

## Requirements

* Linux / Unix-based system
* GCC compiler
* Network access
* IPv4 enabled

---

## Notes

* Communication is **unencrypted** (HTTP, not HTTPS).
* Port 80 is used for simplicity and learning purposes.
* Intended for educational and debugging use.

---
