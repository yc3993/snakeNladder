#ifndef DICEROLL_H
#define DICEROLL_H

#include <QGraphicsTextItem>
#include <QMouseEvent>

class diceRoll: public QGraphicsTextItem{
public:
    bool event(QEvent *event);
private:
    void setCharacterPosition(double char_x, double char_y);
    void showDice(int roll);

};
#endif // DICEROLL_H
