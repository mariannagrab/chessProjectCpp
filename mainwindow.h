#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QList>
#include "board.h"
#include "boardpiece.h"
#include "figureset.h"

class mainWindow: public QGraphicsView
{
    Q_OBJECT
    board *chessBoard;
    QGraphicsScene *scene;
    boardPiece *rect[8][8];
    figureSet *whites;
    figureSet *blacks;

public:
    mainWindow(QWidget *parent =0);
    ~mainWindow();
    void addQItem(QGraphicsItem *item);
    QGraphicsScene* getScene();
    void createBoard();
    void setStartPieces();


};

#endif // MAINWINDOW_H
