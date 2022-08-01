#ifndef QUICKWIDGET_H
#define QUICKWIDGET_H

#include <QQuickWidget>

class QuickWidget : public QQuickWidget
{
public:
    QuickWidget(QWidget* parent=nullptr);
    QuickWidget(const QString& title, QWidget* parent=nullptr);
};

#endif // QUICKWIDGET_H
