#include "dialog.h"
#include <QDialog>
//#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent):QDialog(parent)
{
   // ui->setupUi(this);
    //scene = new GraphicsScene(this);

}

Dialog::~Dialog()
{
    delete ui;
}
