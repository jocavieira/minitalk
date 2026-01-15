*This project has been created as part of the 42 curriculum by jocarlo2.*

# Minitalk

## Description

Minitalk is a small inter-process communication (IPC) project where a client program sends messages to a server program using only Unix signals (`SIGUSR1` and `SIGUSR2`). The goal of the project is to understand the fundamentals of signals in Unix systems, asynchronous programming, and bitwise operations.  

The server receives signals from the client, reconstructs the message character by character, and prints it to the standard output. This project emphasizes low-level communication, proper memory management, and safe handling of asynchronous events.

---

## Instructions

### Compilation

To compile the project, use:

``` bash
make
```

## Usage 
This will generate two executables:

server — the program that receives messages

client — the program that sends messages

Execution

Start the server first
``` bash

./server
```

The server will print its PID (process ID), which is required for the client.

Send a message with the client

``` bash

./client <PID> "<message>"

```
Example:

``` bash
./client 12345 "Hello, Don't Panic!"
```
