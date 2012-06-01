#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qsrand(time(0));
    animar = false;

    QMenu *menu = new QMenu(this);
    menu->addAction(ui->actionHeapSort);
    menu->addAction(ui->actionMergeSort);
    menu->addAction(ui->actionQuickSort);
    menu->addAction(ui->actionInsertionSort);
    menu->setStyleSheet("QMenu{ background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(170, 170, 127, 255), stop:1 rgba(255, 255, 255, 255));"
                        "border-style: outset;"
                        "border-width: 1px;"
                        "border-radius: 10px;"
                        "border-color: black;"
                        "font: bold 12px;"
                        "min-width:4m;"
                        "padding: 6px;} QMenu::item:selected {      background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(170, 170, 127, 255), stop:1 rgba(255, 255, 255, 255));}");

    ui->ordenar_QLists->setMenu(menu);

    this->setMaximumWidth(542);this->setMinimumWidth(542);
    this->setMaximumHeight(429);this->setMinimumHeight(429);
    QPlastiqueStyle *xp = new QPlastiqueStyle();
    setStyle(xp);
    ui->lcdNumber->setStyle(xp);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::iniciar()
{
    inicio = clock();
}

void MainWindow::detener()
{
    final = clock();
}

double MainWindow::getMS()
{
    return ((final - inicio)*1000)/CLOCKS_PER_SEC;
}

void MainWindow::Generar_QList(QSpinBox *box, QList<int>*lista, QListWidget *widget)
{
    for(int i=0; i<box->value();i++)
        lista->push_back(qrand()%20);

    //Agregar Graficamente
    for(int i=0; i<box->value();i++)
        widget->addItem(QString::number(lista->at(i),10));
}

void MainWindow::on_GenerarQList_clicked()
{
    //Vaciar Listas(Graficamente)!
    ui->listWidgetQList->clear();
    ListaQ1.clear();

    if(animar){
        efectoQ->start();
    }

    this->Generar_QList(this->ui->spinBoxQL1,&ListaQ1,this->ui->listWidgetQList);
}

void MainWindow::on_actionAnimar_triggered()
{
    animar=true;
    efectoQ= new QPropertyAnimation(ui->listWidgetQList ,"geometry");
    efectoQ->setDuration(1500);
    efectoQ->setEasingCurve(QEasingCurve::InOutQuint);
    efectoQ->setStartValue(QRect(410,410,81,191+200));
    efectoQ->setEndValue(QRect(270,160,81,191));

    efectoQ2= new QPropertyAnimation(ui->listWidgetFinal ,"geometry");
    efectoQ2->setDuration(1500);
    efectoQ2->setEasingCurve(QEasingCurve::InOutQuint);
    efectoQ2->setStartValue(QRect(410,410,81,191+200));
    efectoQ2->setEndValue(QRect(430,160,81,191));

}

void MainWindow::on_actionDesanimar_triggered()
{
    animar=false;
}

void MainWindow::on_actionAcerca_de_QLists_vs_STL_Lists_triggered()
{
    acerca = new about(this);
    acerca->open();
}

bool MainWindow::estaOrdenado()
{
    for(int i=0; i<ListaQ1.count(); i++)
    {
        if((i+1)<ListaQ1.count())
        {
            if(ListaQ1.at(i)<=ListaQ1.at(i+1))
            {
                 continue;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

void MainWindow::on_actionHeapSort_triggered()
{

    ui->listWidgetFinal->clear();

    ListaQ2=ListaQ1;

    //De aqui en adelante el ordenamiento!
    if(!estaOrdenado())
    {
        this->iniciar();
        multimap<int,int> map;
        for(int i=0; i<ListaQ1.count(); i++)
        {
            map.insert(pair<char,int>(ListaQ1.at(i),ListaQ1.at(i)));
        }

        ListaQ2.clear();
        multimap<int,int>::iterator it;
        for(it=map.begin(); it!=map.end(); it++)
        {
            ListaQ2.push_back((*it).second);
        }
        this->detener();

        double segs = this->getMS()/1000;
        ui->lcdNumber->display(segs);
    }

    for(int i=0; i<ListaQ2.count(); i++)
        ui->listWidgetFinal->addItem(QString::number(ListaQ2.at(i),10));
}

void MainWindow::on_actionMergeSort_triggered()
{
    ListaQ2.clear();
    ui->listWidgetFinal->clear();

    ListaQ2=ListaQ1;

    //De aqui en adelante el ordenamiento!
    if(!this->estaOrdenado())
    {
        this->iniciar();
        merge_sort(&ListaQ2,0,ListaQ2.count()-1);
        this->detener();

        double segs = this->getMS()/1000;
        ui->lcdNumber->display(segs);
    }

    for(int i=0; i<ListaQ2.count(); i++)
        ui->listWidgetFinal->addItem(QString::number(ListaQ2.at(i),10));
}

void MainWindow::fusiona(QList<int> *v, int ini, int med, int fin)
{
    int *aux=new int[fin - ini + 1];
    int i = ini;
    int j = med + 1;
    int k = 0;

    while (i <= med && j <= fin) {
        if (v->at(i) < v->at(j)) {
            aux[k] = v->at(i);
            i++;
        }
        else {
            aux[k] = v->at(j);
            j++;
        }
        k++;
    }

    while (i <= med) {
        aux[k] = v->at(i);
        i++;
        k++;
    }

    while (j <= fin) {
        aux[k] = v->at(j);
        j++;
        k++;
    }

    for (int n = 0; n < (fin - ini + 1); ++n) v->replace(ini + n, aux[n]);
}

void MainWindow::merge_sort(QList<int> *v, int ini, int fin)
{
    if (ini < fin)
    {
        int med = (ini + fin)/2;
        merge_sort(v, ini, med);
        merge_sort(v, med + 1, fin);
        fusiona(v, ini, med, fin);
    }
}

void MainWindow::on_actionQuickSort_triggered()
{
    ListaQ2.clear();
    ui->listWidgetFinal->clear();

    ListaQ2=ListaQ1;

    if(!this->estaOrdenado())
    {
        this->iniciar();
        qSort(ListaQ2);
        this->detener();
        double segs = this->getMS()/1000;
        ui->lcdNumber->display(segs);
    }

    for(int i=0; i<ListaQ2.count(); i++)
        ui->listWidgetFinal->addItem(QString::number(ListaQ2.at(i),10));
}

void MainWindow::on_actionInsertionSort_triggered()
{
    ListaQ2.clear();
    ui->listWidgetFinal->clear();

    ListaQ2=ListaQ1;

    //De aqui en adelante el ordenamiento!
    if(!this->estaOrdenado())
    {
        this->iniciar();
        InsertionSort(&ListaQ2);
        this->detener();
        double segs = this->getMS()/1000;
        ui->lcdNumber->display(segs);
    }

    for(int i=0; i<ListaQ2.count(); i++)
        ui->listWidgetFinal->addItem(QString::number(ListaQ2.at(i),10));
}

void MainWindow::InsertionSort(QList<int> *lista)
{
    int j, val;
    for(int i = 1; i < lista->count(); i++)
    {
        val = lista->at(i);
        j = i-1;

        while(j >= 0 && lista->at(j) > val)
        {
           lista->replace(j+1,lista->at(j));
           j--;
        }
        lista->replace(j+1,val);
    }
}
