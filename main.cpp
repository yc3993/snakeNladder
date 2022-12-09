#include <QDebug>
#include "scene.h"
#include "diceRoll.h"
#include <QKeyEvent>
#include <QPen>
#include <QGraphicsLineItem>
#include <QPainter>
#include <QGraphicsTextItem>
#include <QString>
#include <QLabel>
#include <QPixmap>
#include <QGraphicsPixmapItem>//>
#include <QBrush>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <string>
#include <iostream>
#include <vector>
#include "QtWidgets/qgraphicsscene.h"
#include <map>
#include <tuple>
#include "dice.h"
#include <cstdlib>
#include "board.h"
#include <sstream>
#include <fstream>
#include <filesystem>
#include <unistd.h>
#include <curses.h>

using namespace std;

class SnakesAndLadders{
    //set the board game, ladders, and snake

public:

    int rectSize = 60;
    QGraphicsTextItem* mainText = new QGraphicsTextItem();
    QGraphicsRectItem* rect1 = new QGraphicsRectItem();
    QGraphicsRectItem* rect2 = new QGraphicsRectItem();
    QGraphicsRectItem* rect3 = new QGraphicsRectItem();
    QGraphicsRectItem* rect4 = new QGraphicsRectItem();
    QGraphicsRectItem* rect5 = new QGraphicsRectItem();
    QGraphicsRectItem* rect6 = new QGraphicsRectItem();
    QGraphicsRectItem* rect7 = new QGraphicsRectItem();
    QGraphicsRectItem* rect8 = new QGraphicsRectItem();
    QGraphicsRectItem* rect9 = new QGraphicsRectItem();
    QGraphicsRectItem* rect10 = new QGraphicsRectItem();
    QGraphicsRectItem* rect11 = new QGraphicsRectItem();
    QGraphicsRectItem* rect12 = new QGraphicsRectItem();
    QGraphicsRectItem* rect13 = new QGraphicsRectItem();
    QGraphicsRectItem* rect14 = new QGraphicsRectItem();
    QGraphicsRectItem* rect15 = new QGraphicsRectItem();
    QGraphicsRectItem* rect16 = new QGraphicsRectItem();
    QGraphicsRectItem* rect17 = new QGraphicsRectItem();
    QGraphicsRectItem* rect18 = new QGraphicsRectItem();
    QGraphicsRectItem* rect19 = new QGraphicsRectItem();
    QGraphicsRectItem* rect20 = new QGraphicsRectItem();
    QGraphicsRectItem* rect21 = new QGraphicsRectItem();
    QGraphicsRectItem* rect22 = new QGraphicsRectItem();
    QGraphicsRectItem* rect23 = new QGraphicsRectItem();
    QGraphicsRectItem* rect24 = new QGraphicsRectItem();
    QGraphicsRectItem* rect25 = new QGraphicsRectItem();
    QGraphicsRectItem* rect26 = new QGraphicsRectItem();
    QGraphicsRectItem* rect27 = new QGraphicsRectItem();
    QGraphicsRectItem* rect28 = new QGraphicsRectItem();
    QGraphicsRectItem* rect29 = new QGraphicsRectItem();
    QGraphicsRectItem* rect30 = new QGraphicsRectItem();
    QGraphicsRectItem* rect31 = new QGraphicsRectItem();
    QGraphicsRectItem* rect32 = new QGraphicsRectItem();
    QGraphicsRectItem* rect33 = new QGraphicsRectItem();
    QGraphicsRectItem* rect34 = new QGraphicsRectItem();
    QGraphicsRectItem* rect35 = new QGraphicsRectItem();
    QGraphicsRectItem* rect36 = new QGraphicsRectItem();
    QGraphicsRectItem* rect37 = new QGraphicsRectItem();
    QGraphicsRectItem* rect38 = new QGraphicsRectItem();
    QGraphicsRectItem* rect39 = new QGraphicsRectItem();
    QGraphicsRectItem* rect40 = new QGraphicsRectItem();
    QGraphicsRectItem* rect41 = new QGraphicsRectItem();
    QGraphicsRectItem* rect42 = new QGraphicsRectItem();
    QGraphicsRectItem* rect43 = new QGraphicsRectItem();
    QGraphicsRectItem* rect44 = new QGraphicsRectItem();
    QGraphicsRectItem* rect45 = new QGraphicsRectItem();
    QGraphicsRectItem* rect46 = new QGraphicsRectItem();
    QGraphicsRectItem* rect47 = new QGraphicsRectItem();
    QGraphicsRectItem* rect48 = new QGraphicsRectItem();
    QGraphicsRectItem* rect49 = new QGraphicsRectItem();
    QGraphicsRectItem* rect50 = new QGraphicsRectItem();
    QGraphicsRectItem* rect51 = new QGraphicsRectItem();
    QGraphicsRectItem* rect52 = new QGraphicsRectItem();
    QGraphicsRectItem* rect53 = new QGraphicsRectItem();
    QGraphicsRectItem* rect54 = new QGraphicsRectItem();
    QGraphicsRectItem* rect55 = new QGraphicsRectItem();
    QGraphicsRectItem* rect56 = new QGraphicsRectItem();
    QGraphicsRectItem* rect57 = new QGraphicsRectItem();
    QGraphicsRectItem* rect58 = new QGraphicsRectItem();
    QGraphicsRectItem* rect59 = new QGraphicsRectItem();
    QGraphicsRectItem* rect60 = new QGraphicsRectItem();
    QGraphicsRectItem* rect61 = new QGraphicsRectItem();
    QGraphicsRectItem* rect62 = new QGraphicsRectItem();
    QGraphicsRectItem* rect63 = new QGraphicsRectItem();
    QGraphicsRectItem* rect64 = new QGraphicsRectItem();
    QGraphicsRectItem* rect65 = new QGraphicsRectItem();
    QGraphicsRectItem* rect66 = new QGraphicsRectItem();
    QGraphicsRectItem* rect67 = new QGraphicsRectItem();
    QGraphicsRectItem* rect68 = new QGraphicsRectItem();
    QGraphicsRectItem* rect69 = new QGraphicsRectItem();
    QGraphicsRectItem* rect70 = new QGraphicsRectItem();
    QGraphicsRectItem* rect71 = new QGraphicsRectItem();
    QGraphicsRectItem* rect72 = new QGraphicsRectItem();
    QGraphicsRectItem* rect73 = new QGraphicsRectItem();
    QGraphicsRectItem* rect74 = new QGraphicsRectItem();
    QGraphicsRectItem* rect75 = new QGraphicsRectItem();
    QGraphicsRectItem* rect76 = new QGraphicsRectItem();
    QGraphicsRectItem* rect77 = new QGraphicsRectItem();
    QGraphicsRectItem* rect78 = new QGraphicsRectItem();
    QGraphicsRectItem* rect79 = new QGraphicsRectItem();
    QGraphicsRectItem* rect80 = new QGraphicsRectItem();
    QGraphicsRectItem* rect81 = new QGraphicsRectItem();
    QGraphicsRectItem* rect82 = new QGraphicsRectItem();
    QGraphicsRectItem* rect83 = new QGraphicsRectItem();
    QGraphicsRectItem* rect84 = new QGraphicsRectItem();
    QGraphicsRectItem* rect85 = new QGraphicsRectItem();
    QGraphicsRectItem* rect86 = new QGraphicsRectItem();
    QGraphicsRectItem* rect87 = new QGraphicsRectItem();
    QGraphicsRectItem* rect88 = new QGraphicsRectItem();
    QGraphicsRectItem* rect89 = new QGraphicsRectItem();
    QGraphicsRectItem* rect90 = new QGraphicsRectItem();



void drawLadders(vector<tuple<int, int>> listLadder, QGraphicsScene* scene){
    //draw the ladders on the board
    for(int i=0;i<listLadder.size() ;i++){
        int tail = get<0>(listLadder[i]);
        int head = get<1>(listLadder[i]);
        int tailOne = tail%10;
        int headOne = head%10;
        int tailTen = (tail - tailOne)/10;
        int headTen = (head - headOne)/10;
        double xhead_1, yhead_1, xhead_2, yhead_2, xtail_1, ytail_1, xtail_2, ytail_2;
        QGraphicsLineItem *ladder1 = new QGraphicsLineItem();
        QGraphicsLineItem *ladder2 = new QGraphicsLineItem();
        if(headOne == 0){
            if(headTen%2 == 0){
                xhead_1 = 0;
                xhead_2 = 1;
            }

            else if(headTen%2 != 0){
                xhead_1 = 9;
                xhead_2 = 10;
            }
            yhead_1 = headTen - 2;
            yhead_2 = headTen - 2;
        }
        else if(headTen%2 == 0){
            xhead_1 = headOne - 1;
            xhead_2 = headOne;
        }
        else if(headTen%2 != 0){
            xhead_1 = (10 - headOne);
            xhead_2 = (10 - headOne + 1);
            }
        yhead_1 = headTen - 1;
        yhead_2 = headTen - 1;

        if(tailOne == 0){
            if(tailTen %2 == 0){
                xtail_1 = 0;
                xtail_2 = 1;
            }
            else if(tailTen %2 != 0){
                xtail_1 = 9;
                xtail_2 = 10 ;
            }
            ytail_1 = tailTen - 2;
            ytail_2 = tailTen - 2;
        }

        else{
                if(tailTen%2 == 0){
                    xtail_1 = tailOne - 1;
                    xtail_2 = tailOne;

                }
                else if(tailTen%2 != 0){
                    xtail_1 = 10 - tailOne;
                    xtail_2 = 10 - tailOne +1;
                }
                ytail_1 = tailTen - 1;
                ytail_2 = tailTen - 1;
                }

        ladder1->setLine(xtail_1*rectSize, -ytail_1*rectSize, xhead_1*rectSize, -yhead_1*rectSize);
        ladder2->setLine(xtail_2*rectSize, -ytail_2*rectSize, xhead_2*rectSize,-yhead_2*rectSize);
        QPen pen = *new QPen(QColorConstants::DarkGreen, 5);
        ladder1->setPen(pen);
        ladder2->setPen(pen);
        ladder1->setVisible(true);
        ladder2->setVisible(true);
        scene->addItem(ladder1);
        scene->addItem(ladder2);

}
}

void drawSnakes(vector<tuple<int, int>> listSnake, QGraphicsScene* scene){
    //draw the snakes on the board
    for(int i=0; i<listSnake.size(); i++){
        int head = get<0>(listSnake[i]);
        int tail = get<1>(listSnake[i]);

        int tailOne = tail%10;
        int headOne = head%10;
        int tailTen = (tail - tailOne)/10;
        int headTen = (head - headOne)/10;

        double xhead, yhead, xtail, ytail;

        QGraphicsLineItem *snake = new QGraphicsLineItem;
        if(headTen == 0){
            if(headTen%2 == 0){
                xhead = 0.9;
            }
            else if(headTen%2 != 0){
                xhead = 9.9;
            }
            yhead = headTen - 0.25;
        }
        else if(headTen%2 == 0){
            xhead = headOne - 0.05;
            yhead = headTen - 0.25;
        }
        else if(headTen%2 != 0){
            xhead = 10 - headOne;
            yhead = headTen - 0.25;
        }
        if(tailOne == 0){
            if(tailTen%2 == 0){
                xtail = 0.5;
            }
            if(tailTen%2 != 0){
                xtail = 9.5;
            }
            ytail = tailTen - 1;
        }
        else{
            if(tailTen%2 == 0){
                xtail = tailOne - 0.1;
            }
            else if(tailTen%2 != 0){
                xtail = 10 - tailOne + 0.3;
            }
            ytail = tailTen - 0.8;
        }
        snake->setLine(xtail*rectSize, -ytail*rectSize, xhead*rectSize, -yhead*rectSize);
        QPen pen = *new QPen(QColorConstants::DarkRed, 10);
        pen.setDashPattern({ 0.0, 4.0 * 0.25, 1.0 * 0.25, 4.0 * 0.25});
        snake->setPen(pen);
        snake->setVisible(true);
        scene->addItem(snake);

    }
}

void startBoard(QGraphicsScene* scene, QGraphicsView* view, diceRoll* textItem){
    //draw the basic board with text to welcome user
    rect1->setRect(0*rectSize,0*rectSize,rectSize,rectSize);
    rect1->setBrush(QColorConstants::Svg::beige);
    rect1->setPen(QColorConstants::Black);
    scene->addItem(rect1);

    rect2->setRect(1*rectSize,0*rectSize,rectSize,rectSize);
    rect2->setBrush(QColorConstants::Svg::blanchedalmond);
    rect2->setPen(QColorConstants::Black);
    scene->addItem(rect2);

    rect3->setRect(2*rectSize,0*rectSize,rectSize,rectSize);
    rect3->setBrush(QColorConstants::Svg::beige);
    rect3->setPen(QColorConstants::Black);
    scene->addItem(rect3);

    rect4->setRect(3*rectSize,0*rectSize,rectSize,rectSize);
    rect4->setBrush(QColorConstants::Svg::blanchedalmond);
    rect4->setPen(QColorConstants::Black);
    scene->addItem(rect4);

    rect5->setRect(4*rectSize,0*rectSize,rectSize,rectSize);
    rect5->setBrush(QColorConstants::Svg::beige);
    rect5->setPen(QColorConstants::Black);
    scene->addItem(rect5);

    rect6->setRect(5*rectSize,0*rectSize,rectSize,rectSize);
    rect6->setBrush(QColorConstants::Svg::blanchedalmond);
    rect6->setPen(QColorConstants::Black);
    scene->addItem(rect6);

    rect7->setRect(6*rectSize,0*rectSize,rectSize,rectSize);
    rect7->setBrush(QColorConstants::Svg::beige);
    rect7->setPen(QColorConstants::Black);
    scene->addItem(rect7);

    rect8->setRect(7*rectSize,0*rectSize,rectSize,rectSize);
    rect8->setBrush(QColorConstants::Svg::blanchedalmond);
    rect8->setPen(QColorConstants::Black);
    scene->addItem(rect8);

    rect9->setRect(8*rectSize,0*rectSize,rectSize,rectSize);
    rect9->setBrush(QColorConstants::Svg::beige);
    rect9->setPen(QColorConstants::Black);
    scene->addItem(rect9);


    rect10->setRect(9*rectSize,0*rectSize,rectSize,rectSize);
    rect10->setBrush(QColorConstants::Svg::blanchedalmond);
    rect10->setPen(QColorConstants::Black);
    scene->addItem(rect10);


    rect11->setRect(9*rectSize,-1*rectSize,rectSize,rectSize);
    rect11->setBrush(QColorConstants::Svg::beige);
    rect11->setPen(QColorConstants::Black);
    scene->addItem(rect11);

    rect12->setRect(8*rectSize,-1*rectSize,rectSize,rectSize);
    rect12->setBrush(QColorConstants::Svg::blanchedalmond);
    rect12->setPen(QColorConstants::Black);
    scene->addItem(rect12);


    rect13->setRect(7*rectSize,-1*rectSize,rectSize,rectSize);
    rect13->setBrush(QColorConstants::Svg::beige);
    rect13->setPen(QColorConstants::Black);
    scene->addItem(rect13);


    rect14->setRect(6*rectSize,-1*rectSize,rectSize,rectSize);
    rect14->setBrush(QColorConstants::Svg::blanchedalmond);
    rect14->setPen(QColorConstants::Black);
    scene->addItem(rect14);


    rect15->setRect(5*rectSize,-1*rectSize,rectSize,rectSize);
    rect15->setBrush(QColorConstants::Svg::beige);
    rect15->setPen(QColorConstants::Black);
    scene->addItem(rect15);


    rect16->setRect(4*rectSize,-1*rectSize,rectSize,rectSize);
    rect16->setBrush(QColorConstants::Svg::blanchedalmond);
    rect16->setPen(QColorConstants::Black);
    scene->addItem(rect16);


    rect17->setRect(3*rectSize,-1*rectSize,rectSize,rectSize);
    rect17->setBrush(QColorConstants::Svg::beige);
    rect17->setPen(QColorConstants::Black);
    scene->addItem(rect17);


    rect18->setRect(2*rectSize,-1*rectSize,rectSize,rectSize);
    rect18->setBrush(QColorConstants::Svg::blanchedalmond);
    rect18->setPen(QColorConstants::Black);
    scene->addItem(rect18);


    rect19->setRect(1*rectSize,-1*rectSize,rectSize,rectSize);
    rect19->setBrush(QColorConstants::Svg::beige);
    rect19->setPen(QColorConstants::Black);
    scene->addItem(rect19);


    rect20->setRect(0*rectSize,-1*rectSize,rectSize,rectSize);
    rect20->setBrush(QColorConstants::Svg::blanchedalmond);
    rect20->setPen(QColorConstants::Black);
    scene->addItem(rect20);


    rect21->setRect(0*rectSize,-2*rectSize,rectSize,rectSize);
    rect21->setBrush(QColorConstants::Svg::beige);
    rect21->setPen(QColorConstants::Black);
    scene->addItem(rect21);


    rect22->setRect(1*rectSize,-2*rectSize,rectSize,rectSize);
    rect22->setBrush(QColorConstants::Svg::blanchedalmond);
    rect22->setPen(QColorConstants::Black);
    scene->addItem(rect22);


    rect23->setRect(2*rectSize,-2*rectSize,rectSize,rectSize);
    rect23->setBrush(QColorConstants::Svg::beige);
    rect23->setPen(QColorConstants::Black);
    scene->addItem(rect23);


    rect24->setRect(3*rectSize,-2*rectSize,rectSize,rectSize);
    rect24->setBrush(QColorConstants::Svg::blanchedalmond);
    rect24->setPen(QColorConstants::Black);
    scene->addItem(rect24);


    rect25->setRect(4*rectSize,-2*rectSize,rectSize,rectSize);
    rect25->setBrush(QColorConstants::Svg::beige);
    rect25->setPen(QColorConstants::Black);
    scene->addItem(rect25);


    rect26->setRect(5*rectSize,-2*rectSize,rectSize,rectSize);
    rect26->setBrush(QColorConstants::Svg::blanchedalmond);
    rect26->setPen(QColorConstants::Black);
    scene->addItem(rect26);


    rect27->setRect(6*rectSize,-2*rectSize,rectSize,rectSize);
    rect27->setBrush(QColorConstants::Svg::beige);
    rect27->setPen(QColorConstants::Black);
    scene->addItem(rect27);


    rect28->setRect(7*rectSize,-2*rectSize,rectSize,rectSize);
    rect28->setBrush(QColorConstants::Svg::blanchedalmond);
    rect28->setPen(QColorConstants::Black);
    scene->addItem(rect28);


    rect29->setRect(8*rectSize,-2*rectSize,rectSize,rectSize);
    rect29->setBrush(QColorConstants::Svg::beige);
    rect29->setPen(QColorConstants::Black);
    scene->addItem(rect29);


    rect30->setRect(9*rectSize,-2*rectSize,rectSize,rectSize);
    rect30->setBrush(QColorConstants::Svg::blanchedalmond);
    rect30->setPen(QColorConstants::Black);
    scene->addItem(rect30);


    rect31->setRect(9*rectSize,-3*rectSize,rectSize,rectSize);
    rect31->setBrush(QColorConstants::Svg::beige);
    rect31->setPen(QColorConstants::Black);
    scene->addItem(rect31);


    rect32->setRect(8*rectSize,-3*rectSize,rectSize,rectSize);
    rect32->setBrush(QColorConstants::Svg::blanchedalmond);
    rect32->setPen(QColorConstants::Black);
    scene->addItem(rect32);


    rect33->setRect(7*rectSize,-3*rectSize,rectSize,rectSize);
    rect33->setBrush(QColorConstants::Svg::beige);
    rect33->setPen(QColorConstants::Black);
    scene->addItem(rect33);


    rect34->setRect(6*rectSize,-3*rectSize,rectSize,rectSize);
    rect34->setBrush(QColorConstants::Svg::blanchedalmond);
    rect34->setPen(QColorConstants::Black);
    scene->addItem(rect34);


    rect35->setRect(5*rectSize,-3*rectSize,rectSize,rectSize);
    rect35->setBrush(QColorConstants::Svg::beige);
    rect35->setPen(QColorConstants::Black);
    scene->addItem(rect35);


    rect36->setRect(4*rectSize,-3*rectSize,rectSize,rectSize);
    rect36->setBrush(QColorConstants::Svg::blanchedalmond);
    rect36->setPen(QColorConstants::Black);
    scene->addItem(rect36);


    rect37->setRect(3*rectSize,-3*rectSize,rectSize,rectSize);
    rect37->setBrush(QColorConstants::Svg::beige);
    rect37->setPen(QColorConstants::Black);
    scene->addItem(rect37);


    rect38->setRect(2*rectSize,-3*rectSize,rectSize,rectSize);
    rect38->setBrush(QColorConstants::Svg::blanchedalmond);
    rect38->setPen(QColorConstants::Black);
    scene->addItem(rect38);


    rect39->setRect(1*rectSize,-3*rectSize,rectSize,rectSize);
    rect39->setBrush(QColorConstants::Svg::beige);
    rect39->setPen(QColorConstants::Black);
    scene->addItem(rect39);


    rect40->setRect(0*rectSize,-3*rectSize,rectSize,rectSize);
    rect40->setBrush(QColorConstants::Svg::blanchedalmond);
    rect40->setPen(QColorConstants::Black);
    scene->addItem(rect40);


    rect41->setRect(0*rectSize,-4*rectSize,rectSize,rectSize);
    rect41->setBrush(QColorConstants::Svg::beige);
    rect41->setPen(QColorConstants::Black);
    scene->addItem(rect41);


    rect42->setRect(1*rectSize,-4*rectSize,rectSize,rectSize);
    rect42->setBrush(QColorConstants::Svg::blanchedalmond);
    rect42->setPen(QColorConstants::Black);
    scene->addItem(rect42);


    rect43->setRect(2*rectSize,-4*rectSize,rectSize,rectSize);
    rect43->setBrush(QColorConstants::Svg::beige);
    rect43->setPen(QColorConstants::Black);
    scene->addItem(rect43);


    rect44->setRect(3*rectSize,-4*rectSize,rectSize,rectSize);
    rect44->setBrush(QColorConstants::Svg::blanchedalmond);
    rect44->setPen(QColorConstants::Black);
    scene->addItem(rect44);


    rect45->setRect(4*rectSize,-4*rectSize,rectSize,rectSize);
    rect45->setBrush(QColorConstants::Svg::beige);
    rect45->setPen(QColorConstants::Black);
    scene->addItem(rect45);


    rect46->setRect(5*rectSize,-4*rectSize,rectSize,rectSize);
    rect46->setBrush(QColorConstants::Svg::blanchedalmond);
    rect46->setPen(QColorConstants::Black);
    scene->addItem(rect46);


    rect47->setRect(6*rectSize,-4*rectSize,rectSize,rectSize);
    rect47->setBrush(QColorConstants::Svg::beige);
    rect47->setPen(QColorConstants::Black);
    scene->addItem(rect47);


    rect48->setRect(7*rectSize,-4*rectSize,rectSize,rectSize);
    rect48->setBrush(QColorConstants::Svg::blanchedalmond);
    rect48->setPen(QColorConstants::Black);
    scene->addItem(rect48);


    rect49->setRect(8*rectSize,-4*rectSize,rectSize,rectSize);
    rect49->setBrush(QColorConstants::Svg::beige);
    rect49->setPen(QColorConstants::Black);
    scene->addItem(rect49);


    rect50->setRect(9*rectSize,-4*rectSize,rectSize,rectSize);
    rect50->setBrush(QColorConstants::Svg::blanchedalmond);
    rect50->setPen(QColorConstants::Black);
    scene->addItem(rect50);


    rect51->setRect(9*rectSize,-5*rectSize,rectSize,rectSize);
    rect51->setBrush(QColorConstants::Svg::beige);
    rect51->setPen(QColorConstants::Black);
    scene->addItem(rect51);


    rect52->setRect(8*rectSize,-5*rectSize,rectSize,rectSize);
    rect52->setBrush(QColorConstants::Svg::blanchedalmond);
    rect52->setPen(QColorConstants::Black);
    scene->addItem(rect52);


    rect53->setRect(7*rectSize,-5*rectSize,rectSize,rectSize);
    rect53->setBrush(QColorConstants::Svg::beige);
    rect53->setPen(QColorConstants::Black);
    scene->addItem(rect53);


    rect54->setRect(6*rectSize,-5*rectSize,rectSize,rectSize);
    rect54->setBrush(QColorConstants::Svg::blanchedalmond);
    rect54->setPen(QColorConstants::Black);
    scene->addItem(rect54);


    rect55->setRect(5*rectSize,-5*rectSize,rectSize,rectSize);
    rect55->setBrush(QColorConstants::Svg::beige);
    rect55->setPen(QColorConstants::Black);
    scene->addItem(rect55);


    rect56->setRect(4*rectSize,-5*rectSize,rectSize,rectSize);
    rect56->setBrush(QColorConstants::Svg::blanchedalmond);
    rect56->setPen(QColorConstants::Black);
    scene->addItem(rect56);


    rect57->setRect(3*rectSize,-5*rectSize,rectSize,rectSize);
    rect57->setBrush(QColorConstants::Svg::beige);
    rect57->setPen(QColorConstants::Black);
    scene->addItem(rect57);


    rect58->setRect(2*rectSize,-5*rectSize,rectSize,rectSize);
    rect58->setBrush(QColorConstants::Svg::blanchedalmond);
    rect58->setPen(QColorConstants::Black);
    scene->addItem(rect58);


    rect59->setRect(1*rectSize,-5*rectSize,rectSize,rectSize);
    rect59->setBrush(QColorConstants::Svg::beige);
    rect59->setPen(QColorConstants::Black);
    scene->addItem(rect59);


    rect60->setRect(0*rectSize,-5*rectSize,rectSize,rectSize);
    rect60->setBrush(QColorConstants::Svg::blanchedalmond);
    rect60->setPen(QColorConstants::Black);
    scene->addItem(rect60);


    rect61->setRect(0*rectSize,-6*rectSize,rectSize,rectSize);
    rect61->setBrush(QColorConstants::Svg::beige);
    rect61->setPen(QColorConstants::Black);
    scene->addItem(rect61);

    QGraphicsRectItem* rect62 = new QGraphicsRectItem();
    rect62->setRect(1*rectSize,-6*rectSize,rectSize,rectSize);
    rect62->setBrush(QColorConstants::Svg::blanchedalmond);
    rect62->setPen(QColorConstants::Black);
    scene->addItem(rect62);

    rect63->setRect(2*rectSize,-6*rectSize,rectSize,rectSize);
    rect63->setBrush(QColorConstants::Svg::beige);
    rect63->setPen(QColorConstants::Black);
    scene->addItem(rect63);

    rect64->setRect(3*rectSize,-6*rectSize,rectSize,rectSize);
    rect64->setBrush(QColorConstants::Svg::blanchedalmond);
    rect64->setPen(QColorConstants::Black);
    scene->addItem(rect64);

    rect65->setRect(4*rectSize,-6*rectSize,rectSize,rectSize);
    rect65->setBrush(QColorConstants::Svg::beige);
    rect65->setPen(QColorConstants::Black);
    scene->addItem(rect65);

    rect66->setRect(5*rectSize,-6*rectSize,rectSize,rectSize);
    rect66->setBrush(QColorConstants::Svg::blanchedalmond);
    rect66->setPen(QColorConstants::Black);
    scene->addItem(rect66);

    rect67->setRect(6*rectSize,-6*rectSize,rectSize,rectSize);
    rect67->setBrush(QColorConstants::Svg::beige);
    rect67->setPen(QColorConstants::Black);
    scene->addItem(rect67);

    rect68->setRect(7*rectSize,-6*rectSize,rectSize,rectSize);
    rect68->setBrush(QColorConstants::Svg::blanchedalmond);
    rect68->setPen(QColorConstants::Black);
    scene->addItem(rect68);

    rect69->setRect(8*rectSize,-6*rectSize,rectSize,rectSize);
    rect69->setBrush(QColorConstants::Svg::beige);
    rect69->setPen(QColorConstants::Black);
    scene->addItem(rect69);

    rect70->setRect(9*rectSize,-6*rectSize,rectSize,rectSize);
    rect70->setBrush(QColorConstants::Svg::blanchedalmond);
    rect70->setPen(QColorConstants::Black);
    scene->addItem(rect70);

    rect71->setRect(9*rectSize,-7*rectSize,rectSize,rectSize);
    rect71->setBrush(QColorConstants::Svg::beige);
    rect71->setPen(QColorConstants::Black);
    scene->addItem(rect71);

    rect72->setRect(8*rectSize,-7*rectSize,rectSize,rectSize);
    rect72->setBrush(QColorConstants::Svg::blanchedalmond);
    rect72->setPen(QColorConstants::Black);
    scene->addItem(rect72);

    rect73->setRect(7*rectSize,-7*rectSize,rectSize,rectSize);
    rect73->setBrush(QColorConstants::Svg::beige);
    rect73->setPen(QColorConstants::Black);
    scene->addItem(rect73);

    rect74->setRect(6*rectSize,-7*rectSize,rectSize,rectSize);
    rect74->setBrush(QColorConstants::Svg::blanchedalmond);
    rect74->setPen(QColorConstants::Black);
    scene->addItem(rect74);

    rect75->setRect(5*rectSize,-7*rectSize,rectSize,rectSize);
    rect75->setBrush(QColorConstants::Svg::beige);
    rect75->setPen(QColorConstants::Black);
    scene->addItem(rect75);

    rect76->setRect(4*rectSize,-7*rectSize,rectSize,rectSize);
    rect76->setBrush(QColorConstants::Svg::blanchedalmond);
    rect76->setPen(QColorConstants::Black);
    scene->addItem(rect76);

    rect77->setRect(3*rectSize,-7*rectSize,rectSize,rectSize);
    rect77->setBrush(QColorConstants::Svg::beige);
    rect77->setPen(QColorConstants::Black);
    scene->addItem(rect77);

    rect78->setRect(2*rectSize,-7*rectSize,rectSize,rectSize);
    rect78->setBrush(QColorConstants::Svg::blanchedalmond);
    rect78->setPen(QColorConstants::Black);
    scene->addItem(rect78);

    rect79->setRect(1*rectSize,-7*rectSize,rectSize,rectSize);
    rect79->setBrush(QColorConstants::Svg::beige);
    rect79->setPen(QColorConstants::Black);
    scene->addItem(rect79);

    rect80->setRect(0*rectSize,-7*rectSize,rectSize,rectSize);
    rect80->setBrush(QColorConstants::Svg::blanchedalmond);
    rect80->setPen(QColorConstants::Black);
    scene->addItem(rect80);

    rect81->setRect(0*rectSize,-8*rectSize,rectSize,rectSize);
    rect81->setBrush(QColorConstants::Svg::beige);
    rect81->setPen(QColorConstants::Black);
    scene->addItem(rect81);

    rect82->setRect(1*rectSize,-8*rectSize,rectSize,rectSize);
    rect82->setBrush(QColorConstants::Svg::blanchedalmond);
    rect82->setPen(QColorConstants::Black);
    scene->addItem(rect82);

    rect83->setRect(2*rectSize,-8*rectSize,rectSize,rectSize);
    rect83->setBrush(QColorConstants::Svg::beige);
    rect83->setPen(QColorConstants::Black);
    scene->addItem(rect83);

    rect84->setRect(3*rectSize,-8*rectSize,rectSize,rectSize);
    rect84->setBrush(QColorConstants::Svg::blanchedalmond);
    rect84->setPen(QColorConstants::Black);
    scene->addItem(rect84);

    rect85->setRect(4*rectSize,-8*rectSize,rectSize,rectSize);
    rect85->setBrush(QColorConstants::Svg::beige);
    rect85->setPen(QColorConstants::Black);
    scene->addItem(rect85);

    rect86->setRect(5*rectSize,-8*rectSize,rectSize,rectSize);
    rect86->setBrush(QColorConstants::Svg::blanchedalmond);
    rect86->setPen(QColorConstants::Black);
    scene->addItem(rect86);

    rect87->setRect(6*rectSize,-8*rectSize,rectSize,rectSize);
    rect87->setBrush(QColorConstants::Svg::beige);
    rect87->setPen(QColorConstants::Black);
    scene->addItem(rect87);

    rect88->setRect(7*rectSize,-8*rectSize,rectSize,rectSize);
    rect88->setBrush(QColorConstants::Svg::blanchedalmond);
    rect88->setPen(QColorConstants::Black);
    scene->addItem(rect88);

    rect89->setRect(8*rectSize,-8*rectSize,rectSize,rectSize);
    rect89->setBrush(QColorConstants::Svg::beige);
    rect89->setPen(QColorConstants::Black);
    scene->addItem(rect89);

    rect90->setRect(9*rectSize,-8*rectSize,rectSize,rectSize);
    rect90->setBrush(QColorConstants::Svg::salmon);
    rect90->setPen(QColorConstants::Black);
    scene->addItem(rect90);

    textItem->setTextWidth(140);
    mainText->setTextWidth(140);

    QString newText = *new QString("Click here to roll the dice\n\n\n\n\n");
    textItem->setPlainText(newText);
    mainText->setPlainText("Welcome to Snakes and Ladders!");
    auto *rectItem = new QGraphicsRectItem(mainText->boundingRect().adjusted(0,0,-1,-1));

    mainText->setPos(620,-400);
    textItem->setPos(620,-200);
    rectItem->setPos(620,-400);

    //adding to the scene
    scene->addItem(mainText);
    scene->addItem(textItem);
    scene->addItem(rectItem);

    //setting view
    view -> setGeometry(0,0,800,600);
    view -> show();
}

};

bool gameReload_int(std::string add, std::string name, int& length, int& height,
                        std::vector<int>& players, std::vector<std::string>& players_names,
                        std::vector<std::tuple<int, int>>& snakes,
                        std::vector<std::tuple<int, int>>& ladders) {

    std::fstream history;
    history.open(add+name+".txt",std::ios::in);
    if (history.is_open()) {
        std::string line;

        // get length
        std::getline(history, line);
        length = std::stoi(line);

        // get height
        std::getline(history, line);
        height = std::stoi(line);

        // get players
        std::getline(history, line);
        int numOfPlayers = std::stoi(line);
        for (int i=0; i<numOfPlayers; i++) {
            std::getline(history, line);
            std::stringstream sstr(line);
            std::string substr;
            // get players names
            std::getline(sstr, substr, ':');
            players_names.push_back(substr);
            //get players positions
            std::vector<int> temppos;
            while(sstr.good()) {
                getline(sstr, substr, ',');
                players.push_back(std::stoi(substr));
            }
        }

        // get snakes
        std::getline(history, line);
        int numOfSnakes = std::stoi(line);
        for (int i=0; i<numOfSnakes; i++) {
            std::getline(history, line);
            line.pop_back();
            std::stringstream sstr(line);
            std::string substr;
            std::tuple<int, int> snake;
            while(sstr.good()) {
                getline(sstr, substr, ',');
                int x = std::stoi(substr);
                getline(sstr, substr, ',');
                int y = std::stoi(substr);
                snake = std::make_tuple(x, y);
            }
            snakes.push_back(snake);
        }

        // get ladders
        std::getline(history, line);
        int numOfLadders = std::stoi(line);
        for (int i=0; i<numOfLadders; i++) {
            std::getline(history, line);
            line.pop_back();
            std::stringstream sstr(line);
            std::string substr;
            std::tuple<int, int> ladder;
            while(sstr.good()) {
                getline(sstr, substr, ',');
                int x = std::stoi(substr);
                getline(sstr, substr, ',');
                int y = std::stoi(substr);
                ladder = std::make_tuple(x, y);
            }
            ladders.push_back(ladder);
        }
        return true;
    }
    else {
        return false;
    }
};

bool gameSave_int(std::string add, std::string name, int length, int height,
                        std::vector<int>& players, std::vector<std::string>& players_names,
                        std::vector<std::tuple<int, int>>& snakes,
                        std::vector<std::tuple<int, int>>& ladders) {

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
        // write length, height, number of players
        fw << length << "\n" << height << "\n" << players.size() << "\n";
        // write players' names and positions
        for (int i=0; i<players.size(); i++) {
            fw << players_names[i] << ":" << players[i] << "\n";
        }
        // write snakes
        fw << snakes.size() << "\n";
        for (int i=0; i<snakes.size(); i++) {
            fw << std::get<0>(snakes[i]) << "," << std::get<1>(snakes[i]) << ",";
            fw << "\n";
        }
        // write ladders
        fw << ladders.size() << "\n";
        for (int i=0; i<ladders.size(); i++) {

            fw << std::get<0>(ladders[i]) << "," << std::get<1>(ladders[i]) << ",";

            fw << "\n";
        }
        fw << ".";
        fw.close();
        return true;
    }

    return false;
};

//calling the board library
Board board;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    //create a scene
    SnakesAndLadders game;
    myScene* scene = new myScene();
    //create a view
    QGraphicsView* view = new QGraphicsView(scene);
    //calling diceRoll.cpp QGraphicsTextItem
    diceRoll* textItem = new diceRoll();
    //creating the board
    game.startBoard(scene, view, textItem);
    board.setArea(10, 9);
    //inserting snakes and ladder
    board.random_insert_ladder();
    board.random_insert_ladder();
    board.random_insert_ladder();
    board.random_insert_snake();
    board.random_insert_snake();
    board.random_insert_snake();
    //drawing the snakes and ladder
    game.drawLadders(board.ui_ladder, scene);
    game.drawSnakes(board.ui_snake, scene);
    //setting textItem as focus
    textItem->setFlag(QGraphicsItem::ItemIsFocusable);
    textItem->setFocus();
    //adding path for game history
    string add = "/Users/tejasrikurapati/Untitled/gameHistory/";
    string name = "game1";
    int length = 10;
    int height = 9;
    vector<int> players;

    gameSave_int(add, name, length, height,
                            players, players_names,
                            board.ui_ladder,
                            board.ui_snake);


    return a.exec();
}
