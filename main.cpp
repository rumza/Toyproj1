#include <QtGui/QApplication>
#include <QWidget>
#include "firstwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstWidget w;
    w.resize(300, 300);
    w.setWindowTitle("First QWidget");
    w.show();
    
    return a.exec();
}



