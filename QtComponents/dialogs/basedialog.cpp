#include <QVBoxLayout>
#include <QQmlEngine>
#include <QQuickWidget>

#include "basedialog.h"

BaseDialog::BaseDialog(QWidget *parent):QDialog{parent}
{
    setWindowFlags(Qt::Window|Qt::WindowCloseButtonHint|Qt::WindowMinimizeButtonHint);
    _quickWidgetPtr=new QQuickWidget(this);
    _quickWidgetPtr->setResizeMode(QQuickWidget::SizeRootObjectToView);
    _quickWidgetPtr->engine()->addImportPath("qrc:/");

    QVBoxLayout* vboxLayoutPtr=new QVBoxLayout;
    vboxLayoutPtr->setContentsMargins(QMargins());
    vboxLayoutPtr->addWidget(_quickWidgetPtr);
    setLayout(vboxLayoutPtr);
}

BaseDialog::BaseDialog(const QString& title, QWidget *parent):BaseDialog{parent}
{
    setWindowTitle(title);
}
