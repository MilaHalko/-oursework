/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_SOLE;
    QAction *actionSafe_solution_of_SOLE;
    QWidget *centralwidget;
    QPushButton *start;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_2;
    QLineEdit *size;
    QLabel *label;
    QPushButton *instruction;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QRadioButton *m_Jacobi;
    QRadioButton *m_Gauss;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *accuracy;
    QRadioButton *m_Gradient;
    QSpacerItem *verticalSpacer_2;
    QPushButton *createArray;
    QPushButton *generatingNums;
    QFrame *frame;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *A;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *B;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(889, 600);
        actionNew_SOLE = new QAction(MainWindow);
        actionNew_SOLE->setObjectName(QString::fromUtf8("actionNew_SOLE"));
        actionNew_SOLE->setCheckable(true);
        actionSafe_solution_of_SOLE = new QAction(MainWindow);
        actionSafe_solution_of_SOLE->setObjectName(QString::fromUtf8("actionSafe_solution_of_SOLE"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 228, 255);\n"
"border: none;"));
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(740, 510, 131, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        start->setFont(font);
        start->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        gridLayoutWidget_4 = new QWidget(centralwidget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(20, 30, 231, 24));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        size = new QLineEdit(gridLayoutWidget_4);
        size->setObjectName(QString::fromUtf8("size"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(size->sizePolicy().hasHeightForWidth());
        size->setSizePolicy(sizePolicy1);
        size->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));

        gridLayout_2->addWidget(size, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        instruction = new QPushButton(centralwidget);
        instruction->setObjectName(QString::fromUtf8("instruction"));
        instruction->setGeometry(QRect(20, 510, 131, 32));
        instruction->setFont(font);
        instruction->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 170, 231, 141));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        m_Jacobi = new QRadioButton(gridLayoutWidget_2);
        m_Jacobi->setObjectName(QString::fromUtf8("m_Jacobi"));
        m_Jacobi->setFont(font);

        gridLayout_3->addWidget(m_Jacobi, 0, 1, 1, 1);

        m_Gauss = new QRadioButton(gridLayoutWidget_2);
        m_Gauss->setObjectName(QString::fromUtf8("m_Gauss"));
        m_Gauss->setFont(font);

        gridLayout_3->addWidget(m_Gauss, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;"));

        gridLayout_3->addWidget(label_3, 4, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        accuracy = new QLineEdit(gridLayoutWidget_2);
        accuracy->setObjectName(QString::fromUtf8("accuracy"));
        accuracy->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));

        gridLayout_3->addWidget(accuracy, 4, 1, 1, 1);

        m_Gradient = new QRadioButton(gridLayoutWidget_2);
        m_Gradient->setObjectName(QString::fromUtf8("m_Gradient"));
        m_Gradient->setFont(font);

        gridLayout_3->addWidget(m_Gradient, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(152, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);

        createArray = new QPushButton(centralwidget);
        createArray->setObjectName(QString::fromUtf8("createArray"));
        createArray->setGeometry(QRect(20, 60, 231, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setBold(true);
        createArray->setFont(font2);
        createArray->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        generatingNums = new QPushButton(centralwidget);
        generatingNums->setObjectName(QString::fromUtf8("generatingNums"));
        generatingNums->setGeometry(QRect(20, 100, 231, 31));
        generatingNums->setFont(font2);
        generatingNums->setStyleSheet(QString::fromUtf8("color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(260, 30, 611, 461));
        frame->setStyleSheet(QString::fromUtf8("font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;\n"
"background-color: rgb(243, 255, 251);\n"
"border: 1.5px solid rgb(141, 156, 201);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(-1, -1, 611, 461));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 607, 457));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 541, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        A = new QTableWidget(verticalLayoutWidget);
        A->setObjectName(QString::fromUtf8("A"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(14);
        font3.setItalic(true);
        A->setFont(font3);
        A->setLayoutDirection(Qt::LeftToRight);
        A->setAutoFillBackground(false);
        A->setStyleSheet(QString::fromUtf8(""));
        A->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        A->setFrameShape(QFrame::NoFrame);
        A->setFrameShadow(QFrame::Plain);
        A->setLineWidth(0);
        A->setMidLineWidth(0);
        A->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        A->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        A->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        A->setAutoScroll(false);
        A->setShowGrid(true);
        A->setGridStyle(Qt::CustomDashLine);
        A->setWordWrap(true);
        A->setRowCount(0);
        A->setColumnCount(0);
        A->horizontalHeader()->setMinimumSectionSize(10);
        A->horizontalHeader()->setDefaultSectionSize(50);
        A->verticalHeader()->setVisible(false);
        A->verticalHeader()->setDefaultSectionSize(25);
        A->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(A);

        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(550, 0, 74, 461));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        B = new QTableWidget(horizontalLayoutWidget);
        B->setObjectName(QString::fromUtf8("B"));
        B->setFont(font3);
        B->setLayoutDirection(Qt::LeftToRight);
        B->setInputMethodHints(Qt::ImhFormattedNumbersOnly|Qt::ImhNoTextHandles);
        B->setFrameShape(QFrame::NoFrame);
        B->setFrameShadow(QFrame::Plain);
        B->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        B->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        B->setAutoScrollMargin(0);
        B->setGridStyle(Qt::CustomDashLine);
        B->setRowCount(0);
        B->setColumnCount(0);
        B->horizontalHeader()->setVisible(true);
        B->horizontalHeader()->setCascadingSectionResizes(false);
        B->horizontalHeader()->setMinimumSectionSize(55);
        B->horizontalHeader()->setDefaultSectionSize(55);
        B->horizontalHeader()->setHighlightSections(false);
        B->verticalHeader()->setVisible(false);
        B->verticalHeader()->setCascadingSectionResizes(false);
        B->verticalHeader()->setMinimumSectionSize(20);
        B->verticalHeader()->setDefaultSectionSize(25);
        B->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        B->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_2->addWidget(B);

        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 889, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_SOLE);
        menuFile->addAction(actionSafe_solution_of_SOLE);
        menuFile->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SOLE solving", nullptr));
        actionNew_SOLE->setText(QCoreApplication::translate("MainWindow", "New SOLE", nullptr));
#if QT_CONFIG(tooltip)
        actionNew_SOLE->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#1a2d50;\">New SOLE</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew_SOLE->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSafe_solution_of_SOLE->setText(QCoreApplication::translate("MainWindow", "Safe solution of SOLE", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start!", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Array size:         ", nullptr));
        instruction->setText(QCoreApplication::translate("MainWindow", "Instruction", nullptr));
        m_Jacobi->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;", nullptr));
        m_Jacobi->setText(QCoreApplication::translate("MainWindow", "Jacobi method", nullptr));
        m_Gauss->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;", nullptr));
        m_Gauss->setText(QCoreApplication::translate("MainWindow", "Gauss\342\200\223Seidel method", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Accuracy:", nullptr));
        label_2->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Choose :", nullptr));
        m_Gradient->setStyleSheet(QCoreApplication::translate("MainWindow", "color: rgb(27, 46, 79);\n"
"font-size: 5.0em;\n"
"font-family: 'Times New Roman', 14;", nullptr));
        m_Gradient->setText(QCoreApplication::translate("MainWindow", "Gradient descent", nullptr));
        createArray->setText(QCoreApplication::translate("MainWindow", "Create array", nullptr));
        generatingNums->setText(QCoreApplication::translate("MainWindow", "Generate numbers", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
