#include "appview.h"
#include <QGraphicsScene>

appview::appview(QWidget *parent)
{
    QGraphicsScene *appscene = new QGraphicsScene();
    setScene(appscene);
    QBrush brush;
        brush.setStyle(Qt::SolidPattern);
        brush.setColor(Qt::black);
        setBackgroundBrush(brush);

}
