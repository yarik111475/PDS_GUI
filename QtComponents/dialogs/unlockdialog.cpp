#include <QQmlContext>
#include <QQuickWidget>

#include "unlockdialog.h"

UnlockDialog::UnlockDialog(QWidget* parent):BaseDialog{parent}
{
    setWindowTitle(QObject::tr("Unlock"));
    _quickWidgetPtr->rootContext()->setContextProperty("unlockDialog", this);
    _quickWidgetPtr->setSource(QUrl("qrc:/QtComponents/UnlockFrame.qml"));
}
