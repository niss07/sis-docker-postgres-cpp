# Database Overview

This project uses PostgreSQL as the main database system for the Student Information System.

## Purpose
The database stores student information including:
- Student ID
- Name and surname
- Department
- Email address

## Why PostgreSQL?
- Open-source and reliable
- Strong ACID compliance
- Widely used in industry
- Easy integration with Docker
- Compatible with C++ via libpqxx library

## Planned Schema (Draft)

Table: students
- id (INT, PRIMARY KEY)
- name (VARCHAR)
- surname (VARCHAR)
- department (VARCHAR)
- email (VARCHAR, UNIQUE)

## Integration
The PostgreSQL database will run in a Docker container and will be accessed by the C++ application container through a private Docker network.
