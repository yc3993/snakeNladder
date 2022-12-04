import gameSaveReload;
import "iostream";


int main() {
    GameSaveAndReload::Save_Reload obj;
    for (std::string r : obj.listGameHistory("./gameHistory/")) {
        std::cout << r << "\n";
    }
}