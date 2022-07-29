#include <QQmlContext>
#include <QQuickWidget>

#include "logondialog.h"

LogonDialog::LogonDialog(QWidget *parent):BaseDialog{parent}
{
    _quickWidgetPtr->rootContext()->setContextProperty("logonDialog", this);
    _quickWidgetPtr->setSource(QUrl("qrc:/QtComponents/LogonFrame.qml"));
}
