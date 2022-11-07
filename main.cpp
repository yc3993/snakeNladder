// import Dice;
#include <iostream>
#include <curses.h>
#include <unistd.h>

int kbhit()
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

int main() {
    int max_val = 6;

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
