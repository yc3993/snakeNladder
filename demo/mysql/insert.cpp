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

    std::vector<std::string> r;
    r.push_back("Rick");
    r.push_back("Tejasri");
    r.push_back("Yutong");

    obj.mysql_connection_setup(mysql_info);

    if (obj.mysql_history_insertion(r, "game_history", "uname", "players_rankings"))
        std::cout << "Success \n";
    else
        std::cout << "Failed \n";
    obj.mysql_close_conn();
}
