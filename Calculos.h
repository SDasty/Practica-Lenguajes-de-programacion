#include <iostream>
#include <stdlib.h>
#include "Lista.h"
using namespace std;
#ifndef CALCULOS_H
#define CALCULOS_H

void PromedioPares(Nodo *lista){
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

void PromedioImpares(Nodo *lista){
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

void CalcularMenor(Nodo *lista){
  Nodo *actual = new Nodo();

  actual = lista;
  int menor = 100;
  while(actual != NULL){
    if(actual->dato < menor){
      menor = actual->dato;
    }
    actual = actual->siguiente;
  }
  cout<<"El numero menor es: "<<menor<<endl;
}

void CalcularMayor(Nodo *lista){
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



#endif