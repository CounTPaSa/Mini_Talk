# Minitalk

## Project Overview

The `Minitalk` project involves coding a small data exchange program using UNIX signals. The goal of this project is to create a communication program consisting of a client and a server.

## Purpose

The purpose of this project is to learn how to use UNIX signals for inter-process communication. You will create a server that can receive messages from a client, which sends strings of data. This project helps in understanding low-level signal handling and inter-process communication in a UNIX environment.

## What You Will Learn

- How to use UNIX signals for communication between processes.
- How to handle and manage signals in C.
- How to implement a simple client-server model.
- How to manage memory and prevent leaks in C programs.

## Project Contents

### Required Part

You must create a communication program in the form of a client and a server.

- The server must be started first and it should print its PID upon starting.
- The client takes two parameters:
  - The server PID.
  - The string to send.
- The client must send the string to the server.
- The server must print the string upon receiving it.
- The server must be able to handle strings from multiple clients sequentially without needing a restart.
- Communication between the client and server must be done using only UNIX signals.
- You may only use the following signals: SIGUSR1 and SIGUSR2.

### Bonus Part

The bonus part includes additional features to enhance the project:

- Support for Unicode characters.

### External Functions

You are allowed to use the following external functions:

- `write`
- `ft_printf` and any equivalent functions you have coded
- `signal`
- `sigemptyset`
- `sigaddset`
- `sigaction`
- `kill`
- `getpid`
- `malloc`
- `free`
- `pause`
- `sleep`
- `usleep`
- `exit`

## Usage

After implementing the client and server programs, you can run them as follows:

1. Start the server:
   ```bash
   ./server
   ```
The server will print its PID.

2. Start the client with the server PID and the string to send:
  ```bash
   ./client [server_pid] [string]
   ```
The server will print the received string upon receiving it from the client.

## Conclusion
The Minitalk project is a great opportunity to delve into the world of inter-process communication using UNIX signals. By completing this project, you will enhance your understanding of signal handling, client-server architecture, and low-level programming in C.
