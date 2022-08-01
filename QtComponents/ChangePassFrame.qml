import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import SimpleComponents 1.0
import ExtComponents 1.0

Rectangle {
    id: root;
    width: 350;
    height: 180;

    GridLayout{
        id: fieldsGrid;
        anchors.top: parent.top;
        anchors.bottom: commandRow.top;
        anchors.left: parent.left;
        anchors.right: parent.right;
        anchors.margins: 10;
        columns: 2;
        rows: 4;
        rowSpacing: 5;
        columnSpacing: 20;

        SimpleText{
            text: qsTr("Old password:");
        }
        SimpleTextField{
            id: oldPassword;
            Layout.fillWidth: true;
            echoMode: showPasswordCheckBox.checked ? TextField.Normal : TextField.Password;
            passwordCharacter: "*";
        }

        SimpleText{
            text: qsTr("New password:");
        }
        SimpleTextField{
            id: newPassword;
            Layout.fillWidth: true;
            echoMode: showPasswordCheckBox.checked ? TextField.Normal : TextField.Password;
            passwordCharacter: "*";
        }

        SimpleText{
            text: qsTr("Retype password:");
        }
        SimpleTextField{
            id: retypePassword;
            Layout.fillWidth: true;
            echoMode: showPasswordCheckBox.checked ? TextField.Normal : TextField.Password;
            passwordCharacter: "*";
        }

        SimpleCheckBox{
            id: showPasswordCheckBox;
            indicatorColor: "green";
            text: qsTr("Show passwords");
            Layout.row: 3;
            Layout.column: 1;

        }
    }

    Row{
        id: commandRow;
        anchors.right: parent.right;
        anchors.bottom: parent.bottom;
        anchors.margins: 10;
        spacing: 10;

        GradientButton{
            id: okButton;
            width: cancelButton.width;
            borderRadius: 10;
            text: qsTr("Ok");

            onClicked: {
                changePassDialog.accept();
            }
        }
        GradientButton{
            id: cancelButton;
            borderRadius: 10;
            text: qsTr("Cancel");
            onClicked: {
                changePassDialog.reject();
            }
        }
    }

    Connections{
        target: changePassDialog;
    }
}
