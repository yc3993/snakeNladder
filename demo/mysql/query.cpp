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
    std::vector<std::tuple<std::string, std::string>> res;

    obj.mysql_connection_setup(mysql_info);
    res = obj.mysql_check_history("Rick", "game_history", "uname", "players_rankings");
    for (int i=0; i<res.size(); i++) {
        std::cout << std::get<0>(res[i]) << "   " << std::get<1>(res[i]) << "\n";
    }
    obj.mysql_close_conn();
}