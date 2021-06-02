#ifndef FILENAME_H
#define FILENAME_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class FileName;
}

class FileName : public QDialog
{
    Q_OBJECT

public:
    explicit FileName(QWidget *parent = nullptr);
    ~FileName();
    QString getFilename();           // returns a filename for saving data

private slots:
    void on_buttonBox_accepted();    // closes a window "fileName"

private:
    Ui::FileName *ui;                // window "fileName"
    QString filename;                // consists filename
};

#endif // FILENAME_H
