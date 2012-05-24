#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(0));

    // VERDE      1
    // AMARILLO   2
    // Rojo       3
    // Azul       4
    puedoJugar = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnVerde_clicked()
{
    if( !puedoJugar) return;
    revisarOrden(1);
}

void MainWindow::on_btnAmarillo_clicked()
{
    if( !puedoJugar) return;
    revisarOrden(2);
}

void MainWindow::on_btnRojo_clicked()
{
    if( !puedoJugar) return;
    revisarOrden(3);
}

void MainWindow::on_btnAzul_clicked()
{
    if( !puedoJugar) return;
    revisarOrden(4);
}

void MainWindow::revisarOrden(int n)
{
    if( i>0)
    {
        int tmp = laLista->devolver(i);
        if( tmp != n) // NO clickeo el correcto
        {
            puedoJugar = false;
            QMessageBox::critical(this,"Perdiste","Perdiste");
            ui->btnPlay->setEnabled(true);
            ui->label->setText("0");
            return;
        }
        i--;
        if( i== 0)
            agregarValorEIniciar();
    }
}

void MainWindow::agregarValorEIniciar()
{
    int nuevoValor = ( rand() % 4 ) + 1;
    laLista->insertar(nuevoValor);

    i = laLista->cuantos_elem();
    QTimer::singleShot(100,this,SLOT(EncenderBoton()));
    ui->label->setText(QString::number(i));
}

void MainWindow::on_btnPlay_clicked()
{
    ui->btnPlay->setEnabled(false);
    puedoJugar = false;
    laLista = new lista();

    agregarValorEIniciar();
}

void MainWindow::EncenderBoton()
{
    actual = laLista->devolver(i);

    if( actual == 4 )
        ui->btnAzul->setStyleSheet("background-image: url(:/azul_b.jpg);");
    else if( actual == 3 )
        ui->btnRojo->setStyleSheet("background-image: url(:/REd_b.jpg);");
    else if( actual == 2)
        ui->btnAmarillo->setStyleSheet("background-image: url(:/Yellow_b.jpg);");
    else if( actual == 1)
        ui->btnVerde->setStyleSheet("background-image: url(:/Green_b.jpg);");

    QTimer::singleShot(400,this,SLOT(ApagarBoton()));
}

void MainWindow::ApagarBoton()
{
    if( actual == 4 )
        ui->btnAzul->setStyleSheet("background-image: url(:/azul.jpg);");
    else if( actual == 3)
        ui->btnRojo->setStyleSheet("background-image: url(:/REd.jpg);");
    else if ( actual == 2)
        ui->btnAmarillo->setStyleSheet("background-image: url(:/Yellow.jpg);");
    else if( actual == 1)
        ui->btnVerde->setStyleSheet("background-image: url(:/Green.jpg);");

    i--;
    if( i > 0)
        QTimer::singleShot(100,this,SLOT(EncenderBoton()));
    else
    {
        puedoJugar = true;
        i = laLista->cuantos_elem();
    }
}
