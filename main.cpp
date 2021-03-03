#include "mainwindow.h"
#include "board.h"
#include "board.cpp"
#include <QApplication>
#include "appview.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
appview app;
app.show();

    return a.exec();
}
