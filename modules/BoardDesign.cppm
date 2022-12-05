export module BoardDesign;

import "map";
import "tuple";
import "vector";
import "string";

using namespace std;


export namespace snl {
class Board {
    public:
    //parameters of the game board
        int length = 0;
        int height = 0;  
        int size = 1;      
        std::map<tuple<int, int>, tuple<int, int>> snake;
        std::map<tuple<int, int>, tuple<int, int>> ladder;                
        std::map<int, int> snake_int;
        std::map<int, int> ladder_int;
        std::vector<std::tuple<int, int>> ui_snake;
        std::vector<std::tuple<int, int>> ui_ladder;
          

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
        bool random_insert_snake();
        bool random_insert_ladder();
    
};

// template<typename T>
int Board::setArea(int n, int m){
    size = n * m;
    height = n;
    length = m;
    return size;
}

bool Board::random_insert_snake(){
    srand((unsigned) time(NULL));
    int start = rand() % size;
    int end = rand() % size;
    while (start <= end + 10 || snake_int.find(start) != snake_int.end()) {
        start = rand() % size;
        end = rand() % size;
    }
    //cout << "start" << start << end << "\n";

    std::tuple<int, int> snake_pos = make_tuple(start, end);
    //snake_int[start] = end;
    if (addObj_int(snake_pos, "snake")) {
        return true;
    };    
    return false;
}

bool Board::random_insert_ladder(){
    srand((unsigned) time(NULL));
    int start = rand() % size;
    int end = rand() % size;
    while (end <= start + 10 || ladder_int.find(start) != ladder_int.end()) {
        start = rand() % size;
        end = rand() % size;
    }
    //cout << "start" << start << end << "\n";

    std::tuple<int, int> ladder_pos = make_tuple(start, end);
    //snake_int[start] = end;
    if (addObj_int(ladder_pos, "ladder")) {
        return true;
    };    
    return false;
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
            ui_snake.push_back(obstacle);
            return true;
        }    
        return false;   
    }
    else if (type == "ladder") {
        if (ladder_int.find(get<0>(obstacle)) == ladder_int.end()) {
            ladder_int[get<0>(obstacle)] = get<1>(obstacle);
            ui_ladder.push_back(obstacle);
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
    //ui_snake = obstacle;
    for (int i = 0; i < obstacle.size(); i++)
    {
        int start = get<0>(obstacle[i]);
        int end = get<1>(obstacle[i]);
        if (start >= 0 && start < size && end >= 0 && end < size && start > end && snake_int.find(start) == snake_int.end()) {
            snake_int[start] = end; 
            tuple<int, int> snake_pos = make_tuple(start, end);
            ui_snake.push_back(snake_pos);        
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
    ui_ladder = obstacle;
    for (int i = 0; i < obstacle.size(); i++)
    {
        int start = get<0>(obstacle[i]);
        int end = get<1>(obstacle[i]);
        if (start >= 0 && start < size && end >= 0 && end < size && start < end && ladder_int.find(start) == ladder_int.end()) {
            ladder_int[start] = end;            
        }
        else {
            return false;
        }
    }
    return true;
    
}
}