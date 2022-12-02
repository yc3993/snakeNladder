//#import <vector>


//#include <iostream>

import BoardDesign;

import "iostream";
import "map";
import "tuple";
import "vector";
import "string";
import "chrono";

using namespace std;


int main() {
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

    auto start = std::chrono::system_clock::now(); 

    snl::Board board;
    //init the size of the board
    int tot = board.setArea(1000, 1000);
    
    std::cout << tot << "\n";

    board.setSnake(obstracle_snake);
    board.setLadder(obstracle_ladder);

    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    std::cout << elapsed.count() << '\n';
    

    return 0;
}



///opt/homebrew/opt/llvm/bin/clang++ -std=c++2a -fmodules -c -fprebuilt-module-path=. --precompile board.cppm -o boarddesign.pcm
///opt/homebrew/opt/llvm/bin/clang++ -std=c++20 -fmodules -c -fprebuilt-module-path=. module.cpp -o module.o
//time /opt/homebrew/opt/llvm/bin/clang++ -std=c++2a -fmodules -o module module.o *.pcm