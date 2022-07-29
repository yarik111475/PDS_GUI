#include <QQmlContext>
#include <QQuickWidget>

#include "unlockdialog.h"

UnlockDialog::UnlockDialog(QWidget* parent):BaseDialog{parent}
{
    _quickWidgetPtr->rootContext()->setContextProperty("unlockDialog", this);
    _quickWidgetPtr->setSource(QUrl("qrc:/QtComponents/UnlockFrame.qml"));
}
