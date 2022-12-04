import gameSaveReload;
import "iostream";


int main() {
    GameSaveAndReload::Save_Reload obj;
    if (obj.removeHistory("./gameHistory/", "game3"))
        std::cout << "Success \n";
    else
        std::cout << "Failed \n";
}