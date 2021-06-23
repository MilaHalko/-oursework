#include "solving.h"
#include "ui_solving.h"

Solving::Solving(QWidget *parent) : QDialog(parent), ui(new Ui::Solving) {
    ui->setupUi(this);
    answerSTR.resize(0);
}

Solving::~Solving() {
    delete ui;
}

void Solving::ShowAnswer() {
    ui->answer->setColumnCount(1);
    ui->answer->setRowCount(answerSTR.size());

    for (int i = 0; i < answerSTR.size(); i++) {
        QTableWidgetItem *item = new QTableWidgetItem(answerSTR[i]);

        ui->answer->setItem(i, 1, item);

    }
}

void Solving::on_pushButton_2_clicked() {
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/Users/mila/Desktop", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    FileName window;
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
    this->answerSTR.resize(answerSTR.size() + 1);
    for (int i = 0; i < answerSTR.size(); i++)
        this->answerSTR[i] = answerSTR[i];
}

void Solving::setABSize(vector<vector<long double>> A, vector<long double> B, int size) {
    this->size = size;
    this->A.resize(size);
    this->B.resize(size);

    for (int i = 0; i < size; i++) {
        this->A[i].resize(size);
        this->B[i] = B[i];
        for (int j = 0; j < size; j++) {
            this->A[i][j] = A[i][j];
        }
    }
}

void Solving::on_pushButton_3_clicked()
{
    if(B.size() == 2) {
        Graphic graphWin;
        graphWin.setModal(true);
        graphWin.showGraph(A, B);
    }
    else {
        QMessageBox::critical(this, "Error!", "This function is evailable for systems which size is 2");
    }
}

