#include <iostream>
#include <stdlib.h>
using namespace std;
#include "listaMetodos.h"


Nodo* listaMetodos::insertarElemento(Nodo* lista, int n){
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;

  Nodo *aux1 = lista;

nuevo_nodo->siguiente = aux1;
  cout<<" El elemento "<<n<<" ha sido insertado a la lista"<<endl;
return nuevo_nodo;
}  

void listaMetodos::MostrarLista(Nodo* lista){
  Nodo  *actual = new Nodo();

  
  actual = lista;
  cout<<"La lista es: ";
  while(actual != NULL){
    cout<< actual->dato<< " -> ";
    actual = actual->siguiente;
  }
}

void listaMetodos::BuscarLista(Nodo *lista, int n){
  Nodo *actual = new Nodo();
  actual = lista;
  while(actual != NULL){
    if(actual-> dato == n){
    cout<<"Elemento "<<n<< " Si está en la lista";
    }
    else{
      cout<< "Elemento no se encuentra en la lista";
    }
    actual = actual->siguiente;
  }
  
}

void listaMetodos::EliminarNodo(Nodo *lista, int n){
  if(lista != NULL){
    Nodo *anterior = NULL;
    Nodo *aux_borrar;

    aux_borrar = lista;
    while((aux_borrar != NULL) && (aux_borrar ->dato != n)){
      anterior = aux_borrar;
      aux_borrar = aux_borrar -> siguiente;
     
  }
    if(aux_borrar == NULL){
      cout<<"Elemento no encontrado"<<endl;
    }
    else if(anterior == NULL){
      lista = lista->siguiente;
      delete aux_borrar;
    }
    else{
     anterior->siguiente = aux_borrar ->siguiente;
      delete aux_borrar;
    }
}
  }

void listaMetodos::MostrarRepetidos(Nodo *lista){
    Nodo *actual = new Nodo();
  actual = lista;
  Nodo *siguiente = new Nodo();
  siguiente = actual->siguiente;
  while (actual != NULL) {
   
    while (siguiente != NULL) {
      if (actual->dato == siguiente->dato) {
         cout << "El elemento " << siguiente->dato
             << " se encuentra repetido" << endl;
      }
      siguiente = siguiente->siguiente;
    }
    actual = actual->siguiente;
    siguiente = actual->siguiente;
  }
  
}

void listaMetodos::EliminarRepetidos(Nodo *lista){
  Nodo *actual = new Nodo();
  actual = lista;
  Nodo *siguiente = new Nodo();
  siguiente = actual->siguiente;
  while (actual != NULL) {
    while (siguiente != NULL) {
      if (actual->dato == siguiente->dato) {
        EliminarNodo(lista, siguiente->dato);
      }
      siguiente = siguiente->siguiente;
    }
    actual = actual->siguiente;
    siguiente = actual->siguiente;
  }
}

void listaMetodos::OrdenarLista(Nodo *lista){
  Nodo *aux1 = lista;
  Nodo *aux2;
  int aux;
  while (aux1->siguiente != NULL) {
    
    aux2 = aux1->siguiente;
    while (aux2 != NULL) {
      if (aux1->dato < aux2->dato) {
        aux = aux1->dato;
        aux1->dato = aux2->dato;
        aux2->dato = aux;
      }
      aux2 = aux2->siguiente;
    }
    aux1 = aux1->siguiente;
  }
  cout<<"La lista ha sido ordenada correctamente"<<endl;
}

void listaMetodos::InvertirLista(Nodo *lista){
    if (lista != NULL) {
    InvertirLista(lista->siguiente);
    cout << lista->dato << " -> ";
  }
}

void listaMetodos::PromedioPares(Nodo *lista){
  Nodo *actual = new Nodo();
  int sumatoria = 0;
  int numeroDatos = 0;
  int resultado = 0;

  actual = lista;
  
  while(actual != NULL){
    if(actual->dato % 2 == 0){
      
      sumatoria = sumatoria + actual->dato;
      numeroDatos ++; 
      cout<<"datos = "<<actual->dato<<endl;
      }
    actual = actual->siguiente;
  }
resultado =  sumatoria / numeroDatos;
  
  cout<<"sumatoria = "<<sumatoria<<endl;
  cout<<"numerodatos = "<<numeroDatos <<endl;
  cout<<"La suma promedio de los números pares es: "<<resultado<<endl;
}

void listaMetodos::PromedioImpares(Nodo *lista){
  Nodo *actual = new Nodo();
  int sumatoria = 0;
  int numeroDatos = 0;
  int resultado = 0;

  actual = lista;
  
  while(actual != NULL){
    if(actual->dato % 3 == 0){
      
      sumatoria = sumatoria + actual->dato;
      numeroDatos ++; 
      cout<<"datos = "<<actual->dato<<endl;
      }
    actual = actual->siguiente;
  }
resultado =  sumatoria / numeroDatos;
  
  cout<<"sumatoria = "<<sumatoria<<endl;
  cout<<"numerodatos = "<<numeroDatos <<endl;
  cout<<"La suma promedio de los números impares es: "<<resultado<<endl;
}

void listaMetodos::CalcularMenor(Nodo *lista){
  Nodo *actual = new Nodo();

  actual = lista;
  int menor;
  while(actual != NULL){
    if(actual->dato < menor){
      menor = actual->dato;
    }
    actual = actual->siguiente;
  }
  cout<<"El numero menor es: "<<menor<<endl;
}

void listaMetodos::CalcularMayor(Nodo *lista){
  Nodo *actual = new Nodo();

  actual = lista;
  int mayor = 0;
  while(actual != NULL){
    if(actual->dato > mayor){
      mayor = actual->dato;
    }
    actual = actual->siguiente;
  }
  cout<<"El numero mayor es: "<<mayor<<endl;
}





