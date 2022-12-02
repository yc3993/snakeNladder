import gameSaveReload;
import "iostream";
import "vector";
import "tuple";


int main() {
    GameSaveAndReload::Save_Reload obj;

    for (std::string r : obj.listGameHistory("./gameHistory/")) {
        std::cout << r << "\n";
    }
    std::vector<std::tuple<int, int>> pos;
    std::vector<std::string> pn;
    std::vector<std::tuple<int, int>> snake1;
    std::vector<std::tuple<int, int>> snake2;
    std::vector<std::tuple<int, int>> ladder1;
    std::vector<std::tuple<int, int>> ladder2;
    std::vector<std::vector<std::tuple<int, int>>> snakes;
    std::vector<std::vector<std::tuple<int, int>>> ladders;

    std::tuple<int, int> p1 = std::make_tuple(1, 1);
    std::string p1_name = "Rick";
    std::tuple<int, int> p2 = std::make_tuple(5, 2);
    std::string p2_name = "Helen";
    pos.push_back(p1);
    pos.push_back(p2);
    pn.push_back(p1_name);
    pn.push_back(p2_name);

    snake1.push_back(std::make_tuple(0, 0));
    snake1.push_back(std::make_tuple(1, 1));

    snake2.push_back(std::make_tuple(3, 0));
    snake2.push_back(std::make_tuple(3, 2));

    snakes.push_back(snake1);
    snakes.push_back(snake2);

    ladder1.push_back(std::make_tuple(2, 0));
    ladder1.push_back(std::make_tuple(2, 2));

    ladder2.push_back(std::make_tuple(4, 0));
    ladder2.push_back(std::make_tuple(10, 2));

    ladders.push_back(ladder1);
    ladders.push_back(ladder2);  


    std::cout << obj.gameSave("./gameHistory/", "game1", 20, 20, pos, pn, snakes, ladders);
    /*

    int length;
    int height;
    std::vector<std::tuple<int, int>> players;
    std::vector<std::string> players_names;
    std::vector<std::vector<std::tuple<int, int>>> snakes;
    std::vector<std::vector<std::tuple<int, int>>> ladders;

    std:: cout << obj.gameReload("./gameHistory/", "game3", length, height, players, players_names, snakes, ladders);
    std::cout << length << " " << height << "\n";
    for (int i=0; i<players.size(); i++) {
        std::cout << players_names[i] << ": " << std::get<0>(players[i]) << ", " << std::get<1>(players[i]) << "\n";
    }
    for (int i=0; i<snakes.size(); i++) {
        for (int j=0; j<snakes[i].size(); j++) {
            std::cout << "Snake" << i << ":   " << std::get<0>(snakes[i][j]) << ", " << std::get<1>(snakes[i][j]) << "   |    ";
        }
        std::cout << "\n";
    }
    for (int i=0; i<ladders.size(); i++) {
        for (int j=0; j<ladders[i].size(); j++) {
            std::cout << "Ladder" << i << ":   " << std::get<0>(ladders[i][j]) << ", " << std::get<1>(ladders[i][j]) << "   |    ";
        }
        std::cout << "\n";
    }
    */

}