# C++ Architecture (Week 1)

## Overview
This document describes the initial architectural decisions for the C++
backend of the SIS project.

## Project Structure
- src/: application source files
- include/: header files
- tests/: unit and integration tests (later weeks)

## Build System
CMake is used as the build system to ensure portability and easy dependency
management.

## Database Access (Planned)
PostgreSQL integration will be implemented using libpqxx in upcoming weeks.
No database code is included in Week 1.
