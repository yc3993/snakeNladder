export module BoardDesign;

#import "vector"
export namespace snl {
class Board {
    public:
        int length;
        int height;
        std::vector<std::vector<int>> snake;
        std::vector<std::vector<int>> ladder;    

        int setArea(int n, int m);        
        bool setSnake(std::vector<std::vector<int>> obstracle, int num);
        bool setLadder(std::vector<std::vector<int>> obstracle, int num);      
    
};

// template<typename T>
int Board::setArea(int n, int m){
    int tot = n * m;
    length = n;
    height = m;
    return tot;
    // for (int i = 0; i < tot; i++)
    // {
    //     board.push_back(1);
    // }
}

bool Board::setSnake(std::vector<std::vector<int>> obstracle, int num) {    
    for (int i = 0; i < num; i++)
    {
        if (obstracle[i][0] >= obstracle[i][1] || obstracle[i][0] < 0 || obstracle[i][1] > size)
        {
            return false;
        }
        
        snake.push_back(obstracle[i]);
    }
    return true;
    
}

bool Board::setLadder(std::vector<std::vector<int>> obstracle, int num) {    
    for (int i = 0; i < num; i++)
    {
        if (obstracle[i][0] >= obstracle[i][1] || obstracle[i][0] < 0 || obstracle[i][1] > size)
        {
            return false;
        }
        
        ladder.push_back(obstracle[i]);
    }
    return true;
    
}
}






