#include "firstwidget.h"


FirstWidget::FirstWidget(QWidget *parent) :
    QWidget(parent),
 ui(new Ui::FirstWidget)
    
{
    ui->setupUi(this);
}

FirstWidget::~FirstWidget()
{
    delete ui;
}
