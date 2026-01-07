#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <string>

class Database {
public:
    Database(const std::string& connectionString);
    bool connect();

private:
    std::string connStr;
};

#endif
