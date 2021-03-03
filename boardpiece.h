#ifndef BOARDPIECE_H
#define BOARDPIECE_H
#include <QGraphicsRectItem>


class boardPiece : public QGraphicsRectItem
{
    char color;

public:
    boardPiece(QGraphicsRectItem *parent=0);
    ~boardPiece();
};

#endif // BOARDPIECE_H
