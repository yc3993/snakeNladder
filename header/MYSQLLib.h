#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include </usr/local/mysql/include/mysql.h>

// compile using clang++ -std=c++20 main.cpp -L/usr/local/mysql-8.0.29-macos12-arm64/lib/ -lmysqlclient -o main


struct connection_details {
    const char *server, *user, *password, *database;
};

class mysql_transaction{
    public:
        bool mysql_connection_setup(struct connection_details mysql_details);
        bool mysql_registration(std::string uname, std::string pwd, std::string table_name, 
                                std::string uname_colname, std::string pwd_colname);
        bool mysql_login(std::string uname, std::string pwd, std::string table_name, 
                                std::string uname_colname, std::string pwd_colname);
        bool mysql_history_insertion(std::vector<std::string> rankings, std::string table_name, 
                                    std::string uname_colname, std::string rankings_colname);
        std::vector<std::tuple<std::string, std::string>> mysql_check_history(std::string uname, std::string table_name, 
                                            std::string uname_colname, std::string rankings_colname);
        void mysql_close_conn();
    private:
        MYSQL *con;
};

bool mysql_transaction::mysql_connection_setup(struct connection_details mysql_details) {
    MYSQL *connection = mysql_init(NULL);
    if (!mysql_real_connect(connection, mysql_details.server, mysql_details.user, mysql_details.password, 
    mysql_details.database, 0, NULL, 0)) {
        std::cout << "MYSQL Connection Error" << mysql_error(connection) << std::endl;
        return false;
    }
    this->con = connection;
    return true;
}

bool mysql_transaction::mysql_registration(std::string uname, std::string pwd, std::string table_name, 
                                            std::string uname_colname, std::string pwd_colname){
    std::string temp1;
    temp1 = "SELECT * FROM " + table_name + " WHERE " + uname_colname + " = '" + uname + "';";
    const char* query1 = temp1.c_str();

    if (mysql_query(this->con, query1)) {
        std::cout << "MYSQL Query Error: " << mysql_error(this->con) << std::endl;
        return false;
    }
    MYSQL_RES *res1;
    MYSQL_ROW row1;
    res1 = mysql_use_result(this->con);
    // check if registered before
    if ((row1 = mysql_fetch_row(res1)) != NULL) {
        mysql_free_result(res1);
        return false;
    }

    // new users
    std::string temp2;
    temp2 = "INSERT INTO " + table_name + " VALUES('" + uname + "', '" + pwd + "');";
    const char* query2 = temp2.c_str();
    if (mysql_query(this->con, query2)) {
        std::cout << "MYSQL Query Error: " << mysql_error(this->con) << std::endl;
        mysql_free_result(res1);
        return false;
    }   
    
    mysql_free_result(res1);
    return true;
}

bool mysql_transaction::mysql_login(std::string uname, std::string pwd, std::string table_name, 
                    std::string uname_colname, std::string pwd_colname) {
    std::string temp;
    temp = "SELECT * FROM " + table_name + " WHERE " + uname_colname + " = '" + uname + "' AND " + pwd_colname + " = '" + pwd + "';";
    const char* query = temp.c_str();
    if (mysql_query(this->con, query)) {
        std::cout << "MYSQL Query Error: " << mysql_error(this->con) << std::endl;
        return false;
    }

    MYSQL_RES *res2;
    MYSQL_ROW row2;
    res2 = mysql_use_result(this->con);
    if ((row2 = mysql_fetch_row(res2)) != NULL) {
        mysql_free_result(res2);
        return true;
    }
    else {
        mysql_free_result(res2);
        return false;
    }             
}

bool mysql_transaction::mysql_history_insertion(std::vector<std::string> rankings, std::string table_name, 
                                    std::string uname_colname, std::string rankings_colname){
    std::string rk;

    // generate rankings data entry
    for (int i=0; i<rankings.size(); i++) {
        rk += rankings[i] + ",";
    }
    rk.pop_back();

    // loop through every players, record their game history
    for (int i=0; i<rankings.size(); i++) {
        std::string temp;
        const char* query;
        temp = "INSERT INTO " + table_name + " (" + uname_colname + ", " + rankings_colname + ") VALUES ('" + rankings[i] + "', '" + rk + "');";
        query = temp.c_str();
        if (mysql_query(this->con, query)) {
            std::cout << "MYSQL Query Error: " << mysql_error(this->con) << std::endl;
            return false;
        } 
    }
    return true;
}

std::vector<std::tuple<std::string, std::string>> mysql_transaction::mysql_check_history(std::string uname, std::string table_name, 
                                            std::string uname_colname, std::string rankings_colname) {
    std::vector<std::tuple<std::string, std::string>> res;
    std::string temp;
    const char* query;
    temp = "SELECT " + uname_colname + ", " + rankings_colname + " FROM " + table_name + " WHERE " + uname_colname + " = '" + uname + "';";
    query = temp.c_str();
    if (mysql_query(this->con, query)) {
        std::cout << "MYSQL Query Error: " << mysql_error(this->con) << std::endl;
        return res;
    }
    MYSQL_RES *res3;
    MYSQL_ROW row3;
    res3 = mysql_use_result(this->con);
    while ((row3 = mysql_fetch_row(res3)) != NULL) {
        res.push_back(std::make_tuple(row3[0], row3[1]));
    }
    mysql_free_result(res3);
    return res;
}


void mysql_transaction::mysql_close_conn(){
    mysql_close(this->con);
}