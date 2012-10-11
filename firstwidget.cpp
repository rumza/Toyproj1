#include "firstwidget.h"


FirstWidget::FirstWidget(QWidget *parent) :
    QWidget(parent)
    
{
    ui->setupUi(this);
}

FirstWidget::~FirstWidget()
{
    delete ui;
}
