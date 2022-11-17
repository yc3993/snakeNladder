export module BoardDesign;

#import "map"
#import "tuple"
#import "vector"

using namespace std;


export namespace snl {
class Board {
    public:
        int length = 0;
        int height = 0;
        std::map<tuple<int, int>, tuple<int, int>> snake;
        std::map<tuple<int, int>, tuple<int, int>> ladder;
        //std::map<tuple, tuple> ladder;    

        int setArea(int n, int m);        
        bool setSnake(std::vector<std::vector<std::tuple<int, int>>> obstracle);
        bool setLadder(std::vector<std::vector<std::tuple<int, int>>> obstracle);  
        bool deleteObj(tuple<int, int> obstracle, string type);
        // bool addObj(std::vector<int> obstracle);    
    
};

// template<typename T>
int Board::setArea(int n, int m){
    int tot = n * m;
    height = n;
    length = m;
    return tot;
    // for (int i = 0; i < tot; i++)
    // {
    //     board.push_back(1);
    // }
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

// bool Board::setSnake(std::vector<std::vector<std::tuple<int, int>>> obstracle) {    
//     for (int i = 0; i < obstracle.size(); i++)
//     {
//         tuple 
//     }
//     return true;
    
// }

bool Board::setSnake(std::vector<std::vector<std::tuple<int, int>>> obstracle) {    
    std::map<tuple<int, int>, tuple<int, int>> snake;
    //std::unordered_map<tuple, tuple> ladder; 
    for (int i = 0; i < obstracle.size(); i++)
    {
        std::tuple start = obstracle[i][0];
        std::tuple end = obstracle[i][1];
        if (get<0>(start) >= 0 && get<1>(start) < height && get<0>(end) >= 0 && get<1>(end) < length) {
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

// bool Board::setLadder(std::vector<std::vector<int>> obstracle, int num) {    
//     for (int i = 0; i < num; i++)
//     {
//         if (obstracle[i][0] >= obstracle[i][1] || obstracle[i][0] < 0 || obstracle[i][1] > size)
//         {
//             return false;
//         }
        
//         ladder.push_back(obstracle[i]);
//     }
//     return true;
    
// }
}






