import MYSQLLib;
import gameSaveReload;
import "iostream";
import "vector";
import "string";


int main() {
    GameSaveAndReload::Save_Reload o;
    MYSQL_CONN::mysql_transaction obj;
    MYSQL_CONN::connection_details mysql_info;
    mysql_info.server = "localhost";
    mysql_info.user = "root";
    mysql_info.password = "442473034Aa@";
    mysql_info.database = "sys";

    obj.mysql_connection_setup(mysql_info);
    /*
    std::cout << obj.mysql_registration("Yutong", "12", "users", "uname", "pwd") << "\n";
    std::cout << obj.mysql_login("Yutong", "1", "users", "uname", "pwd");
    std::vector<std::string> r;
    r.push_back("Rick");
    r.push_back("Helen");
    obj.mysql_history_insertion(r, "game_history", "uname", "players_rankings");
    */
    std::vector<std::tuple<std::string, std::string>> res;
    res = obj.mysql_check_history("Rick", "game_history", "uname", "players_rankings");
    std::vector<std::string> a = o.listGameHistory("./gameHistory/");
    for (int i=0; i<a.size(); i++) {
        std::cout << a[i] << "\n";
    }
    for (int i=0; i<a.size(); i++) {
        std::cout << std::get<0>(res[i]) << "   " << std::get<1>(res[i]) << "\n";
    }

    obj.mysql_close_conn();
    
}

