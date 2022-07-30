import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import SimpleComponents 1.0

Rectangle {
    width: 200;
    height: 200;



    Row{
        id: commandRow;
        anchors.right: parent.right;
        anchors.bottom: parent.bottom;
        anchors.margins: 10;
        spacing: 10;

        SimpleButton{
            text: qsTr("Ok");
        }
        SimpleButton{
            text: qsTr("Cancel");
        }
    }
}
