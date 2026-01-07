#include "db/Database.hpp"
#include <iostream>

Database::Database(const std::string& connectionString)
    : connStr(connectionString) {}

bool Database::connect() {
    std::cout << "[DB] Connecting using: " << connStr << std::endl;

    // TODO (Week 3): Replace this with real libpqxx connection test
    return true;
}
