#ifndef LISTA_H
#define LISTA_H

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

enum colores {ROJO, AMARILLO, AZUL, VERDE};

struct Nodo{
    int datos;
    Nodo *sig;
};

class lista
{
private:
    Nodo *E_Lista;// Apunta al primer nodo de la lista.
    Nodo *F_Lista;
    int num_elementos; // Mantiene el n£mero de elementos de la lista.

public:
    lista(void); // Constructor
    ~lista(void);// Destructor
    int vacia(void); // Comprueba si la lista está vacía.
    //int frente(void);// Devuelve el elemento apuntado de la lista
    Nodo * frente(void);
    void insertar(int dat);// Inserta un nuevo dato dat en lista.
    void insertarfin(int dat);// Inserta un nuevo dato dat en lista.
    void borrar(void); // Elimina el frente de la lista
    int cuantos_elem();// Devuelve número de elementos
    void modificar(int dat); // Modifica el dato frente de lista
    void borrartodo(); // Elimina toda la lista
    int devolver(int pos);// Devuelve un elemento de la lista.
    void sup_lista(int dat); // Elimina un dato dat de la lista
    void resto(); // Devuelve el resto de la lista
    void imprimir(); // Imprime la lista
    void imprimirColor(); // Imprime la lista
    int posicion(int dato);
};
// lista.


#endif // LISTA_H
