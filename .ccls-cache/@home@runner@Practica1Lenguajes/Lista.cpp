#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
  int dato;
  Nodo *siguiente;
};



void insertarLista(Nodo *&lista, int n){
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;

  Nodo *aux1 = lista;

nuevo_nodo->siguiente = aux1;
cout<<" El elemento"<<n<<"ha sido insertado a la lista"<<endl;
}

void MostrarLista_(Nodo* lista){
  Nodo *actual = new Nodo();
  
  actual = lista; 
  while(actual != NULL){
    cout<<actual->dato<< " ->";
    actual = actual->siguiente;
  }
}
  