#include <map>
#include <tuple>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <filesystem>
#include <cstdlib>
#include <iostream>

using namespace std;

//extern std::vector<std::tuple<int, int>> ui_snake;
//extern std::vector<std::tuple<int, int>> ui_ladder;

class Board {
    public:
        int length = 0;
        int height = 0;        
        std::map<tuple<int, int>, tuple<int, int>> snake;
        std::map<tuple<int, int>, tuple<int, int>> ladder;
        int size = 1;        
        std::map<int, int> snake_int;
        std::map<int, int> ladder_int;
        //std::map<tuple, tuple> ladder;  
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

extern Board board;


// template<typename T>
