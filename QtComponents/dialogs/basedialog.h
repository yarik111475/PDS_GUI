#ifndef BASEDIALOG_H
#define BASEDIALOG_H

#include <QDialog>

class QQuickWidget;

class BaseDialog : public QDialog
{
public:
    BaseDialog(QWidget* parent=nullptr);
    BaseDialog(const QString& title, QWidget* parent=nullptr);

protected:
    QQuickWidget* _quickWidgetPtr {nullptr};
};

#endif // BASEDIALOG_H
