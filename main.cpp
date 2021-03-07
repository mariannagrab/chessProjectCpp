#include "mainwindow.h"
#include <QApplication>
#include "boardpiece.h"



mainWindow *mi;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mi = new mainWindow();
    mi ->show();

    return a.exec();
}
