#ifndef FIGURESET_H
#define FIGURESET_H

#include <QList>
#include <QString>

#include "figure.h"

class figureSet
{
    QString name;
    QList <figure*> availableSet;
public:

    figureSet(QString _name);
    ~figureSet();
    void createStartSet();
    QList<figure *> getAvailableSet();
    figure* returnFigure(int i);
};

#endif // FIGURESET_H
