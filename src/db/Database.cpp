#include <iostream>
#include <pqxx/pqxx>

int main() {
    try {
        pqxx::connection c(
            "host=host.docker.internal port=5432 dbname=sis_db user=sis_user password=sis_password"
        );

        if (!c.is_open()) {
            std::cerr << "Connection failed\n";
            return 1;
        }

        pqxx::work txn(c);
        auto r = txn.exec("SELECT 1;");
        txn.commit();

        std::cout << "Connected! SELECT 1 = " << r[0][0].as<int>() << std::endl;
        return 0;

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}
