#ifndef FIGURE_H
#define FIGURE_H

#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QString>



class figure : public QGraphicsPixmapItem
{
    //QPixmap name;
public:
    figure(QString _name,QGraphicsItem *parent = 0);
};

#endif // FIGURE_H
