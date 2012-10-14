#ifndef FIRSTWIDGET_H
#define FIRSTWIDGET_H

#include <QWidget>

namespace w {
class FirstWidget;
}

class FirstWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit FirstWidget(QWidget *parent = 0);
    ~FirstWidget();
    

};

#endif // FIRSTWIDGET_H
