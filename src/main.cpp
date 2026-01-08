#include <iostream>
#include "db/Database.hpp"

int main() {
    try {
        Database db;
        db.connect();
        std::cout << "Database connection successful!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
