#ifndef BOARDPIECE_H
#define BOARDPIECE_H
#include "figure.h"

#include <QBrush>
#include <QGraphicsRectItem>


class boardPiece : public QGraphicsRectItem
{

    QBrush color;
    const int size = 100;
    figure* isTakenBy;
    bool isTaken;



public:
    boardPiece(QGraphicsRectItem *parent=0);
    ~boardPiece();
    void setColor(QBrush _color);
    void setIsTakenBy(figure *_fig);
    void putFigure(figure* _fig);
    void remFigure(figure* _fig);
    bool setIsTaken(bool _taken);
};

#endif // BOARDPIECE_H
