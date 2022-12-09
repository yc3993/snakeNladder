#include "dice.h"
#include <QPen>
#include <QGraphicsLineItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include "QDebug"
#include "diceRoll.h"
#include "QtGui/qevent.h"
#include "board.h"
#include <unistd.h>
using namespace std;
int total = 0;
QGraphicsPixmapItem* char_1;
QGraphicsPixmapItem* dice;
int rectSize = 60;

void getPositions(int total, double *char_x, double *char_y){
    //Get the x and y coordinate of the player
    if(total<10){
        *char_x = total-1;
        *char_y = 0;
    }
    else{
        int rollTen = total/10;
        int rollOne = total%10;
        if(rollOne == 0){
            if(rollTen%2 == 0){
                *char_x = 0;
                *char_y = -rollTen + 1;
            }
            else if(rollTen%2 != 0){
                *char_x = 9;
                *char_y = -rollTen + 1;
            }
        }
        else{
            if(rollTen%2 == 0){
                *char_x = rollOne-1;
                *char_y = -rollTen;
            }
            else if(rollTen%2 != 0){
                *char_x = 10 - rollOne;
                *char_y = -rollTen;
            }
        }

    }
}

void diceRoll::setCharacterPosition(double char_x, double char_y){
    //set the player's location to the scene
    if (char_1){
        scene()->removeItem(char_1);
    }
    char_1 = new QGraphicsPixmapItem(QPixmap("/Users/tejasrikurapati/Untitled/pics/ghost.png"));
    char_1->setScale(0.1);
    scene()->addItem(char_1);
    char_1->moveBy((double)char_x*rectSize, (double)char_y*rectSize);
}

void diceRoll::showDice(int roll) {
    //change the dice image
    if (dice) {
        scene()->removeItem(dice);
    }
    string path = "/Users/tejasrikurapati/Untitled/pics/Dice-"+ to_string(roll) +"-b.svg.png";
    dice = new QGraphicsPixmapItem(QPixmap(path.c_str()));
    dice->setPos(620, -100);
    dice->setScale(0.1);
    scene()->addItem(dice);
}

bool diceRoll::event(QEvent *event)
{
    vector<tuple<int, int>> ladder_list = board.ui_ladder;
    vector<tuple<int, int>> snake_list = board.ui_snake;
    for(int i = 0; i < ladder_list.size(); i++){
            qDebug() << "ladder from: "<< get<0>(ladder_list[i])  << "to: " << get<1>(ladder_list[i]);
    }
    for(int i = 0; i < snake_list.size(); i++){
            qDebug() << "snake from: "<< get<0>(snake_list[i])  << "to: " << get<1>(snake_list[i]);
    }
    if(event->type() == QEvent::GrabMouse){

        if (total >= 90)
            return 0;
        Dice dice;
        int roll = dice.getNum(6);
//        int roll =  1 + arc4random()%6;
        string text = "Dice Roll: " + to_string(roll) + "\n\n\n\n";
        const char *t = text.c_str();
        setPlainText(t);
        showDice(roll);
        setDefaultTextColor(QColorConstants::Black);
        int q = total + roll;
        if(q == 90){
            setDefaultTextColor(QColorConstants::Svg::darkgoldenrod);
            string textWin =  "You win! 🎉💯";
            const char *win = textWin.c_str();
            setScale(1.4);
            setTextWidth(100);
            setPlainText(win);
        }
        else if (total+roll > 90) {
            string textTryAgain = "Dice Roll: " + to_string(roll) + "\nTry Again!\n\n\n";
            const char *t1 = textTryAgain.c_str();
            setPlainText(t1);
            return 0;
        }

        total = total + roll;
        int temp = total;

        double char_x, char_y;
        getPositions(total, &char_x, &char_y);
        setCharacterPosition(char_x, char_y);

        unsigned int microseconds = 5e5;

        //if ladder is present
        for(int i = 0; i < ladder_list.size(); i++){
            if (get<0>(ladder_list[i])==total) {
                total = get<1>(ladder_list[i]);
                setDefaultTextColor(QColorConstants::DarkGreen);
                string ladder = "Yay! You climbed a 🪜!";
                setPlainText(ladder.c_str());
                qDebug() << "reached ladder at position: " << temp << "and went to: " << total ;
                usleep(microseconds);
                getPositions(total, &char_x, &char_y);
                setCharacterPosition(char_x, char_y);
            }
        }
        //if snake is present
        for(int i = 0; i < snake_list.size(); i++){
            if (get<0>(snake_list[i])==total) {
                total = get<1>(snake_list[i]);
                setDefaultTextColor(QColorConstants::Red);
                string snake = "Opps! A 🐍 bit you :(";
                setPlainText(snake.c_str());
                qDebug() << "reached snake";
                usleep(microseconds);
                getPositions(total, &char_x, &char_y);
                setCharacterPosition(char_x, char_y);
            }
        }

    }


}
