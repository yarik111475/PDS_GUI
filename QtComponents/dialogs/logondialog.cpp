#include <QQmlContext>
#include <QQuickWidget>

#include "logondialog.h"

LogonDialog::LogonDialog(QWidget *parent):BaseDialog{parent}
{
    setWindowTitle(QObject::tr("Logon"));
    _quickWidgetPtr->rootContext()->setContextProperty("logonDialog", this);
    _quickWidgetPtr->setSource(QUrl("qrc:/QtComponents/LogonFrame.qml"));
}
