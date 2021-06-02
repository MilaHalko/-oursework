#ifndef HELPW_H
#define HELPW_H

#include <QDialog>
#include <QPixmap>

namespace Ui {
class helpW;
}

class helpW : public QDialog
{
    Q_OBJECT

public:
    explicit helpW(QWidget *parent = nullptr);
    ~helpW();

private:
    Ui::helpW *ui;
};

#endif // HELPW_H
