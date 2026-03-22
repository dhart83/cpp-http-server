## Scope

### Project Goals

The current goals of this project are:

- build an HTTP/1.1 server from scratch in C++20 using POSIX sockets
- strengthen low-level networking and protocol handling knowledge
- improve modern C++ design and implementation skills through a systems-focused project
- develop the project in a structured way that supports both learning and professional presentation

### Current Boundaries

The initial version of the project will focus on:

- the server side of HTTP only
- HTTP/1.1 as the protocol target
- core request handling, response generation, and server architecture
- clarity and correctness before advanced features or optimization

The initial version will not focus on:

- HTTP/2
- HTTP/3
- TLS
- WebSockets
- CGI
- chunked transfer encoding
- premature optimization
- production deployment concerns

### Constraints

The project is currently shaped by the following constraints:

- **Environment:** Linux
- **Language:** C++20
- **Networking Interface:** POSIX sockets
- **Frameworks:** no HTTP frameworks
- **Approach:** design and implementation will be introduced incrementally rather than all at once

At the current stage, the project is also constrained by the need to build understanding from first principles rather than relying on existing abstractions.

### Assumptions

The current working assumptions are:

- the initial implementation should remain narrow enough to support focused learning
- correctness and architectural clarity are more important than completeness in the first version
- some advanced behaviors may be deferred if they add significant complexity without improving the learning value of the initial implementation

### Scope Risks

The main risks to project scope at this stage are:

- adding protocol features too early
- overcomplicating the architecture before the fundamentals are clear
- drifting into implementation before the design is stable enough
- expanding the project into a broader web framework instead of keeping it focused on core server behavior