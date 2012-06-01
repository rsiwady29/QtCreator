#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <QList>

class heapsort
{
public:
    heapsort();
    void setarray(QList<int> array,int tam);
    void addtoar2(int data,int pos);
    void ordenar(int pos);
    void heapify();
    void heapify_r(int pos);
    void sort();
    int * getarray();
private:
    QList<int> array;
    QList<int> array2;
    int tam;
    //nodo* raiz;
    int cant;
};

#endif // HEAPSORT_H
