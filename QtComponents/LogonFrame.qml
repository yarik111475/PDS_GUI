import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import SimpleComponents 1.0
import ExtComponents 1.0

Rectangle {
    id: root;
    width: 350;
    height: 200;

    GridLayout{
        id: fieldsGrid;
        anchors.top: parent.top;
        anchors.bottom: commandRow.top;
        anchors.left: parent.left;
        anchors.right: parent.right;
        anchors.margins: 10;
        columns: 2;
        rows: 5;
        rowSpacing: 5;
        columnSpacing: 20;

        SimpleText{
            text: qsTr("User name:");
        }
        SimpleTextField{
            Layout.fillWidth: true;
        }

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
            indicatorColor: "green";
            text: qsTr("Show password");
            Layout.row: 2;
            Layout.column: 1;

        }

        SimpleText{
            text: qsTr("Server:");
        }
        SimpleComboBox{
            Layout.fillWidth: true;
            model: 10;
        }

        SimpleCheckBox{
            id: rememberMeCheckBox;
            indicatorColor: "green";
            text: qsTr("Remember me");
            Layout.row: 4;
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
                logonDialog.accept();
            }
        }
        GradientButton{
            id: cancelButton;
            borderRadius: 10;
            text: qsTr("Cancel");
            onClicked: {
                logonDialog.reject();
            }
        }
    }

    Connections{
        target: logonDialog;
    }
}

