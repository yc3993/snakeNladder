export module DiceLib;
#import <curses.h>
#import <iostream>
#import <unistd.h>

export namespace DiceLib{
    class Dice {
        public:
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

    int Dice::getNum(int max_val) {
        srand(time(NULL));
        int dice = 1 + std::rand()%max_val;

        initscr();
        cbreak();
        noecho();
        nodelay(stdscr, TRUE);
        scrollok(stdscr, TRUE);
        printw("Press any key to stop the dice\n");

        while (1) {
            if (dice > max_val) {
                dice = 1;
            }
            if (kbhit()) {
                printw("%d\r", dice);
                refresh();
                break;
            } 
            else {
                printw("%d\r", dice);
                refresh();
            }
            dice ++;
        }
        std::cout << "\nyour dice:" << dice <<std::endl;

        return dice;
    }
}