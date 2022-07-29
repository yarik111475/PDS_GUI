#include <QPushButton>
#include <QVBoxLayout>
#include <memory>

#include "testwidget.h"
#include "dialogs/logondialog.h"
#include "dialogs/unlockdialog.h"
#include "dialogs/changepassdialog.h"


TestWidget::TestWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton* changePassDialogButtonPtr=new QPushButton(QObject::tr("Change password dialog"));
    QObject::connect(changePassDialogButtonPtr, &QPushButton::clicked,this, &TestWidget::slotChangePassDialog);

    QPushButton* logonDialogButtonPtr=new QPushButton(QObject::tr("Logon dialog"));
    QObject::connect(logonDialogButtonPtr, &QPushButton::clicked,this, &TestWidget::slotLogonDialog);

    QPushButton* unlockDialogButtonPtr=new QPushButton(QObject::tr("Unlock dialog"));
    QObject::connect(unlockDialogButtonPtr, &QPushButton::clicked,this, &TestWidget::slotUnlockDialog);

    QVBoxLayout* vboxLayoutPtr=new QVBoxLayout;
    vboxLayoutPtr->addWidget(changePassDialogButtonPtr);
    vboxLayoutPtr->addWidget(logonDialogButtonPtr);
    vboxLayoutPtr->addWidget(unlockDialogButtonPtr);
    setLayout(vboxLayoutPtr);
}

TestWidget::~TestWidget()
{
}

void TestWidget::slotChangePassDialog()
{
    std::unique_ptr<ChangePassDialog> dialogPtr {new ChangePassDialog(this)};
    dialogPtr->exec();
}

void TestWidget::slotLogonDialog()
{
    std::unique_ptr<LogonDialog> dialogPtr {new LogonDialog(this)};
    dialogPtr->exec();
}

void TestWidget::slotUnlockDialog()
{
    std::unique_ptr<UnlockDialog> dialogPtr {new UnlockDialog(this)};
    dialogPtr->exec();
}

