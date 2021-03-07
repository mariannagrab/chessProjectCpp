#include "boardpiece.h"
#include <QGraphicsRectItem>

boardPiece::boardPiece(QGraphicsRectItem *parent): QGraphicsRectItem (parent){
    setRect(0,0,size,size);
}
boardPiece::~boardPiece(){

}

void boardPiece::setColor(QBrush _color)
{
    setBrush(_color);
}

void boardPiece::setIsTakenBy(figure *_fig){
    isTakenBy = _fig;
}

void boardPiece::putFigure(figure *_fig)
{
    _fig->setPos(x()+50- _fig->pixmap().width()/2  ,y()+50-_fig->pixmap().width()/2);
    setIsTakenBy(_fig);
    setIsTaken(true);
}

void boardPiece::remFigure(figure *_fig)
{
    setIsTaken(false);
    setIsTakenBy(nullptr);
}

bool boardPiece::setIsTaken(bool _taken)
{
   isTaken = _taken;
}
