import gameSaveReload;
import "iostream";
import "vector";
import "tuple";


int main() {
    // initialize variables for reloading
    int length;
    int height;
    std::vector<std::tuple<int, int>> players;
    std::vector<std::string> players_names;
    std::vector<std::vector<std::tuple<int, int>>> snakes;
    std::vector<std::vector<std::tuple<int, int>>> ladders;



    // reloading...
    GameSaveAndReload::Save_Reload obj;
    if (obj.gameReload("./gameHistory/", "game3", length, height, players, players_names, snakes, ladders))
        std::cout << "Success \n";
    else {
        std::cout << "Failed \n";
        return 0;
    }


    // check result
    std::cout << "Length: " << length << " Height: " << height << "\n";
    for (int i=0; i<players.size(); i++) {
        std::cout << players_names[i] << ": (" << std::get<0>(players[i]) << ", " << std::get<1>(players[i]) << ")\n";
    }
    for (int i=0; i<snakes.size(); i++) {
        std::cout << "Snake" << i << ":   \n";
        std::cout << "Starts: ("  << std::get<0>(snakes[i][0]) << ", " << std::get<1>(snakes[i][0]) << ") ";
        std::cout << "Ends: ("  << std::get<0>(snakes[i][1]) << ", " << std::get<1>(snakes[i][1]) << ") \n\n";

    }
    for (int i=0; i<ladders.size(); i++) {
        std::cout << "Ladder" << i << ":   \n";
        std::cout << "Starts: ("  << std::get<0>(ladders[i][0]) << ", " << std::get<1>(ladders[i][0]) << ") ";
        std::cout << "Ends: ("  << std::get<0>(ladders[i][1]) << ", " << std::get<1>(ladders[i][1]) << ") \n\n";
    }
}