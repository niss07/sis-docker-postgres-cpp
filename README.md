# Student Information System (SIS)
System Programming Term Project

## 📌 Project Overview
This project is a **Student Information System (SIS)** developed as part of the **System Programming** course.  
It is implemented in **C++** with a **PostgreSQL** backend and uses **Docker** for containerized database management.

The project was originally designed for **three students**, following a role-based task distribution.  
However, it was implemented by **two students**, with responsibilities redistributed while preserving the original project structure and evaluation criteria.

The project demonstrates:
- System-level programming in C++
- Database integration using PostgreSQL (libpqxx)
- Docker-based service management
- Structured project planning using GitHub Issues and Project Board
- Incremental development following weekly milestones (Week 1–Week 4)


---


## 🧑‍🤝‍🧑 Team Members & Responsibilities

| Role | Student | Student Number | Responsibilities |
|----|-------|---------------|------------------|
| **Student 1** | **Nisa Aksoy** | 230304047 | Project planning, weekly coordination, issue & project board management, integration testing, documentation, final validation |
| **Student 2** | **Nilsu Bülbül** | 230304055 | Docker configuration, container orchestration, Dockerfile & Docker Compose support |
| **Student 3** | **Shared (Nisa Aksoy & Nilsu Bülbül)** | — | Database layer, PostgreSQL setup, libpqxx research, database connectivity, execution testing |


Nisa AKSOY DOCKERHUB: https://hub.docker.com/u/nisaksoy
Nilsu BÜLBÜL DOCKERHUB: https://hub.docker.com/u/nilh2o


> Although the project scope defines three distinct student roles, the **Student 3 responsibilities were shared between the two team members** to ensure full coverage of database-related tasks.

---

## 🛠️ Technologies Used
- **C++ (GCC 13)**
- **PostgreSQL 16**
- **libpqxx**
- **Docker & Docker Compose**
- **GitHub Issues, Milestones & Project Board**

---

## 📂 Project Structure

sis-docker-postgres-cpp/
│
├── src/
│ ├── main.cpp
│ └── db_connect_test.cpp
│
├── include/
│ └── db/
│ └── Database.hpp
│
├── docs/
│ └── design-notes.md
│
├── Dockerfile
├── docker-compose.yml
├── README.md
├── INSTALL.md
└── MANUAL.md

---

## 📅 Weekly Development Milestones

### ✅ Week 1 – Project Initialization & Planning
- GitHub repository initialization
- Branch strategy definition
- Documentation skeleton created
- Project board configured
- Initial issue breakdown

### ✅ Week 2 – Docker & Database Setup
- Docker environment preparation
- PostgreSQL container configuration
- Persistent volume setup
- Initial database service validation

### ✅ Week 3 – Database Integration
- libpqxx research and integration
- C++ PostgreSQL connection implementation
- Database connectivity testing
- Initial CRUD logic preparation

### ✅ Week 4 – Integration, Testing & Finalization
- Integrated system testing
- Docker-based PostgreSQL execution verification
- C++ to PostgreSQL connectivity validation
- Execution issues documented and resolved
- Project board and milestones finalized

---


## 🧪 Testing & Validation

### Database Execution Test
PostgreSQL is started using Docker Compose:
```bash
docker-compose up -d
```

A standalone C++ test application is compiled and executed inside a Linux Docker container to verify database connectivity using libpqxx.
Successful execution confirms:
*Database availability
*Correct network configuration
*Valid C++ to PostgreSQL integration


## 🐳 Docker Usage
*Start Database Service
docker-compose up -d

*Stop Services and Clean Volumes
docker-compose down -v

PostgreSQL image is pinned to version 16 to ensure compatibility and stability.


##🧠 Architectural Notes

Docker Compose includes only the PostgreSQL service
The C++ application is executed separately for controlled system-level testing
This design choice allows explicit validation of database connectivity and execution behavior


##📖 Documentation

Additional documentation:
INSTALL.md – Installation & environment setup
MANUAL.md – Usage and developer guide


##✅ Final Submission Status
 Dockerized PostgreSQL configured
 C++ database connectivity verified
 libpqxx integration tested
 Issues and milestones completed
 Project board finalized
 Documentation completed


##📜 Notes

This project was developed for academic purposes in accordance with the System Programming course requirements.
