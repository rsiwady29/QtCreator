#include "lista.h"


lista::lista()
{
    // Constructor de la lista. Crea una nueva lista vacía y por tanto con
    // cero elementos.
    num_elementos = 0;
    E_Lista = NULL;
}


int lista::vacia()
{
    // Comprueba si la lista está vacía, devuelve 0 si no está vacía y
    // otro valor si lo está .
    return (E_Lista == NULL);
}

/*
int lista::frente()
{
    // Devuelve el primer elemento de la lista, el accesible desde el
    // atributo miembro E_Lista.
    return E_Lista->datos;
}*/

Nodo * lista::frente()
{
    // Devuelve el primer elemento de la lista, el accesible desde el
    // atributo miembro E_Lista.
    return E_Lista;
}

void lista::insertarfin(int dat)
{
    // Inserta un nuevo elemento en la lista, la inserción se realiza al
    // principio de la lista.
    Nodo *p;
    p = new Nodo;
    // Crea un nuevo nodo.
    if(p==NULL)
        exit(1);
    if(vacia())
    {
        p->datos = dat;
        //p->sig = E_Lista;
        E_Lista = p;
        F_Lista = p;
    }
    else{
        p->datos = dat;
        F_Lista->sig = p;
        F_Lista = p;
    }
    num_elementos++; // Incrementa el número de elementos
}

void lista::insertar(int dat)
{
    // Inserta un nuevo elemento en la lista, la inserción se realiza al
    // principio de la lista.
    Nodo *p;
    p = new Nodo;
    // Crea un nuevo nodo.
    if(p==NULL)
        exit(1);
    p->datos = dat;
    p->sig = E_Lista;
    E_Lista = p;
    num_elementos++; // Incrementa el número de elementos
}


void lista::borrar(void)
{
    Nodo *p;
    if (!vacia())
    {
        p = E_Lista;
        E_Lista=E_Lista->sig;
        num_elementos--;
        delete(p);
    }
}


int lista::devolver(int pos)
{
    // Devuelve el elemento de la lista que está‚ en la posición dada por
    // el parámetro pos.
    register int i = 1;
    Nodo *aux = E_Lista;
    if (!E_Lista) exit(1);
    while (i != pos)
    {
        if (aux != NULL)
        {
            aux = aux->sig;
            i++;
        }
        else exit(1); // Se pretende acceder a una posición que desborda
        //la lista.
    }
    return aux->datos;
}


int lista::cuantos_elem()
{
    // Devuelve el número de elementos de la lista.
    return num_elementos;
}


void lista::sup_lista(int dat)
{
    // Elimina un elemento de la lista, el elemento a eliminar es el que
    // viene dado por el parámetro dat.
    Nodo *ant, *p;
    int enc = 0;
    p = E_Lista;
    while ((!enc) && (p!=NULL))
    {
        // Mientras no encontremos el nodo a eliminar o no lleguemos al
        // final de la lista, buscamos el nodo.
        if (p->datos == dat)
            enc = 1;
        else
        {
            ant = p;
            p = p->sig;
        }
    }

    if (enc)
    {
        // Puede ocurrir que sea el primer elemento o que sea otro
        if (p == E_Lista)
            E_Lista = E_Lista->sig;
        else
            ant->sig = p->sig;

        delete (p);
        num_elementos--;// Decrementamos el numero de elementos
    }
}


void lista::resto()
{
    // Si la lista no está vacía adelanta el puntero de la lista.
    if (!vacia())
        E_Lista = E_Lista->sig;
}


void lista::modificar(int dat)
{
    // Modifica un dato de la lista, el dato a modificar ser el accesible
    // por el atributo miembro E_Lista, y el nuevo valor ser el que le
    // pasemos por parámetro.
    if (!vacia())
        E_Lista->datos = dat;
}


lista::~lista()
{
    // Destructor de la clase lista. Libera la memoria asignada por los
    // nodos de la lista. Esto sólo habrá que hacerlo mientras la lista no
    // esté vacía.
    while (!vacia())
    {
        Nodo *p;
        p = E_Lista;
        E_Lista = E_Lista->sig;
        delete (p);
        num_elementos--;
    }
}


void lista::borrartodo()
{
    // Es una variante del destructor de la clase lista y sirve para
    // eliminar un tipo de lista que almacena como datos de la lista
    // punteros otros elementos asignados dinámicamente.
    Nodo *aux = E_Lista;
    while ( E_Lista != NULL )
    {
        aux = E_Lista;
        E_Lista = E_Lista->sig;
        //delete aux->datos;// Libera el puntero al que apunta el dato.
        delete aux;
        // Libera el nodo.
        num_elementos--;
        // Decrementa el número de elementos.
    }
}

void lista::imprimir()
{
    // Imprime recorriendo toda la lista
    Nodo *aux = E_Lista;
    cout << "Lista";
    if(!this->vacia()){
        while (aux != NULL)
        {
            cout << "->" << aux->datos;
            aux=aux->sig;
        }
    }
    cout << "-=" << endl;
}

void lista::imprimirColor()
{
    // Imprime recorriendo toda la lista
    Nodo *aux = E_Lista;
    cout << "Lista: ";

    if(!this->vacia()){
        while (aux != NULL)
        {
            switch(aux->datos){
            case 0:
                cout << "->Rojo";
                break;
            case 1:
                cout << "->Amarillo";
                break;
            case 2:
                cout << "->Azul";
                break;
            case 3:
                cout << "->Verde";
                break;
            }

            //cout << "->" << aux->datos;
            aux=aux->sig;
        }
    }
    cout << "-=" << endl;
}

int lista::posicion(int dato)
{
    Nodo *aux = E_Lista;
    int pos=0;
    if(!this->vacia()){
        while (aux != NULL)
        {
            pos++;
            if(dato!=aux->datos)
                aux=aux->sig;
            else
                return pos;
        }
    }
    else
        return pos;
}
