#include <QQmlContext>
#include <QQuickWidget>

#include "changepassdialog.h"

ChangePassDialog::ChangePassDialog(QWidget *parent):BaseDialog{parent}
{
    _quickWidgetPtr->rootContext()->setContextProperty("changePassDialog", this);
    _quickWidgetPtr->setSource(QUrl("qrc:/QtComponents/ChangePassFrame.qml"));
}
