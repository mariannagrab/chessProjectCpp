#include "mainwindow.h"
#include <QBrush>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include "board.h"
#include "board.cpp"
#include "figure.h"
#include <QPixmap>


mainWindow::mainWindow(QWidget *parent) :QGraphicsView(parent){
    setWindowTitle("Gra w szachy");
    setFixedSize(1400,1000);
    scene = new QGraphicsScene(0,0,1400,1000);
    scene -> setBackgroundBrush(Qt::yellow);
    this->setScene(scene);
    createBoard();
    setStartPieces();


}

mainWindow::~mainWindow()
{

}

void mainWindow::addQItem(QGraphicsItem *item)
{
    scene->addItem(item);
}

QGraphicsScene* mainWindow::getScene()
{
    return scene;
}

void mainWindow::createBoard()
{

    int x =(1400/2)-400;int y =100;
    for(int i = 0; i < 8; i++) {
           for(int j = 0; j < 8; j++)
           {
               boardPiece *bp = new boardPiece();
               bp->setPos(x+100*j,y+100*i);
               if((i+j)%2==0)
                   bp->setColor(Qt::white);
               else
                   bp->setColor(Qt::black);
               rect[j][i] = bp;
               addQItem(bp);


           }
    }
}

void mainWindow::setStartPieces()
{
    whites = new figureSet("white");
    blacks = new figureSet("black");


    for(int i = 0; i < 8; i++) {
           for(int j = 0; j < 8; j++){
               static int k=0,l=0;
               figure *cfigure;


               if(i<=1){
                    cfigure = whites->returnFigure(k++);
                    rect[j][i]-> putFigure(cfigure);
                    addQItem(cfigure);
               }
               else if(i >= 6){
                   cfigure = blacks->returnFigure(l++);
                   rect[j][i]-> putFigure(cfigure);
                   addQItem(cfigure);
               }

//                cfigure->setPos(x+20+(100*j),y+20+(100*i));
//                addQItem(cfigure);

            }
    }

}



