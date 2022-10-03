
#include <iostream>
#include "Menú.h"
#include "listaMetodos.h"

#include <cstdlib>
using namespace std;



int main() {
  cout << "Hello World!\n";
  
  listaMetodos *m= new listaMetodos(); 
  Nodo *lista = NULL;
  int dato;
  int eleccion;
  
  do{
    displaymenu();
    
    
  cin>>eleccion;
    if(eleccion > 13){
      cout<<"Porfavor introduzca un numero del 1 al 13"<<endl;
    }
  switch(eleccion){

    case 1: cout<<"Digite un numero para insertar a la lista"<<endl;
           cin>>dato;
           lista = m->insertarElemento(lista,dato);
            break;
    
    case 2:    
      m->MostrarLista(lista);
      break;
  
    case 3: cout<< "Digite un numero para Buscar en la lista"<<endl;
      cin>>dato;
      m->BuscarLista(lista,dato);
      break;
    case 4: cout<<"Digite un elemento para eliminar"<<endl;
      cin>>dato;
      m->EliminarNodo(lista,dato);
    break; 

    case 5: m->PromedioPares(lista);
      break;

    case 6: m->PromedioImpares(lista);
      break;

    case 7: m->CalcularMenor(lista);
      break;

    case 8: m->CalcularMayor(lista);
      break;

    case 9 : m->MostrarRepetidos(lista);
      break;

    case 10: m->EliminarRepetidos(lista);
      break;

    case 11: m->OrdenarLista(lista);
      break;

    case 12: m->InvertirLista(lista);
    }
    
    
  
    }while(eleccion != 13);
}