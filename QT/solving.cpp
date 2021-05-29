#include "solving.h"
#include "ui_solving.h"

Solving::Solving(QWidget *parent) : QDialog(parent), ui(new Ui::Solving) {
    ui->setupUi(this);
    answerSTR.resize(0);
}

Solving::~Solving() {
    delete ui;
}

void Solving::ShowAnswer(QVector<QString> answerSRT) {
    ui->answer->setColumnCount(1);
    ui->answer->setRowCount(answerSRT.size());

    for (int i = 0; i < answerSRT.size(); i++) {
        QTableWidgetItem *item = new QTableWidgetItem(answerSRT[i]);
        ui->answer->setItem(i, 1, item);
    }
}

void Solving::on_pushButton_2_clicked() {
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/Users/mila/Desktop", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    fileName window;
    window.setModal(true);
    window.exec();
    QString filename = window.getFilename();
    QString fullname = dir + "/" + filename + ".txt";
    QFile file(fullname);
    if(!file.open(QFile::WriteOnly | QFile::Text))
        QMessageBox::critical(this, "Error!:", "File unable to open(");
    QTextStream out(&file);

    for (int i = 0; i < answerSTR.size(); i++)
        out << answerSTR[i];
    file.close();
}

void Solving::setAnswerSTR(QVector<QString> answerSTR) {
    this->answerSTR.resize(answerSTR.size());
    for (int i = 0; i < answerSTR.size(); i++)
        this->answerSTR[i] = answerSTR[i] + "\n";
}
