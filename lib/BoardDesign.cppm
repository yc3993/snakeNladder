export module BoardDesign;

import "map";
import "tuple";
import "vector";
import "string";
import "sstream";
import "fstream";
import "filesystem";

using namespace std;

export namespace snl {
class Board {
    public:
        int length = 0;
        int height = 0;
        std::map<tuple<int, int>, tuple<int, int>> snake;
        std::map<tuple<int, int>, tuple<int, int>> ladder;
        int size = 0;        
        std::map<int, int> snake_int;
        std::map<int, int> ladder_int;
        //std::map<tuple, tuple> ladder;    

        int setArea(int n, int m);        
        bool setSnake(std::vector<std::vector<std::tuple<int, int>>> obstracle);
        bool setLadder(std::vector<std::vector<std::tuple<int, int>>> obstracle);  
        bool deleteObj(tuple<int, int> obstracle, string type);
        bool addObj(std::vector<std::tuple<int, int>> obstracle, string type); 
        // bool addObj(std::vector<int> obstracle); 
        bool setSnake_int(std::vector<std::tuple<int, int>> obstacle);
        bool setLadder_int(std::vector<std::tuple<int, int>> obstacle);  
        bool deleteObj_int(int obstacle, string type);
        bool addObj_int(tuple<int, int> obstacle, string type);    
    
};

// template<typename T>
int Board::setArea(int n, int m){
    size = n * m;
    height = n;
    length = m;
    return size;
}

bool Board::addObj(std::vector<std::tuple<int, int>> obstracle, string type) {
    if (type == "snake") {
        if (snake.find(obstracle[0]) == snake.end()) {
            snake[obstracle[0]] = obstracle[1];
            return true;
        }    
        return false;   
    }
    else if (type == "ladder") {
        if (ladder.find(obstracle[0]) == ladder.end()) {
            snake[obstracle[0]] = obstracle[1];
            return true;
        }
        return false;
    }
    return false;
}

bool Board::deleteObj(tuple<int, int> obstracle, string type) {
    if (type == "snake") {
        if (snake.find(obstracle) == snake.end()) {
            return false;
        }    
        snake.erase(obstracle);
        return true;   
    }
    else if (type == "ladder") {
        if (ladder.find(obstracle) == ladder.end()) {
            return false;
        }
        ladder.erase(obstracle);
        return true;
    }
    return false;
}


bool Board::setSnake(std::vector<std::vector<std::tuple<int, int>>> obstracle) {    
    std::map<tuple<int, int>, tuple<int, int>> snake;
    //std::unordered_map<tuple, tuple> ladder; 
    for (int i = 0; i < obstracle.size(); i++)
    {
        std::tuple start = obstracle[i][0];
        std::tuple end = obstracle[i][1];
        if (get<0>(start) >= 0 && get<1>(start) < height && get<0>(end) >= 0 && get<1>(end) < length && snake.find(start) == snake.end()) {
            snake[start] = end;            
        }
        else {
            return false;
        }
    }
    return true;
    
}

bool Board::setLadder(std::vector<std::vector<std::tuple<int, int>>> obstracle) {    
    std::map<tuple<int, int>, tuple<int, int>> ladder;
    //std::unordered_map<tuple, tuple> ladder; 
    for (int i = 0; i < obstracle.size(); i++)
    {
        std::tuple start = obstracle[i][0];
        std::tuple end = obstracle[i][1];
        if (get<0>(start) >= 0 && get<1>(start) < height && get<0>(end) >= 0 && get<1>(end) < length) {
            ladder[start] = end;            
        }
        else {
            return false;
        }
    }
    return true;
    
}

bool Board::addObj_int(tuple<int, int> obstacle, string type) {
    if (type == "snake") {
        if (snake_int.find(get<0>(obstacle)) == snake_int.end()) {
            snake_int[get<0>(obstacle)] = get<1>(obstacle);
            return true;
        }    
        return false;   
    }
    else if (type == "ladder") {
        if (ladder_int.find(get<0>(obstacle)) == ladder_int.end()) {
            snake_int[get<0>(obstacle)] = get<1>(obstacle);
            return true;
        }
        return false;
    }
    return false;
}

bool Board::deleteObj_int(int obstacle, string type) {
    if (type == "snake") {
        if (snake_int.find(obstacle) == snake_int.end()) {
            return false;
        }    
        snake_int.erase(obstacle);
        return true;   
    }
    else if (type == "ladder") {
        if (ladder_int.find(obstacle) == ladder_int.end()) {
            return false;
        }
        ladder_int.erase(obstacle);
        return true;
    }
    return false;
}

// bool Board::setSnake(std::vector<std::vector<std::tuple<int, int>>> obstracle) {    
//     for (int i = 0; i < obstracle.size(); i++)
//     {
//         tuple 
//     }
//     return true;
    
// }

bool Board::setSnake_int(std::vector<std::tuple<int, int>> obstacle) {    
    //std::map<int, int> snake;
    //std::unordered_map<tuple, tuple> ladder; 
    for (int i = 0; i < obstacle.size(); i++)
    {
        int start = get<0>(obstacle[i]);
        int end = get<1>(obstacle[i]);
        if (start >= 0 && start < size && end >= 0 && end < size && start > end) {
            snake_int[start] = end;            
        }
        else {
            return false;
        }
    }
    return true;    
}

bool Board::setLadder_int(std::vector<std::tuple<int, int>> obstacle) {    
    //std::map<int, int> ladder;
    //std::unordered_map<tuple, tuple> ladder; 
    for (int i = 0; i < obstacle.size(); i++)
    {
        int start = get<0>(obstacle[i]);
        int end = get<1>(obstacle[i]);
        if (start >= 0 && start < size && end >= 0 && end < size && start < end) {
            ladder_int[start] = end;            
        }
        else {
            return false;
        }
    }
    return true;
    
}

class Save_Reload {
    public:
    
        bool gameSave(std::string add, std::string name, int length, int height, 
                        std::vector<std::tuple<int, int>>& players, std::vector<std::string>& players_names, 
                        std::vector<std::vector<std::tuple<int, int>>>& snakes, 
                        std::vector<std::vector<std::tuple<int, int>>>& ladders);
        bool gameSave_int(std::string add, std::string name, int length, int height, 
                        std::vector<int>& players, std::vector<std::string>& players_names, 
                        std::vector<std::tuple<int, int>>& snakes, 
                        std::vector<std::tuple<int, int>>& ladders);
        std::vector<std::string> listGameHistory(std::string add);
        bool removeHistory(std::string add, std::string name);
        bool gameReload(std::string add, std::string name, int& length, int& height,
                        std::vector<std::tuple<int, int>>& players, std::vector<std::string>& players_names, 
                        std::vector<std::vector<std::tuple<int, int>>>& snakes, 
                        std::vector<std::vector<std::tuple<int, int>>>& ladders);
        bool gameReload_int(std::string add, std::string name, int& length, int& height,
                        std::vector<int>& players, std::vector<std::string>& players_names,
                        std::vector<std::tuple<int, int>>& snakes, 
                        std::vector<std::tuple<int, int>>& ladders);
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

bool gameSave_int(std::string add, std::string name, int length, int height, 
                        std::vector<int>& players, std::vector<std::string>& players_names, 
                        std::vector<std::tuple<int, int>>& snakes, 
                        std::vector<std::tuple<int, int>>& ladders) { 

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
            fw << players_names[i] << ":" << players[i] << "," << players[i] << "\n";
        }
        // write snakes
        fw << snakes.size() << "\n";
        for (int i=0; i<snakes.size(); i++) {            
            fw << std::get<0>(snakes[i]) << "," << std::get<1>(snakes[i]) << ",";            
            fw << "\n";
        }
        // write ladders
        fw << ladders.size() << "\n";
        for (int i=0; i<ladders.size(); i++) {
            
            fw << std::get<0>(ladders[i]) << "," << std::get<1>(ladders[i]) << ",";
            
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
    
    std::fstream history;
    history.open(add+name+".txt",std::ios::in);
    if (history.is_open()) {
        std::string line;

        // get length
        std::getline(history, line);
        length = std::stoi(line);

        // get height
        std::getline(history, line);
        height = std::stoi(line);

        // get players
        std::getline(history, line);
        int numOfPlayers = std::stoi(line);
        for (int i=0; i<numOfPlayers; i++) {
            std::getline(history, line);
            std::stringstream sstr(line);
            std::string substr;
            // get players names
            std::getline(sstr, substr, ':');
            players_names.push_back(substr);
            //get players positions
            std::vector<int> temppos;
            while(sstr.good()) {
                getline(sstr, substr, ',');
                temppos.push_back(std::stoi(substr));
            }
            if (temppos.size() != 2) {
                return false;
            }
            players.push_back(std::make_tuple(temppos[0], temppos[1]));
        }

        // get snakes
        std::getline(history, line);
        int numOfSnakes = std::stoi(line);
        for (int i=0; i<numOfSnakes; i++) {
            std::getline(history, line);
            line.pop_back();
            std::stringstream sstr(line);
            std::string substr;
            std::vector<std::tuple<int, int>> snake;
            while(sstr.good()) {
                getline(sstr, substr, ',');
                int x = std::stoi(substr);
                getline(sstr, substr, ',');
                int y = std::stoi(substr);
                snake.push_back(std::make_tuple(x, y));
            }
            snakes.push_back(snake);
        }

        // get ladders
        std::getline(history, line);
        int numOfLadders = std::stoi(line);
        for (int i=0; i<numOfLadders; i++) {
            std::getline(history, line);
            line.pop_back();
            std::stringstream sstr(line);
            std::string substr;
            std::vector<std::tuple<int, int>> ladder;
            while(sstr.good()) {
                getline(sstr, substr, ',');
                int x = std::stoi(substr);
                getline(sstr, substr, ',');
                int y = std::stoi(substr);
                ladder.push_back(std::make_tuple(x, y));            
            }
            ladders.push_back(ladder);
        }
        return true;
    }
    else {
        return false;
    }
}

bool gameReload_int(std::string add, std::string name, int& length, int& height,
                        std::vector<int>& players, std::vector<std::string>& players_names,
                        std::vector<std::tuple<int, int>>& snakes, 
                        std::vector<std::tuple<int, int>>& ladders) {
    
    std::fstream history;
    history.open(add+name+".txt",std::ios::in);
    if (history.is_open()) {
        std::string line;

        // get length
        std::getline(history, line);
        length = std::stoi(line);

        // get height
        std::getline(history, line);
        height = std::stoi(line);

        // get players
        std::getline(history, line);
        int numOfPlayers = std::stoi(line);
        for (int i=0; i<numOfPlayers; i++) {
            std::getline(history, line);
            std::stringstream sstr(line);
            std::string substr;
            // get players names
            std::getline(sstr, substr, ':');
            players_names.push_back(substr);
            //get players positions
            std::vector<int> temppos;
            while(sstr.good()) {
                getline(sstr, substr, ',');
                players.push_back(std::stoi(substr));
            }           
        }

        // get snakes
        std::getline(history, line);
        int numOfSnakes = std::stoi(line);
        for (int i=0; i<numOfSnakes; i++) {
            std::getline(history, line);
            line.pop_back();
            std::stringstream sstr(line);
            std::string substr;
            std::tuple<int, int> snake;
            while(sstr.good()) {
                getline(sstr, substr, ',');
                int x = std::stoi(substr);
                getline(sstr, substr, ',');
                int y = std::stoi(substr);
                snake = std::make_tuple(x, y);
            }
            snakes.push_back(snake);
        }

        // get ladders
        std::getline(history, line);
        int numOfLadders = std::stoi(line);
        for (int i=0; i<numOfLadders; i++) {
            std::getline(history, line);
            line.pop_back();
            std::stringstream sstr(line);
            std::string substr;
            std::tuple<int, int> ladder;
            while(sstr.good()) {
                getline(sstr, substr, ',');
                int x = std::stoi(substr);
                getline(sstr, substr, ',');
                int y = std::stoi(substr);
                ladder = std::make_tuple(x, y);            
            }
            ladders.push_back(ladder);
        }
        return true;
    }
    else {
        return false;
    }
}
}






