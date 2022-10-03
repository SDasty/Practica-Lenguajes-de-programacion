
#include <iostream>
#include "Menú.h"
#include "Lista.h"
#include "Calculos.h"
#include <cstdlib>
using namespace std;



int main() {
  cout << "Hello World!\n";
  

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
           lista = insertarLista(lista,dato);
            break;
    
    case 2:    
      MostrarLista(lista);
      break;
  
    case 3: cout<< "Digite un numero para Buscar en la lista"<<endl;
      cin>>dato;
      BuscarLista(lista,dato);
      break;
    case 4: cout<<"Digite un elemento para eliminar"<<endl;
      cin>>dato;
      EliminarNodo(lista,dato);
    break; 

    case 5: PromedioPares(lista);
      break;

    case 6: PromedioImpares(lista);
      break;

    case 7: CalcularMenor(lista);
      break;

    case 8: CalcularMayor(lista);
      break;

    case 9 : MostrarRepetidos(lista);
      break;

    case 10: EliminarRepetidos(lista);
      break;

    case 11: OrdenarLista(lista);
      break;

    case 12: InvertirLista(lista);
    }
    
    
  
    }while(eleccion != 13);
}