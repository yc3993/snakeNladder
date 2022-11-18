export module gameSaveReload;

#import <string>
#import <fstream>
#import <iostream>
#import <map>
#import <tuple>
#import <vector>


export class Save_Reload {
    public:
        bool gameSave(std::string add, std::string name, int length, int height);
        std::vector<std::string> listGameHistory(std::string add);
        void gameReload(std::string add, std::string name);
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

    // start saving game
    std::ofstream fw(add+name+".txt", std::ofstream::out);
    if (fw.is_open()) {
        fw << "abc" << "\n";
        fw << "a";
        fw.close();
    }

    return true;
}

std::vector<std::string> Save_Reload::listGameHistory(std::string add) {
    std::vector<std::string> result;
    for (const auto & entry : std::filesystem::directory_iterator(add)){
        std::string records = std::string(entry.path());
        
        // process address
        records = records.substr(add.length());
        // ignore .DS_Store file
        if (records == ".DS_Store")
            continue;
        for (int i=0; i<4; i++)
            records.pop_back();
        
        result.push_back(records);
    }
    return result;    
}