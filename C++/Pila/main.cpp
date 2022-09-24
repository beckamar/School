#include <iostream>
#include "Pila.h"
using std::endl;

/**
 * @brief 
 * Pila hecha en clase con la maestra 
 */


int main(){
    int x, opc;
    Pila p;

    do{
        std::cout<<"\n1. Insertar "<<endl;
        std::cout<<"2. Sacar "<<endl;
        std::cout<<"3. Desplegar "<<endl;
        std::cout<<"4. Salir "<<endl;
        std::cin>>opc;

        switch (opc){
        case 1: std::cout<<"Teclea dato a insertar ";
        std::cin>>x;
        p.push(x);
        break;

        case 2: x = p.pop();
        if(x!= -1){
            std::cout<<"Dato que salio "<<x<<endl;
        }
        break;

        case 3: p.despliega();
        break;

        case 4: std::cout<< "Bye"<<endl;
        break;

        
        default: std::cout<<"Opcion Invalida ";
            break;
        }

    }while(opc != 4);



    return 0;
}