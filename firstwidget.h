#ifndef FIRSTWIDGET_H
#define FIRSTWIDGET_H

#include <QWidget>

namespace Ui {
class FirstWidget;
}

class FirstWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit FirstWidget(QWidget *parent = 0);
    ~FirstWidget();
    
private:
    Ui::FirstWidget *ui;
};

#endif // FIRSTWIDGET_H
