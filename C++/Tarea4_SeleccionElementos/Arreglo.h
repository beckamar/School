#include <iostream>
using std::endl;
/**
 * @brief 
 * Instrucciones
Ejercicio para hoy en clase (en 2 lenguajes):

Programa recursivo con el siguiente arreglo:  [-10, 4, -3, 1, 3, -5, 0, -20, 7, 9, -50, -43, 20, 10, 15, -30, -25, -60]
Llenar dos arreglos separando los positivos y negativos.
Desplegar cada uno en pantalla también recursivamente.
 * 
 */
class Arreglo{

    int arre[18] = {-10,4,-3,1,3,-5,0,-20,7,9,-50,-43,20,10,15,-30,-25,-60};
    int arrePositivos[18] = {};
    int arreNegativos[18] = {};

public:

    int recursividadPos(int i, int p){
        if(i > 0){
            if(arre[i] >= 0){
                arrePositivos[p] = arre[i];
                recursividadPos(i-1, p+1);
                return  arrePositivos[p];
            }else{
                return recursividadPos(i-1, p);
            }
        }
        return 0;
    }

    int recursividadNeg(int i, int p){
        if(i > 0){
            if(arre[i] >= 0){
                arreNegativos[p] = arre[i];
                recursividadNeg(i-1, p+1);
                return  arreNegativos[p];
            }else{
                return recursividadNeg(i-1, p);
            }
        }
        return 0;
    }


    /*int mostrarArrePos(int p){
        if(p != 0){
            std::cout<<" "<<arrePositivos[p]<<"  ";
            return mostrarArrePos(p-1);
        }
        return 0;
    }*/

    int mostrarArrePos(int i){
        if(i > 0){
            if(arrePositivos[i] > 0){
                std::cout<<arrePositivos[i]<<" ";
                mostrarArrePos(i-1);
            }else{
                return 0 + mostrarArrePos(i-1);
            }
        }
        return 0;
    }


    int mostrarArreNeg(int i){
        if(i > 0){
            if(arreNegativos[i]< 0){
                std::cout<<arreNegativos[i] <<" ";
                mostrarArreNeg(i-1);

            }else{
                return 0 + mostrarArreNeg(i-1);
            }
        }
        return 0;
    } 


};
