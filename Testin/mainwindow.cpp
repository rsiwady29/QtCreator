#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCargar_clicked()
{
    QString temp = QFileDialog::getOpenFileName(this,"","");
    ui->lineEdit->setText(temp);
    QFile file(temp);

    if( !file.open(QIODevice::ReadOnly | QIODevice::Text) ){
        QMessageBox::about(this,"Error","Error en Lectura");
        return;
    }
    QTextStream flujo(&file);
    QString block = flujo.readAll();

    for(int i=0; i<block.count(); i++)
        mapaLetras[block.at(i).toAscii()]++;

    map<QChar,int>::iterator it;
    QString t;
    for( it = mapaLetras.begin(); it!=mapaLetras.end(); it++)
    {
        t =  QString((*it).first) + ": " +
             QString::number( (*it).second );
        ui->listWidget->addItem(t);
    }
    ui->textEdit->setText(block);
}
