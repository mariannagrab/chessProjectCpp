#include "figureset.h"



figureSet::figureSet(QString _name)
{
    name = _name;
    createStartSet();
}

void figureSet::createStartSet()
{
    figure *fp1;
    if (name == "white"){

    for(int i = 0; i < 16; i++){
        fp1 = new figure(":/images/rookwhite.png");
        availableSet.append(fp1);
    }}else{
        for(int i = 0; i < 16; i++){
            fp1 = new figure(":/images/rookblack.png");
            availableSet.append(fp1);
        }

    }

}

QList<figure *> figureSet::getAvailableSet()
{
    return availableSet;
}

figure* figureSet::returnFigure(int i)
{
    return availableSet[i];
}
