export module DiceLib;
import "curses.h";
import "iostream";
import "unistd.h";

export namespace DiceLib{
    class Dice {
        public:
            int getNum_with_pause(int max_val);
            int getNum(int max_val);
            
        private:
            int kbhit();
    };


    int Dice::kbhit()
    {
        int ch = getch();

        if (ch != ERR) {
            ungetch(ch);
            return 1;
        } 
        else {
            return 0;
        }
    }

    int Dice::getNum_with_pause(int max_val) {
        srand(time(NULL));
        int dice = 1 + std::rand()%max_val;

        initscr();
        cbreak();
        noecho();
        nodelay(stdscr, TRUE);
        scrollok(stdscr, TRUE);

        while (1) {
            if (dice > max_val) {
                dice = 1;
            }
            if (kbhit()) {
                break;
            } 
            dice ++;
        }

        return dice;
    }

    int Dice::getNum(int max_val) {
        srand(time(NULL));
        int dice = 1 + std::rand()%max_val;
        return dice;
    }
}