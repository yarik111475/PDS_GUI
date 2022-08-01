#ifndef LOGONDIALOG_H
#define LOGONDIALOG_H

#include "basedialog.h"

class LogonDialog : public BaseDialog
{
public:
    LogonDialog(QWidget* parent=nullptr);
    LogonDialog(const QString& title, QWidget* parent=nullptr);
};

#endif // LOGONDIALOG_H
