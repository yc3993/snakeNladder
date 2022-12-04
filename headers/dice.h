class Dice {
    public:
        int getNum(int max_val);
};

int Dice::getNum(int max_val) {
    srand(time(NULL));
    int dice = 1 + std::rand()%max_val;
    return dice;
}