# cpp-http-server

A ground-up HTTP server project written in C++20 using POSIX sockets on Linux.

## Overview

This repository is focused on understanding how an HTTP server works from the inside out. The project is being built without HTTP frameworks in order to study the core mechanics of socket setup, connection handling, request processing, response generation, and server architecture at a lower level.

## Goals

The current goals of the project are to:

- build an HTTP/1.1 server from scratch
- strengthen modern C++ design and implementation skills
- learn low-level networking and protocol handling in a structured way
- develop the system incrementally through small, testable milestones

## Current Status

The project is currently in active early development.

The current implementation baseline can:

- create a TCP listening socket
- bind to a local port
- listen for incoming connections
- accept a client connection
- close the connection cleanly

At this stage, the server does not yet parse HTTP requests or return an HTTP response.

## Scope

Initial development is focused on:

- the server side of HTTP only
- HTTP/1.1
- socket and request/response fundamentals
- correctness and clarity before optimization

The project does not currently target:

- HTTP/2
- HTTP/3
- TLS
- WebSockets
- CGI
- advanced routing
- concurrency
- persistent connections
- production deployment concerns

## Requirements

- Linux
- CMake
- a C++20-compatible compiler

## Build

Configure the project from the repository root:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
```

Build the executable:

```bash
cmake --build build
```

## Run

Run the server from the repository root:

```bash
./build/cpp_http_server
```

## Debug Build Notes

This project currently uses a debug-friendly build setup during development.

### Configure a debug build

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
```

### Rebuild after code changes
```bash
cmake --build build
```

### Reconfigure when build settings change

Re-run the configure command when changing things like:

- `CMakeLists.txt`
- compiler options
- warning settings
- build type
- target source files

Example:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
```

## Basic Usage

Start the server:

```bash
./build/cpp_http_server
```

Then, from another terminal, test it with `netcat`:

```bash
nc 127.0.0.1 8080
```

At the current stage, this is mainly useful for confirming that the server accepts a TCP connection.

## Repository Structure

```bash
.
├── docs/
│   ├── 00-overview.md
│   ├── 10-scope.md
│   ├── 20-requirements.md
│   ├── 30-architecture.md
│   ├── 40-build-plan.md
│   ├── 50-verification.md
│   ├── 60-decisions.md
│   └── 90-closeout.md
├── src/
│   └── main.cpp
├── .gitignore
├── .gitmessage
├── CMakeLists.txt
├── LICENSE
└── README.md
```

The `docs/` directory is used for project planning, scope, requirements, architecture, build planning, verification, and decisions as the project evolves.

## Development Approach

This project is being built in small steps. The current workflow is:

1. define the next narrow milestone
1. implement the smallest meaningful slice
1. validate behavior with simple tools
1. refine the design and continue

The goal is to keep the project understandable while it grows.

## Notes

This repository is intended both as a learning project and as a demonstration of structured engineering work. The design and implementation are expected to evolve as the project becomes more complete.