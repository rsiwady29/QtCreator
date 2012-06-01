#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    this->setMaximumWidth(187);this->setMinimumWidth(187);
    this->setMaximumHeight(270);this->setMinimumHeight(270);
}

about::~about()
{
    delete ui;
}

void about::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
