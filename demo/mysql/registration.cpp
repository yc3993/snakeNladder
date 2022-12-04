import MYSQLLib;
import "iostream";
import "vector";
import "string";


int main() {
    MYSQL_CONN::mysql_transaction obj;
    MYSQL_CONN::connection_details mysql_info;
    mysql_info.server = "localhost";
    mysql_info.user = "root";
    mysql_info.password = "442473034Aa@";
    mysql_info.database = "sys";

    obj.mysql_connection_setup(mysql_info);
    if (obj.mysql_registration("new_player", "11111", "users", "uname", "pwd"))
        std::cout << "Success \n";
    else
        std::cout << "Failed \n";
    obj.mysql_close_conn();
}