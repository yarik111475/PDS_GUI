QT += core gui widgets qml quick quickwidgets quickcontrols2

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    $$PWD/dialogs/basedialog.cpp \
    $$PWD/dialogs/changepassdialog.cpp \
    $$PWD/dialogs/logondialog.cpp \
    $$PWD/dialogs/unlockdialog.cpp \
    $$PWD/widgets/quickwidget.cpp


HEADERS += \
    $$PWD/dialogs/basedialog.h \
    $$PWD/dialogs/changepassdialog.h \
    $$PWD/dialogs/logondialog.h \
    $$PWD/dialogs/unlockdialog.h \
    $$PWD/widgets/quickwidget.h


include($$PWD/../QmlComponents/QmlComponents.pri)

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    $$PWD/QtComponents.qrc
