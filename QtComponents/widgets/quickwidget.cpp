#include <QQmlContext>
#include "quickwidget.h"

QuickWidget::QuickWidget(QWidget *parent):QQuickWidget{parent}
{
    rootContext()->setContextProperty("quickWidget", this);
    setResizeMode(QQuickWidget::SizeViewToRootObject);
    setWindowFlags(Qt::Window|Qt::WindowCloseButtonHint|Qt::WindowMinimizeButtonHint);
    setSource(QUrl("qrc:/QtComponents/WidgetFrame.qml"));
}

QuickWidget::QuickWidget(const QString &title, QWidget *parent):QuickWidget{parent}
{
    setWindowTitle(title);
}
