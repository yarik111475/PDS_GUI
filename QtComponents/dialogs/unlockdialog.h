#ifndef UNLOCKDIALOG_H
#define UNLOCKDIALOG_H

#include "basedialog.h"

class UnlockDialog : public BaseDialog
{
public:
    UnlockDialog(QWidget* parent=nullptr);
    UnlockDialog(const QString& title, QWidget* parent=nullptr);
};

#endif // UNLOCKDIALOG_H
