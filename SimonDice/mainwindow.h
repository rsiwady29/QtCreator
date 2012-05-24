#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QMessageBox>
#include <time.h>

#include "lista.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    //QList<int> lista;
    int i;
    int actual;
    bool puedoJugar;
    lista *laLista;
    void revisarOrden(int n);
    void agregarValorEIniciar();

private slots:
    void on_btnPlay_clicked();
    void on_btnAzul_clicked();
    void on_btnRojo_clicked();
    void on_btnAmarillo_clicked();
    void on_btnVerde_clicked();
    void EncenderBoton();
    void ApagarBoton();
};

#endif // MAINWINDOW_H
