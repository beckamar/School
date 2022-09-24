#include <iostream>
#include "Arreglo.h"
using std::endl;

void static Menu(){

    int opc;
    bool response = false;
    Arreglo a =  Arreglo();


    while(!response){

        std::cout<<"\nSelecciona la operacion a realizar ";
        std::cout<<"\n1. Leer \n2. Mostrar \n3. Mostrar inversa \n4. Suma \n5. Promedio ";
        std::cout<<"\n6. Total de Elementos \n7.Suma de Pares \n8.Total de impares \n9.Salir "<<endl;
        std::cin>>opc;

        switch (opc){
        case 1:
        a.read(10);
        break;
        
        case 2:
        a.showArr(10);
        break;
        
        case 3:
        a.showInverseArr(10);
        break;

        case 4:
        std::cout<<a.sum(10);
        break;

        case 5:
        std::cout<<a.average(10);
        break;

        case 6:
        std::cout<<a.totalElements(10,0);
        break;

        case 7:
        std::cout<<a.sumPairs(10);
        break;
        
        case 8:
        std::cout<<a.totalOdd(10,0);
        break;

        case 9:
        response = true;
        break;
        
        default:
        std::cout<<"Ingresa valores dentro del rango ";
        break;
        }

    }
}