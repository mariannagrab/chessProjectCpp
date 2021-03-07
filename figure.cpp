#include "figure.h"

#include <QPixmap>
#include <QString>
#include <string>





figure::figure(QString _name,QGraphicsItem *parent)
{
    setPixmap(QPixmap(_name));

}
