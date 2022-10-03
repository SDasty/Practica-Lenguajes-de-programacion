#include <iostream>;
using namespace std;
#ifndef MENÚ_H
#define MENÚ_H

void displaymenu(){
    cout<<"\n|=============================================|"<<endl;
    cout<<"|                    MENÚ                     |"<<endl;
    cout<<"|=============================================|"<<endl;
    cout<<"||1. Insertar elementos a la lista           ||"<<endl;
    cout<<"||2. Mostrar elementos de la lista           ||"<<endl;
    cout<<"||3. Buscar elementos en la lista            ||"<<endl;
    cout<<"||4. Eliminar nodo de la lista               ||"<<endl;
    cout<<"||5. Calcular suma promedios pares           ||"<<endl;
    cout<<"||6. Calcular suma promedio impares          ||"<<endl;
    cout<<"||7. Calcular número menor de la lista       ||"<<endl;
    cout<<"||8. Calcular número mayor de la lista       ||"<<endl;
    cout<<"||9. Mostrar elementos repetidos de la lista ||"<<endl;
    cout<<"||10.Eliminar nodos duplicados               ||"<<endl;
    cout<<"||11.Ordenar Lista                           ||"<<endl;
    cout<<"||12.Invertir Lista                          ||"<<endl;
    cout<<"||13.Salir                                   ||"<<endl;
    cout<<"|_____________________________________________|"<<endl;
    cout<<"\n\t Ingrese su eleccion: ";
}
#endif