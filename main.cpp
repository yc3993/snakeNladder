#import <string>
#import <fstream>
#import <iostream>
#import <map>
#import <tuple>
#import <vector>
#import <filesystem>


class Save_Reload {
    public:
        bool gameSave(std::string add, std::string name, int length, int height);
};

bool Save_Reload::gameSave(std::string add, std::string name, int length, int height) { 
    // check if history already exists
    for (const auto & entry : std::filesystem::directory_iterator(add)){
        std::string records = std::string(entry.path());
        for (int i=0; i<4; i++)
            records.pop_back();
        records = records.substr(add.length());
        if (name == records)
            return false;
    }

    std::ofstream fw(add+name+".txt", std::ofstream::out);
    if (fw.is_open()) {
        fw << "abc" << "\n";
        fw << "a";
        fw.close();
    }

    return true;
}


int main() {
    Save_Reload obj;
    std::cout<< obj.gameSave("./gameHistory/", "game2", 1, 1);
    /*
    std::ofstream fw("./test.txt", std::ofstream::out);
    if (fw.is_open()) {
        fw << "abc" << "\n";
        fw << "a";
        fw.close();
    }
    */
}

