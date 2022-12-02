//#import <vector>


//#include <iostream>

import BoardDesign;
import gameSaveReload;

import "iostream";
import "map";
import "tuple";
import "vector";
import "string";
import "chrono";

using namespace std;


int main() {
    // variables used for game board generation
    std::vector<std::vector<std::tuple<int, int>>> obstracle_snake;
    for (int i = 0; i < 500; i ++) {
        std::vector<std::tuple<int, int>> node;
    //for (int j; j < 2; j ++) {
        tuple<int, int> start;
        tuple<int, int> end;
        start = make_tuple(i, 2);
        end = make_tuple(i + 1, 4);
    //cout << start << '\n';
        node.push_back(start);
        node.push_back(end);
        obstracle_snake.push_back(node);
    //}
    }

    std::vector<std::vector<std::tuple<int, int>>> obstracle_ladder;
    for (int i = 1; i < 501; i ++) {
        std::vector<std::tuple<int, int>> node;
    //for (int j; j < 2; j ++) {
        tuple<int, int> start;
        tuple<int, int> end;
        start = make_tuple(i, 3);
        end = make_tuple(i - 1, 2);
    //cout << start << '\n';
        node.push_back(start);
        node.push_back(end);
        obstracle_ladder.push_back(node);
    //}
    }

    // variables used for saving
    GameSaveAndReload::Save_Reload game_obj;
    std::vector<std::tuple<int, int>> pos;
    std::vector<std::string> pn;
    
    for (int i = 0; i < 1; i ++) {
        std::tuple<int, int> p = std::make_tuple(i, 1);
        std::string p_name = "player" + std::to_string(i);
        pos.push_back(p);
        pn.push_back(p_name);
    }
    
    // variables used for reloading
    int height;
    int length;
    std::vector<std::tuple<int, int>> players;
    std::vector<std::string> players_names;
    std::vector<std::vector<std::tuple<int, int>>> snakes;
    std::vector<std::vector<std::tuple<int, int>>> ladders;

    // test board generation time: 
    auto start = std::chrono::system_clock::now(); 

    snl::Board board;
    //init the size of the board
    int tot = board.setArea(1000, 1000);
    
    std::cout << tot << "\n";

    board.setSnake(obstracle_snake);
    board.setLadder(obstracle_ladder);

    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    std::cout << "Board Generation Time: " << elapsed.count() << '\n';

    // test game saving time: 
    auto start2 = std::chrono::system_clock::now(); 

    game_obj.gameSave("./gameHistory/", "game2", 1000, 1000, pos, pn, obstracle_snake, obstracle_ladder);

    auto end2 = std::chrono::system_clock::now();

    auto elapsed2 = end2 - start2;
    std::cout << "Game Saving Time" << elapsed2.count() << '\n';

    // test game reloading time
    auto start3 = std::chrono::system_clock::now(); 

    obj.gameReload("./gameHistory/", "game2", length, height, players, players_names, snakes, ladders);

    auto end3 = std::chrono::system_clock::now();

    auto elapsed3 = end3 - start3;
    std::cout << "Game Reloading Time" << elapsed3.count() << '\n';


    return 0;
}



///opt/homebrew/opt/llvm/bin/clang++ -std=c++2a -fmodules -c -fprebuilt-module-path=. --precompile board.cppm -o boarddesign.pcm
///opt/homebrew/opt/llvm/bin/clang++ -std=c++20 -fmodules -c -fprebuilt-module-path=. module.cpp -o module.o
//time /opt/homebrew/opt/llvm/bin/clang++ -std=c++2a -fmodules -o module module.o *.pcm