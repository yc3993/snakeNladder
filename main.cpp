#include <QGraphicsLineItem>
#include <QPainter>
#include <QGraphicsTextItem>
#include <QVBoxLayout>
#include <QString>
#include <QLabel>
#include <QGraphicsRectItem>//>
#include <QPixmap>
#include <QGraphicsPixmapItem>//>
#include <QBrush>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <string>
#include <iostream>
using namespace std;

class SnakesAndLadders{

public:

    int rectSize = 60;

    QGraphicsScene* scene = new QGraphicsScene();
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




void drawLadders(){

    int ladeerL = 5;
    int ladderH = 16;

    QGraphicsLineItem *ladder1 = new QGraphicsLineItem();
    QGraphicsLineItem *ladder2 = new QGraphicsLineItem();
    int ladderFrom = 23;
    int ladderTo = 46;
    int x0_From, y0_From, x1_From, y1_From;
    int x0_To, y0_To, x1_To, y1_To;
    if(ladderFrom%2 == 0){
        x0_From = (ladderFrom/10)*rectSize;
    }
    ladder1->setLine(0,0,120,-120);
    ladder2->setLine(60,0,180,-120);
    ladder1->setVisible(true);
    ladder2->setVisible(true);
    scene->addItem(ladder1);
    scene->addItem(ladder2);

}

void startBoard(){

//    for(int i=0; i<10; i++){
//        for(int j=0; j<9; j++){
//            if(j%2==0 && i%2==0){
//                scene -> addRect(i*rectSize,j*rectSize,rectSize,rectSize,QColorConstants::Black,QColorConstants::Svg::salmon);
//            }
//            else if(j%2==0 && i%2!=0){
//                scene -> addRect(i*rectSize,j*rectSize,rectSize,rectSize,QColorConstants::Black,QColorConstants::::Svg::gold);
//            }
//            else if(j%2!=0 && i%2!=0){
//                scene -> addRect(i*rectSize,j*rectSize,rectSize,rectSize,QColorConstants::Black,QColorConstants::Svg::salmon);
//            }
//            else if(j%2!=0 && i%2==0){
//                scene -> addRect(i*rectSize,j*rectSize,rectSize,rectSize,QColorConstants::Black,QColorConstants::::Svg::gold);
//            }

//        }
//    }

    rect1->setRect(0*rectSize,0*rectSize,rectSize,rectSize);
    rect1->setBrush(QColorConstants::Svg::salmon);
    rect1->setPen(QColorConstants::Black);
    scene->addItem(rect1);

    rect2->setRect(1*rectSize,0*rectSize,rectSize,rectSize);
    rect2->setBrush(QColorConstants::Svg::gold);
    rect2->setPen(QColorConstants::Black);
    scene->addItem(rect2);

    rect3->setRect(2*rectSize,0*rectSize,rectSize,rectSize);
    rect3->setBrush(QColorConstants::Svg::salmon);
    rect3->setPen(QColorConstants::Black);
    scene->addItem(rect3);

    rect4->setRect(3*rectSize,0*rectSize,rectSize,rectSize);
    rect4->setBrush(QColorConstants::Svg::gold);
    rect4->setPen(QColorConstants::Black);
    scene->addItem(rect4);

    rect5->setRect(4*rectSize,0*rectSize,rectSize,rectSize);
    rect5->setBrush(QColorConstants::Svg::salmon);
    rect5->setPen(QColorConstants::Black);
    scene->addItem(rect5);

    rect6->setRect(5*rectSize,0*rectSize,rectSize,rectSize);
    rect6->setBrush(QColorConstants::Svg::gold);
    rect6->setPen(QColorConstants::Black);
    scene->addItem(rect6);

    rect7->setRect(6*rectSize,0*rectSize,rectSize,rectSize);
    rect7->setBrush(QColorConstants::Svg::salmon);
    rect7->setPen(QColorConstants::Black);
    scene->addItem(rect7);

    rect8->setRect(7*rectSize,0*rectSize,rectSize,rectSize);
    rect8->setBrush(QColorConstants::Svg::gold);
    rect8->setPen(QColorConstants::Black);
    scene->addItem(rect8);

    rect9->setRect(8*rectSize,0*rectSize,rectSize,rectSize);
    rect9->setBrush(QColorConstants::Svg::salmon);
    rect9->setPen(QColorConstants::Black);
    scene->addItem(rect9);


    rect10->setRect(9*rectSize,0*rectSize,rectSize,rectSize);
    rect10->setBrush(QColorConstants::Svg::gold);
    rect10->setPen(QColorConstants::Black);
    scene->addItem(rect10);


    rect11->setRect(9*rectSize,-1*rectSize,rectSize,rectSize);
    rect11->setBrush(QColorConstants::Svg::salmon);
    rect11->setPen(QColorConstants::Black);
    scene->addItem(rect11);

    rect12->setRect(8*rectSize,-1*rectSize,rectSize,rectSize);
    rect12->setBrush(QColorConstants::Svg::gold);
    rect12->setPen(QColorConstants::Black);
    scene->addItem(rect12);


    rect13->setRect(7*rectSize,-1*rectSize,rectSize,rectSize);
    rect13->setBrush(QColorConstants::Svg::salmon);
    rect13->setPen(QColorConstants::Black);
    scene->addItem(rect13);


    rect14->setRect(6*rectSize,-1*rectSize,rectSize,rectSize);
    rect14->setBrush(QColorConstants::Svg::gold);
    rect14->setPen(QColorConstants::Black);
    scene->addItem(rect14);


    rect15->setRect(5*rectSize,-1*rectSize,rectSize,rectSize);
    rect15->setBrush(QColorConstants::Svg::salmon);
    rect15->setPen(QColorConstants::Black);
    scene->addItem(rect15);


    rect16->setRect(4*rectSize,-1*rectSize,rectSize,rectSize);
    rect16->setBrush(QColorConstants::Svg::gold);
    rect16->setPen(QColorConstants::Black);
    scene->addItem(rect16);


    rect17->setRect(3*rectSize,-1*rectSize,rectSize,rectSize);
    rect17->setBrush(QColorConstants::Svg::salmon);
    rect17->setPen(QColorConstants::Black);
    scene->addItem(rect17);


    rect18->setRect(2*rectSize,-1*rectSize,rectSize,rectSize);
    rect18->setBrush(QColorConstants::Svg::gold);
    rect18->setPen(QColorConstants::Black);
    scene->addItem(rect18);


    rect19->setRect(1*rectSize,-1*rectSize,rectSize,rectSize);
    rect19->setBrush(QColorConstants::Svg::salmon);
    rect19->setPen(QColorConstants::Black);
    scene->addItem(rect19);


    rect20->setRect(0*rectSize,-1*rectSize,rectSize,rectSize);
    rect20->setBrush(QColorConstants::Svg::gold);
    rect20->setPen(QColorConstants::Black);
    scene->addItem(rect20);


    rect21->setRect(0*rectSize,-2*rectSize,rectSize,rectSize);
    rect21->setBrush(QColorConstants::Svg::salmon);
    rect21->setPen(QColorConstants::Black);
    scene->addItem(rect21);


    rect22->setRect(1*rectSize,-2*rectSize,rectSize,rectSize);
    rect22->setBrush(QColorConstants::Svg::gold);
    rect22->setPen(QColorConstants::Black);
    scene->addItem(rect22);


    rect23->setRect(2*rectSize,-2*rectSize,rectSize,rectSize);
    rect23->setBrush(QColorConstants::Svg::salmon);
    rect23->setPen(QColorConstants::Black);
    scene->addItem(rect23);


    rect24->setRect(3*rectSize,-2*rectSize,rectSize,rectSize);
    rect24->setBrush(QColorConstants::Svg::gold);
    rect24->setPen(QColorConstants::Black);
    scene->addItem(rect24);


    rect25->setRect(4*rectSize,-2*rectSize,rectSize,rectSize);
    rect25->setBrush(QColorConstants::Svg::salmon);
    rect25->setPen(QColorConstants::Black);
    scene->addItem(rect25);


    rect26->setRect(5*rectSize,-2*rectSize,rectSize,rectSize);
    rect26->setBrush(QColorConstants::Svg::gold);
    rect26->setPen(QColorConstants::Black);
    scene->addItem(rect26);


    rect27->setRect(6*rectSize,-2*rectSize,rectSize,rectSize);
    rect27->setBrush(QColorConstants::Svg::salmon);
    rect27->setPen(QColorConstants::Black);
    scene->addItem(rect27);


    rect28->setRect(7*rectSize,-2*rectSize,rectSize,rectSize);
    rect28->setBrush(QColorConstants::Svg::gold);
    rect28->setPen(QColorConstants::Black);
    scene->addItem(rect28);


    rect29->setRect(8*rectSize,-2*rectSize,rectSize,rectSize);
    rect29->setBrush(QColorConstants::Svg::salmon);
    rect29->setPen(QColorConstants::Black);
    scene->addItem(rect29);


    rect30->setRect(9*rectSize,-2*rectSize,rectSize,rectSize);
    rect30->setBrush(QColorConstants::Svg::gold);
    rect30->setPen(QColorConstants::Black);
    scene->addItem(rect30);


    rect31->setRect(9*rectSize,-3*rectSize,rectSize,rectSize);
    rect31->setBrush(QColorConstants::Svg::salmon);
    rect31->setPen(QColorConstants::Black);
    scene->addItem(rect31);


    rect32->setRect(8*rectSize,-3*rectSize,rectSize,rectSize);
    rect32->setBrush(QColorConstants::Svg::gold);
    rect32->setPen(QColorConstants::Black);
    scene->addItem(rect32);


    rect33->setRect(7*rectSize,-3*rectSize,rectSize,rectSize);
    rect33->setBrush(QColorConstants::Svg::salmon);
    rect33->setPen(QColorConstants::Black);
    scene->addItem(rect33);


    rect34->setRect(6*rectSize,-3*rectSize,rectSize,rectSize);
    rect34->setBrush(QColorConstants::Svg::gold);
    rect34->setPen(QColorConstants::Black);
    scene->addItem(rect34);


    rect35->setRect(5*rectSize,-3*rectSize,rectSize,rectSize);
    rect35->setBrush(QColorConstants::Svg::salmon);
    rect35->setPen(QColorConstants::Black);
    scene->addItem(rect35);


    rect36->setRect(4*rectSize,-3*rectSize,rectSize,rectSize);
    rect36->setBrush(QColorConstants::Svg::gold);
    rect36->setPen(QColorConstants::Black);
    scene->addItem(rect36);


    rect37->setRect(3*rectSize,-3*rectSize,rectSize,rectSize);
    rect37->setBrush(QColorConstants::Svg::salmon);
    rect37->setPen(QColorConstants::Black);
    scene->addItem(rect37);


    rect38->setRect(2*rectSize,-3*rectSize,rectSize,rectSize);
    rect38->setBrush(QColorConstants::Svg::gold);
    rect38->setPen(QColorConstants::Black);
    scene->addItem(rect38);


    rect39->setRect(1*rectSize,-3*rectSize,rectSize,rectSize);
    rect39->setBrush(QColorConstants::Svg::salmon);
    rect39->setPen(QColorConstants::Black);
    scene->addItem(rect39);


    rect40->setRect(0*rectSize,-3*rectSize,rectSize,rectSize);
    rect40->setBrush(QColorConstants::Svg::gold);
    rect40->setPen(QColorConstants::Black);
    scene->addItem(rect40);


    rect41->setRect(0*rectSize,-4*rectSize,rectSize,rectSize);
    rect41->setBrush(QColorConstants::Svg::salmon);
    rect41->setPen(QColorConstants::Black);
    scene->addItem(rect41);


    rect42->setRect(1*rectSize,-4*rectSize,rectSize,rectSize);
    rect42->setBrush(QColorConstants::Svg::gold);
    rect42->setPen(QColorConstants::Black);
    scene->addItem(rect42);


    rect43->setRect(2*rectSize,-4*rectSize,rectSize,rectSize);
    rect43->setBrush(QColorConstants::Svg::salmon);
    rect43->setPen(QColorConstants::Black);
    scene->addItem(rect43);


    rect44->setRect(3*rectSize,-4*rectSize,rectSize,rectSize);
    rect44->setBrush(QColorConstants::Svg::gold);
    rect44->setPen(QColorConstants::Black);
    scene->addItem(rect44);


    rect45->setRect(4*rectSize,-4*rectSize,rectSize,rectSize);
    rect45->setBrush(QColorConstants::Svg::salmon);
    rect45->setPen(QColorConstants::Black);
    scene->addItem(rect45);


    rect46->setRect(5*rectSize,-4*rectSize,rectSize,rectSize);
    rect46->setBrush(QColorConstants::Svg::gold);
    rect46->setPen(QColorConstants::Black);
    scene->addItem(rect46);


    rect47->setRect(6*rectSize,-4*rectSize,rectSize,rectSize);
    rect47->setBrush(QColorConstants::Svg::salmon);
    rect47->setPen(QColorConstants::Black);
    scene->addItem(rect47);


    rect48->setRect(7*rectSize,-4*rectSize,rectSize,rectSize);
    rect48->setBrush(QColorConstants::Svg::gold);
    rect48->setPen(QColorConstants::Black);
    scene->addItem(rect48);


    rect49->setRect(8*rectSize,-4*rectSize,rectSize,rectSize);
    rect49->setBrush(QColorConstants::Svg::salmon);
    rect49->setPen(QColorConstants::Black);
    scene->addItem(rect49);


    rect50->setRect(9*rectSize,-4*rectSize,rectSize,rectSize);
    rect50->setBrush(QColorConstants::Svg::gold);
    rect50->setPen(QColorConstants::Black);
    scene->addItem(rect50);


    rect51->setRect(9*rectSize,-5*rectSize,rectSize,rectSize);
    rect51->setBrush(QColorConstants::Svg::salmon);
    rect51->setPen(QColorConstants::Black);
    scene->addItem(rect51);


    rect52->setRect(8*rectSize,-5*rectSize,rectSize,rectSize);
    rect52->setBrush(QColorConstants::Svg::gold);
    rect52->setPen(QColorConstants::Black);
    scene->addItem(rect52);


    rect53->setRect(7*rectSize,-5*rectSize,rectSize,rectSize);
    rect53->setBrush(QColorConstants::Svg::salmon);
    rect53->setPen(QColorConstants::Black);
    scene->addItem(rect53);


    rect54->setRect(6*rectSize,-5*rectSize,rectSize,rectSize);
    rect54->setBrush(QColorConstants::Svg::gold);
    rect54->setPen(QColorConstants::Black);
    scene->addItem(rect54);


    rect55->setRect(5*rectSize,-5*rectSize,rectSize,rectSize);
    rect55->setBrush(QColorConstants::Svg::salmon);
    rect55->setPen(QColorConstants::Black);
    scene->addItem(rect55);


    rect56->setRect(4*rectSize,-5*rectSize,rectSize,rectSize);
    rect56->setBrush(QColorConstants::Svg::gold);
    rect56->setPen(QColorConstants::Black);
    scene->addItem(rect56);


    rect57->setRect(3*rectSize,-5*rectSize,rectSize,rectSize);
    rect57->setBrush(QColorConstants::Svg::salmon);
    rect57->setPen(QColorConstants::Black);
    scene->addItem(rect57);


    rect58->setRect(2*rectSize,-5*rectSize,rectSize,rectSize);
    rect58->setBrush(QColorConstants::Svg::gold);
    rect58->setPen(QColorConstants::Black);
    scene->addItem(rect58);


    rect59->setRect(1*rectSize,-5*rectSize,rectSize,rectSize);
    rect59->setBrush(QColorConstants::Svg::salmon);
    rect59->setPen(QColorConstants::Black);
    scene->addItem(rect59);


    rect60->setRect(0*rectSize,-5*rectSize,rectSize,rectSize);
    rect60->setBrush(QColorConstants::Svg::gold);
    rect60->setPen(QColorConstants::Black);
    scene->addItem(rect60);


    rect61->setRect(0*rectSize,-6*rectSize,rectSize,rectSize);
    rect61->setBrush(QColorConstants::Svg::salmon);
    rect61->setPen(QColorConstants::Black);
    scene->addItem(rect61);

    QGraphicsRectItem* rect62 = new QGraphicsRectItem();
    rect62->setRect(1*rectSize,-6*rectSize,rectSize,rectSize);
    rect62->setBrush(QColorConstants::Svg::gold);
    rect62->setPen(QColorConstants::Black);
    scene->addItem(rect62);

    rect63->setRect(2*rectSize,-6*rectSize,rectSize,rectSize);
    rect63->setBrush(QColorConstants::Svg::salmon);
    rect63->setPen(QColorConstants::Black);
    scene->addItem(rect63);

    rect64->setRect(3*rectSize,-6*rectSize,rectSize,rectSize);
    rect64->setBrush(QColorConstants::Svg::gold);
    rect64->setPen(QColorConstants::Black);
    scene->addItem(rect64);

    rect65->setRect(4*rectSize,-6*rectSize,rectSize,rectSize);
    rect65->setBrush(QColorConstants::Svg::salmon);
    rect65->setPen(QColorConstants::Black);
    scene->addItem(rect65);

    rect66->setRect(5*rectSize,-6*rectSize,rectSize,rectSize);
    rect66->setBrush(QColorConstants::Svg::gold);
    rect66->setPen(QColorConstants::Black);
    scene->addItem(rect66);

    rect67->setRect(6*rectSize,-6*rectSize,rectSize,rectSize);
    rect67->setBrush(QColorConstants::Svg::salmon);
    rect67->setPen(QColorConstants::Black);
    scene->addItem(rect67);

    rect68->setRect(7*rectSize,-6*rectSize,rectSize,rectSize);
    rect68->setBrush(QColorConstants::Svg::gold);
    rect68->setPen(QColorConstants::Black);
    scene->addItem(rect68);

    rect69->setRect(8*rectSize,-6*rectSize,rectSize,rectSize);
    rect69->setBrush(QColorConstants::Svg::salmon);
    rect69->setPen(QColorConstants::Black);
    scene->addItem(rect69);

    rect70->setRect(9*rectSize,-6*rectSize,rectSize,rectSize);
    rect70->setBrush(QColorConstants::Svg::gold);
    rect70->setPen(QColorConstants::Black);
    scene->addItem(rect70);

    rect71->setRect(9*rectSize,-7*rectSize,rectSize,rectSize);
    rect71->setBrush(QColorConstants::Svg::salmon);
    rect71->setPen(QColorConstants::Black);
    scene->addItem(rect71);

    rect72->setRect(8*rectSize,-7*rectSize,rectSize,rectSize);
    rect72->setBrush(QColorConstants::Svg::gold);
    rect72->setPen(QColorConstants::Black);
    scene->addItem(rect72);

    rect73->setRect(7*rectSize,-7*rectSize,rectSize,rectSize);
    rect73->setBrush(QColorConstants::Svg::salmon);
    rect73->setPen(QColorConstants::Black);
    scene->addItem(rect73);

    rect74->setRect(6*rectSize,-7*rectSize,rectSize,rectSize);
    rect74->setBrush(QColorConstants::Svg::gold);
    rect74->setPen(QColorConstants::Black);
    scene->addItem(rect74);

    rect75->setRect(5*rectSize,-7*rectSize,rectSize,rectSize);
    rect75->setBrush(QColorConstants::Svg::salmon);
    rect75->setPen(QColorConstants::Black);
    scene->addItem(rect75);

    rect76->setRect(4*rectSize,-7*rectSize,rectSize,rectSize);
    rect76->setBrush(QColorConstants::Svg::gold);
    rect76->setPen(QColorConstants::Black);
    scene->addItem(rect76);

    rect77->setRect(3*rectSize,-7*rectSize,rectSize,rectSize);
    rect77->setBrush(QColorConstants::Svg::salmon);
    rect77->setPen(QColorConstants::Black);
    scene->addItem(rect77);

    rect78->setRect(2*rectSize,-7*rectSize,rectSize,rectSize);
    rect78->setBrush(QColorConstants::Svg::gold);
    rect78->setPen(QColorConstants::Black);
    scene->addItem(rect78);

    rect79->setRect(1*rectSize,-7*rectSize,rectSize,rectSize);
    rect79->setBrush(QColorConstants::Svg::salmon);
    rect79->setPen(QColorConstants::Black);
    scene->addItem(rect79);

    rect80->setRect(0*rectSize,-7*rectSize,rectSize,rectSize);
    rect80->setBrush(QColorConstants::Svg::gold);
    rect80->setPen(QColorConstants::Black);
    scene->addItem(rect80);

    rect81->setRect(0*rectSize,-8*rectSize,rectSize,rectSize);
    rect81->setBrush(QColorConstants::Svg::salmon);
    rect81->setPen(QColorConstants::Black);
    scene->addItem(rect81);

    rect82->setRect(1*rectSize,-8*rectSize,rectSize,rectSize);
    rect82->setBrush(QColorConstants::Svg::gold);
    rect82->setPen(QColorConstants::Black);
    scene->addItem(rect82);

    rect83->setRect(2*rectSize,-8*rectSize,rectSize,rectSize);
    rect83->setBrush(QColorConstants::Svg::salmon);
    rect83->setPen(QColorConstants::Black);
    scene->addItem(rect83);

    rect84->setRect(3*rectSize,-8*rectSize,rectSize,rectSize);
    rect84->setBrush(QColorConstants::Svg::gold);
    rect84->setPen(QColorConstants::Black);
    scene->addItem(rect84);

    rect85->setRect(4*rectSize,-8*rectSize,rectSize,rectSize);
    rect85->setBrush(QColorConstants::Svg::salmon);
    rect85->setPen(QColorConstants::Black);
    scene->addItem(rect85);

    rect86->setRect(5*rectSize,-8*rectSize,rectSize,rectSize);
    rect86->setBrush(QColorConstants::Svg::gold);
    rect86->setPen(QColorConstants::Black);
    scene->addItem(rect86);

    rect87->setRect(6*rectSize,-8*rectSize,rectSize,rectSize);
    rect87->setBrush(QColorConstants::Svg::salmon);
    rect87->setPen(QColorConstants::Black);
    scene->addItem(rect87);

    rect88->setRect(7*rectSize,-8*rectSize,rectSize,rectSize);
    rect88->setBrush(QColorConstants::Svg::gold);
    rect88->setPen(QColorConstants::Black);
    scene->addItem(rect88);

    rect89->setRect(8*rectSize,-8*rectSize,rectSize,rectSize);
    rect89->setBrush(QColorConstants::Svg::salmon);
    rect89->setPen(QColorConstants::Black);
    scene->addItem(rect89);

    rect90->setRect(9*rectSize,-8*rectSize,rectSize,rectSize);
    rect90->setBrush(QColorConstants::Svg::gold);
    rect90->setPen(QColorConstants::Black);
    scene->addItem(rect90);

    QGraphicsPixmapItem* char1 = new QGraphicsPixmapItem(QPixmap("/Users/tejasrikurapati/Downloads/images.jpeg"));
    scene->addItem(char1);
//    char1->setPos(0.1*rectSize, 0.1*rectSize);
    char1->setPos(rect1->pos());
    char1->setScale(0.2);

    auto *textItem = new QGraphicsTextItem(QGraphicsTextItem::tr("Welcome to Sankes and Ladders!"));
    textItem->setTextWidth(140);
    textItem->setPlainText("Hello");
    auto *rectItem = new QGraphicsRectItem(textItem->boundingRect().adjusted(0,0,-1,-1));
//    QString newText = *new QString("hello");
//    textItem->setPlainText(newText);
    textItem->setPos(620,-400);
    rectItem->setPos(620,-400);
    scene->addItem(textItem);
    scene->addItem(rectItem);
    //create View
    QGraphicsView* view = new QGraphicsView(scene);
    view -> setGeometry(0,0,800,600);
    view -> show();
}
};

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    //create a scene
    SnakesAndLadders game;
    game.startBoard();
    game.drawLadders();
//    drawLadders(scene);
//    bool endGame = false;
//    int currPos = 0;
//    while(endGame!=true){
//        int dice = rollDice();
//        currPos, endGame = moveChar(currPos);
//    }

    return a.exec();
}
