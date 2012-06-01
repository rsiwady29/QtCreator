/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created: Tue 14. Sep 14:42:05 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(187, 270);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/window.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setWindowIcon(icon);
        label = new QLabel(about);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 201, 121));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/DragonBallGT_logo.png")));
        label_5 = new QLabel(about);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 120, 161, 21));
        label_6 = new QLabel(about);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 250, 46, 13));
        commandLinkButton = new QCommandLinkButton(about);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(0, 220, 172, 31));
        commandLinkButton_2 = new QCommandLinkButton(about);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(0, 190, 172, 31));
        commandLinkButton_3 = new QCommandLinkButton(about);
        commandLinkButton_3->setObjectName(QString::fromUtf8("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(0, 160, 172, 31));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Acerca de Sorts", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_5->setText(QApplication::translate("about", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">Sorts</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("about", "14/09/10", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("about", "Richard Siwady", 0, QApplication::UnicodeUTF8));
        commandLinkButton_2->setText(QApplication::translate("about", "Dagoberto Castellanos", 0, QApplication::UnicodeUTF8));
        commandLinkButton_3->setText(QApplication::translate("about", "Karla Leon", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
