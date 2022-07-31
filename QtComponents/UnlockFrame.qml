import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import SimpleComponents 1.0

Rectangle {
    id: root;
    width: 350;
    height: 110;

    GridLayout{
        id: fieldsGrid;
        anchors.top: parent.top;
        anchors.bottom: commandRow.top;
        anchors.left: parent.left;
        anchors.right: parent.right;
        anchors.margins: 10;
        columns: 2;
        rows: 2;
        rowSpacing: 5;
        columnSpacing: 20;

        SimpleText{
            text: qsTr("Password:");
        }
        SimpleTextField{
            id: passwordTxt;
            Layout.fillWidth: true;
            echoMode: showPasswordCheckBox.checked ? TextField.Normal : TextField.Password;
            passwordCharacter: "*";
        }

        SimpleCheckBox{
            id: showPasswordCheckBox;
            text: qsTr("Show password");
            Layout.row: 1;
            Layout.column: 1;

        }
    }

    Row{
        id: commandRow;
        anchors.right: parent.right;
        anchors.bottom: parent.bottom;
        anchors.margins: 10;
        spacing: 10;

        SimpleButton{
            id: okButton;
            width: cancelButton.width;
            text: qsTr("Ok");

            onClicked: {
                unlockDialog.accept();
            }
        }
        SimpleButton{
            id: cancelButton;
            text: qsTr("Cancel");
            onClicked: {
                unlockDialog.reject();
            }
        }
    }

    Connections{
        target: unlockDialog;
    }
}
