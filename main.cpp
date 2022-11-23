#import <string>
#import <fstream>
#import <iostream>
#import <map>
#import <tuple>
#import <vector>
#import <filesystem>


class Save_Reload {
    public:
        bool gameSave(std::string add, std::string name, int length, int height, 
                        std::vector<std::tuple<int, int>>& players, std::vector<std::string>& players_names, 
                        std::vector<std::vector<std::tuple<int, int>>>& snakes, 
                        std::vector<std::vector<std::tuple<int, int>>>& ladders);
        std::vector<std::string> listGameHistory(std::string add);
        bool removeHistory(std::string add, std::string name);
        void gameReload(std::string add, std::string name);
};

// game history format: length \n height \n numberOfPlayers \n playerName1:x1,y1 \n playerName2:x2,y2 \n numberOfSnakes \n x11,y11,x12,y12,x13,y13 \n
//                      x21,y21,x22,y22,x23,y23 \n numberOfLadders \n x11,y11,x12,y12,x13,y13 \n x21,y21,x22,y22,x23,y23 \n .
bool Save_Reload::gameSave(std::string add, std::string name, int length, int height, 
                            std::vector<std::tuple<int, int>>& players, std::vector<std::string>& players_names, 
                            std::vector<std::vector<std::tuple<int, int>>>& snakes, 
                            std::vector<std::vector<std::tuple<int, int>>>& ladders) { 

    // check if history already exists
    for (const auto & entry : std::filesystem::directory_iterator(add)){
        std::string records = std::string(entry.path());
        for (int i=0; i<4; i++)
            records.pop_back();
        records = records.substr(add.length());
        if (name == records)
            return false;
    }

    // start saving game
    std::ofstream fw(add+name+".txt", std::ofstream::out);
    if (fw.is_open()) {
        // write length, height, number of players
        fw << length << "\n" << height << "\n" << players.size() << "\n";
        // write players' names and positions
        for (int i=0; i<players.size(); i++) {
            fw << players_names[i] << ":" << std::get<0>(players[i]) << "," << std::get<1>(players[i]) << "\n";
        }
        // write snakes
        fw << snakes.size() << "\n";
        for (int i=0; i<snakes.size(); i++) {
            for (int j=0; j<snakes[i].size(); j++) {
                fw << std::get<0>(snakes[i][j]) << "," << std::get<1>(snakes[i][j]) << ",";
            }
            fw << "\n";
        }
        // write ladders
        fw << ladders.size() << "\n";
        for (int i=0; i<ladders.size(); i++) {
            for (int j=0; j<ladders[i].size(); j++) {
                fw << std::get<0>(ladders[i][j]) << "," << std::get<1>(ladders[i][j]) << ",";
            }
            fw << "\n";
        }
        fw << ".";
        fw.close();
        return true;
    }

    return false;
}

std::vector<std::string> Save_Reload::listGameHistory(std::string add) {
    std::vector<std::string> result;
    for (const auto & entry : std::filesystem::directory_iterator(add)){
        std::string records = std::string(entry.path());
        
        // process address
        records = records.substr(add.length());
        // ignore .DS_Store file
        if (records == ".DS_Store")
            continue;
        for (int i=0; i<4; i++)
            records.pop_back();
        
        result.push_back(records);
    }
    return result;    
}

bool Save_Reload::removeHistory(std::string add, std::string name) {
    bool r = std::filesystem::remove(add+name+".txt");
    return r;
}


int main() {
    Save_Reload obj;
    /*
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
    snake1.push_back(std::make_tuple(0, 1));
    snake1.push_back(std::make_tuple(1, 1));

    snake2.push_back(std::make_tuple(3, 0));
    snake2.push_back(std::make_tuple(3, 1));
    snake2.push_back(std::make_tuple(3, 2));

    snakes.push_back(snake1);
    snakes.push_back(snake2);

    ladder1.push_back(std::make_tuple(2, 0));
    ladder1.push_back(std::make_tuple(2, 1));
    ladder1.push_back(std::make_tuple(2, 2));

    ladder2.push_back(std::make_tuple(4, 0));
    ladder2.push_back(std::make_tuple(4, 1));
    ladder2.push_back(std::make_tuple(4, 2));

    ladders.push_back(ladder1);
    ladders.push_back(ladder2);  


    std::cout << obj.gameSave("./gameHistory/", "test_game", 10, 10, pos, pn, snakes, ladders);
    */
    std:: cout << obj.removeHistory("./gameHistory/", "test_game");
}

