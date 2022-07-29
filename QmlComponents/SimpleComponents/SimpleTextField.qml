import QtQuick 2.12
import QtQuick.Controls 2.12

TextField {
    id: control;
    padding: 5;
    leftPadding: 10;
    rightPadding: 10;
    renderType: Text.NativeRendering;
    property bool bordered: true;
    property color borderColor: "black";
    property int borderRadius: 2;
    selectByMouse: true;

    background: Rectangle{
        width: control.width;
        height: control.height;
        border.width: 1;
        border.color: bordered ? borderColor : "transparent";
        radius: borderRadius;
    }

}
