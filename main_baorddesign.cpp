import BoardDesign;   // import the namespace module

import "iostream";
import "map";
import "tuple";
import "vector";
import "string";
import "chrono";

using namespace std; 


int main() {
    std::vector<std::vector<std::tuple<int, int>>> obstracle_snake;  //creating the vector for the position of snake
    for (int i = 0; i < 3; i ++) {
        std::vector<std::tuple<int, int>> node;
        tuple<int, int> start;
        tuple<int, int> end;
        start = make_tuple(i, 2);
        end = make_tuple(i + 1, 4);  //set the snake and ladder with random postion. Just for testing
        node.push_back(start);
        node.push_back(end);
        obstracle_snake.push_back(node);
    }  

    std::vector<std::vector<std::tuple<int, int>>> obstracle_ladder;  //creating the vector for the position of ladder
    for (int i = 1; i < 4; i ++) {
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

    //auto start = std::chrono::system_clock::now(); 

    snl::Board board;
    //init the size of the board
    int tot = board.setArea(10, 10);
    
    //std::cout << tot << "\n"; designer can see the total size of the game board

    board.setSnake(obstracle_snake); //setting the hashmap for snake
    board.setLadder(obstracle_ladder); //setting the hashmap for ladder

    tuple<int, int> test_for_deletion;
    test_for_deletion = make_tuple(1, 2);

    board.deleteObj(test_for_deletion, "ladder");  //deleting the spot

    return 0;
}


// 1.   /opt/homebrew/opt/llvm/bin/clang++ -std=c++20 -xc++-system-header --precompile iostream -o iostream.pcm
// 2.   /opt/homebrew/opt/llvm/bin/clang++ -std=c++2a -fmodules -c -fprebuilt-module-path=. --precompile boardDesign.cppm -o boardDesign.pcm
// 3.   /opt/homebrew/opt/llvm/bin/clang++ -std=c++20 -fmodules -c -fprebuilt-module-path=. main.cpp -o main.o
// 4.   /opt/homebrew/opt/llvm/bin/clang++ -std=c++2a -fmodules -o main main.o *.pcm