#ifndef FILENAME_H
#define FILENAME_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class fileName;
}

class fileName : public QDialog
{
    Q_OBJECT

public:
    explicit fileName(QWidget *parent = nullptr);
    ~fileName();
    QString getFilename();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::fileName *ui;
    QString filename;
};

#endif // FILENAME_H
