#import </usr/local/mysql/include/mysql.h>
#import <iostream>

// compile using clang++ -std=c++20 main.cpp -L/usr/local/mysql-8.0.29-macos12-arm64/lib/ -lmysqlclient -o main

struct connection_details {
    const char *server, *user, *password, *database;
};

class mysql_transaction{
    public:
        MYSQL* mysql_connection_setup(struct connection_details mysql_details);
        MYSQL_RES* mysql_execute_query(MYSQL *connection, const char *query);
        void mysql_shutdown(MYSQL *connection, MYSQL_RES *res);

};

MYSQL* mysql_transaction::mysql_connection_setup(struct connection_details mysql_details) {
    MYSQL *connection = mysql_init(NULL);
    if (!mysql_real_connect(connection, mysql_details.server, mysql_details.user, mysql_details.password, 
    mysql_details.database, 0, NULL, 0)) {
        std::cout << "MYSQL Connection Error: " << mysql_error(connection) << std::endl;
        exit(1);
    }
    std::cout << "success!" << std::endl;
    return connection;
}

MYSQL_RES* mysql_transaction::mysql_execute_query(MYSQL *connection, const char *query){
    if (mysql_query(connection, query)) {
        std::cout << "MYSQL Query Error: " << mysql_error(connection) << std::endl;
        mysql_close(connection);
        exit(1);
    }
    return mysql_use_result(connection);
}

void mysql_transaction::mysql_shutdown(MYSQL *connection, MYSQL_RES *res){
    mysql_free_result(res);
    mysql_close(connection);
}


int main() {
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    struct connection_details details;
    details.server = "localhost";
    details.user = "root";
    details.password = "442473034Aa@";
    details.database = "sys";
    
    mysql_transaction obj;
    conn = obj.mysql_connection_setup(details);
    res = obj.mysql_execute_query(conn, "SELECT * FROM test;");

    while ((row = mysql_fetch_row(res)) != NULL) {
        std::cout << row[0] << " | " << row[1] << " | " << row[2] << std::endl << std::endl;
    }

    obj.mysql_shutdown(conn, res);
}

