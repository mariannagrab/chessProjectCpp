#include "boardpiece.h"
#include <QGraphicsRectItem>

boardPiece::boardPiece(QGraphicsRectItem *parent): QGraphicsRectItem (parent){
    setRect(0,0,100,100);
}
boardPiece::~boardPiece(){

}
