#ifndef CHANGEPASSDIALOG_H
#define CHANGEPASSDIALOG_H

#include "basedialog.h"

class ChangePassDialog : public BaseDialog
{
public:
    ChangePassDialog(QWidget* parent=nullptr);
    ChangePassDialog(const QString& title, QWidget* parent=nullptr);
};

#endif // CHANGEPASSDIALOG_H
