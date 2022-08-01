#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QWidget>

class TestWidget : public QWidget
{
    Q_OBJECT

public:
    TestWidget(QWidget *parent = nullptr);
    ~TestWidget();

private slots:
    void slotChangePassDialog();
    void slotLogonDialog();
    void slotUnlockDialog();
    void slotSimpleWidget();
};
#endif // TESTWIDGET_H
