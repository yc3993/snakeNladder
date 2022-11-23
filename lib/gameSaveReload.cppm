export module gameSaveReload;

#import <string>
#import <fstream>
#import <filesystem>
#import <iostream>
#import <map>
#import <tuple>
#import <vector>


export class Save_Reload {
    public:
        bool gameSave(std::string add, std::string name, int length, int height, 
                        std::vector<std::tuple<int, int>>& players, std::vector<std::string>& players_names, 
                        std::vector<std::vector<std::tuple<int, int>>>& snakes, 
                        std::vector<std::vector<std::tuple<int, int>>>& ladders);
        std::vector<std::string> listGameHistory(std::string add);
        bool removeHistory(std::string add, std::string name);
        bool gameReload(std::string add, std::string name, int& length, int& height,
                        std::vector<std::tuple<int, int>>& players, std::vector<std::string>& players_names, 
                        std::vector<std::vector<std::tuple<int, int>>>& snakes, 
                        std::vector<std::vector<std::tuple<int, int>>>& ladders);
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

bool Save_Reload::gameReload(std::string add, std::string name, int& length, int& height,
                        std::vector<std::tuple<int, int>>& players, std::vector<std::string>& players_names, 
                        std::vector<std::vector<std::tuple<int, int>>>& snakes, 
                        std::vector<std::vector<std::tuple<int, int>>>& ladders) {
    

}
