#include <QVBoxLayout>
#include <QtQuickWidgets/QQuickWidget>

#include "basedialog.h"

BaseDialog::BaseDialog(QWidget *parent):QDialog{parent}
{
    setWindowFlags(Qt::Window|Qt::WindowCloseButtonHint);
    _quickWidgetPtr=new QQuickWidget(this);
    _quickWidgetPtr->setResizeMode(QQuickWidget::SizeRootObjectToView);

    QVBoxLayout* vboxLayoutPtr=new QVBoxLayout;
    vboxLayoutPtr->setContentsMargins(QMargins());
    vboxLayoutPtr->addWidget(_quickWidgetPtr);
    setLayout(vboxLayoutPtr);
}
