/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 16. Sep 11:24:29 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAnimar;
    QAction *actionDesanimar;
    QAction *actionAcerca_de_QLists_vs_STL_Lists;
    QAction *actionHeapSort;
    QAction *actionMergeSort;
    QAction *actionQuickSort;
    QAction *actionInsertionSort;
    QWidget *centralWidget;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QListWidget *listWidgetQList;
    QPushButton *GenerarQList;
    QSpinBox *spinBoxQL1;
    QPushButton *ordenar_QLists;
    QListWidget *listWidgetFinal;
    QMenuBar *menuBar;
    QMenu *menuExtras;
    QMenu *menuAyuda;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(548, 433);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/window.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("/*\n"
"QSpinBox {\n"
"background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(204, 204, 204, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"font: bold 10px;\n"
"min-width:4m;\n"
"padding: 6px;\n"
"}\n"
"QSpinBox:hover {\n"
"background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(204, 204, 204, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-style: inset;\n"
"}\n"
"\n"
"/* LIST WIDGET STyLE*/\n"
"/*\n"
"QListWidget {\n"
"background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(204, 204, 204, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"font: bold 12px;\n"
"min-width:4m;\n"
"padding: 6px;\n"
"}\n"
"/*\n"
"QListWidget::item:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 "
                        "stop: 0 #FAFBFE, stop: 1 #DCDEF1);\n"
" }\n"
"\n"
" QListView::item:selected {\n"
"     border: 1px solid #6a6ea9;\n"
" }*/\n"
"QLCDNumber {\n"
"   background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(170, 170, 127, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
"     font: bold 12px;\n"
"     min-width:4m;\n"
"     padding: 6px;\n"
" }\n"
"QMainWindow{\n"
"	background-image: url(:/images/DBGT.jpg);\n"
"}"));
        actionAnimar = new QAction(MainWindow);
        actionAnimar->setObjectName(QString::fromUtf8("actionAnimar"));
        actionDesanimar = new QAction(MainWindow);
        actionDesanimar->setObjectName(QString::fromUtf8("actionDesanimar"));
        actionAcerca_de_QLists_vs_STL_Lists = new QAction(MainWindow);
        actionAcerca_de_QLists_vs_STL_Lists->setObjectName(QString::fromUtf8("actionAcerca_de_QLists_vs_STL_Lists"));
        actionHeapSort = new QAction(MainWindow);
        actionHeapSort->setObjectName(QString::fromUtf8("actionHeapSort"));
        actionMergeSort = new QAction(MainWindow);
        actionMergeSort->setObjectName(QString::fromUtf8("actionMergeSort"));
        actionQuickSort = new QAction(MainWindow);
        actionQuickSort->setObjectName(QString::fromUtf8("actionQuickSort"));
        actionInsertionSort = new QAction(MainWindow);
        actionInsertionSort->setObjectName(QString::fromUtf8("actionInsertionSort"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(40, 130, 121, 41));
        lcdNumber->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 70, 111, 41));
        listWidgetQList = new QListWidget(centralWidget);
        listWidgetQList->setObjectName(QString::fromUtf8("listWidgetQList"));
        listWidgetQList->setGeometry(QRect(270, 160, 81, 191));
        GenerarQList = new QPushButton(centralWidget);
        GenerarQList->setObjectName(QString::fromUtf8("GenerarQList"));
        GenerarQList->setGeometry(QRect(270, 40, 81, 51));
        GenerarQList->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(170, 170, 127, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
"     font: bold 12px;\n"
"     min-width:4m;\n"
"     padding: 6px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(170, 170, 127, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"     border-style: inset;\n"
" }"));
        spinBoxQL1 = new QSpinBox(centralWidget);
        spinBoxQL1->setObjectName(QString::fromUtf8("spinBoxQL1"));
        spinBoxQL1->setGeometry(QRect(270, 110, 81, 31));
        spinBoxQL1->setMinimum(1);
        spinBoxQL1->setMaximum(100000);
        ordenar_QLists = new QPushButton(centralWidget);
        ordenar_QLists->setObjectName(QString::fromUtf8("ordenar_QLists"));
        ordenar_QLists->setGeometry(QRect(430, 40, 81, 51));
        ordenar_QLists->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(170, 170, 127, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
"     font: bold 12px;\n"
"     min-width:4m;\n"
"     padding: 6px;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(170, 170, 127, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"     border-style: inset;\n"
" }"));
        listWidgetFinal = new QListWidget(centralWidget);
        listWidgetFinal->setObjectName(QString::fromUtf8("listWidgetFinal"));
        listWidgetFinal->setGeometry(QRect(430, 160, 81, 191));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 548, 21));
        menuExtras = new QMenu(menuBar);
        menuExtras->setObjectName(QString::fromUtf8("menuExtras"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuExtras->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuExtras->addAction(actionAnimar);
        menuExtras->addAction(actionDesanimar);
        menuAyuda->addAction(actionAcerca_de_QLists_vs_STL_Lists);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sorts", 0, QApplication::UnicodeUTF8));
        actionAnimar->setText(QApplication::translate("MainWindow", "Animar", 0, QApplication::UnicodeUTF8));
        actionDesanimar->setText(QApplication::translate("MainWindow", "Desanimar", 0, QApplication::UnicodeUTF8));
        actionAcerca_de_QLists_vs_STL_Lists->setText(QApplication::translate("MainWindow", "Acerca de Sorts", 0, QApplication::UnicodeUTF8));
        actionHeapSort->setText(QApplication::translate("MainWindow", "HeapSort", 0, QApplication::UnicodeUTF8));
        actionMergeSort->setText(QApplication::translate("MainWindow", "MergeSort", 0, QApplication::UnicodeUTF8));
        actionQuickSort->setText(QApplication::translate("MainWindow", "QuickSort", 0, QApplication::UnicodeUTF8));
        actionInsertionSort->setText(QApplication::translate("MainWindow", "InsertionSort", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Timer</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        GenerarQList->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Genera Aleitoriamente los numeros</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        GenerarQList->setText(QApplication::translate("MainWindow", "Generar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBoxQL1->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Elije la cantidad de numeros a Generar</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ordenar_QLists->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Combina las dos listas en una tercera</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ordenar_QLists->setText(QApplication::translate("MainWindow", "Metodo", 0, QApplication::UnicodeUTF8));
        menuExtras->setTitle(QApplication::translate("MainWindow", "Extras", 0, QApplication::UnicodeUTF8));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Ayuda", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
