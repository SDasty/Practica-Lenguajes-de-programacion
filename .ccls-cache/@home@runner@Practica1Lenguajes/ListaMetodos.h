#include <iostream>
#include <stdlib.h>
using namespace std;
#ifndef listaMetodos_H
#define listaMetodos_H

struct Nodo{
  int dato;
  Nodo *siguiente;
};

class listaMetodos{

public:

Nodo* insertarLista(Nodo* lista, int n);

void MostrarLista(Nodo* lista);

void BuscarLista(Nodo *lista, int n);

void EliminarNodo(Nodo *lista, int n);

void MostrarRepetidos(Nodo *lista);

void EliminarRepetidos(Nodo *lista);

void OrdenarLista(Nodo *lista);

void InvertirLista(Nodo *lista);

void PromedioPares(Nodo *lista);

void PromedioImpares(Nodo *lista);

void CalcularMenor(Nodo *lista);

void CalcularMayor(Nodo *lista);

};


#endif 