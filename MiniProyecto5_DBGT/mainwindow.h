#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include <ctime>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include <about.h>
#include "heapsort.h"
#include <map>

using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    // Metodos para Mezclar(Unir)

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    about *acerca;
        // Para El Cronometro
    clock_t inicio, final;
    void iniciar(),detener();
    double getMS();
        //Para QList(La Competencia)
    QList<int> ListaQ1,ListaQ2;
    void Generar_QList(QSpinBox *box, QList<int>*lista, QListWidget *widget);
        // Para las Animaciones
    QPropertyAnimation *efectoQ, *efectoQ2;
    bool animar;
    void InsertionSort(QList<int> *lista);
    bool estaOrdenado();
    void merge_sort(QList<int> *v, int ini, int fin);
    void fusiona(QList<int> *v, int ini, int med, int fin);

private slots:

private slots:
    void on_actionInsertionSort_triggered();
    void on_actionMergeSort_triggered();
    void on_actionHeapSort_triggered();
    void on_actionQuickSort_triggered();
    void on_actionAcerca_de_QLists_vs_STL_Lists_triggered();
    void on_actionDesanimar_triggered();
    void on_actionAnimar_triggered();
    void on_GenerarQList_clicked();
};

#endif // MAINWINDOW_H
