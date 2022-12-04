import gameSaveReload;
import "iostream";
import "vector";
import "tuple";


int main() {
    // generate test data
    std::vector<std::tuple<int, int>> pos;
    std::vector<std::string> pn;
    std::vector<std::tuple<int, int>> snake1;
    std::vector<std::tuple<int, int>> snake2;
    std::vector<std::tuple<int, int>> ladder1;
    std::vector<std::tuple<int, int>> ladder2;
    std::vector<std::vector<std::tuple<int, int>>> snakes;
    std::vector<std::vector<std::tuple<int, int>>> ladders;

    std::tuple<int, int> p1 = std::make_tuple(1, 1);
    std::string p1_name = "P1";
    std::tuple<int, int> p2 = std::make_tuple(5, 2);
    std::string p2_name = "P2";
    pos.push_back(p1);
    pos.push_back(p2);
    pn.push_back(p1_name);
    pn.push_back(p2_name);

    snake1.push_back(std::make_tuple(0, 0));
    snake1.push_back(std::make_tuple(1, 1));
    snake2.push_back(std::make_tuple(3, 0));
    snake2.push_back(std::make_tuple(3, 2));
    snakes.push_back(snake1);
    snakes.push_back(snake2);

    ladder1.push_back(std::make_tuple(2, 0));
    ladder1.push_back(std::make_tuple(2, 2));
    ladder2.push_back(std::make_tuple(4, 0));
    ladder2.push_back(std::make_tuple(10, 2));
    ladders.push_back(ladder1);
    ladders.push_back(ladder2); 




    // start saving
    GameSaveAndReload::Save_Reload obj;
    if (obj.gameSave("./gameHistory/", "game1", 20, 20, pos, pn, snakes, ladders))
        std::cout << "Success \n";
    else
        std::cout << "Failed \n";
}