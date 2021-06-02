#ifndef HELP_H
#define HELP_H

#include <QDialog>
#include <QPixmap>

namespace Ui {
class HelpWindow;
}

class HelpWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HelpWindow(QWidget *parent = nullptr);
    ~HelpWindow();

private:
    Ui::HelpWindow *ui;      // help window
};

#endif // HELP_H
