# -*- coding: utf-8 -*-
"""
Created on Mon Sep 12 20:13:55 2022


"""
import Recursividad

def menu(opc):
    if (opc == 9):
        return 0

    print("\n\nIngresa una opcion")
    print("\n1. Llenar arreglo\n2. Desplegar valores del arreglo\n3. Desplegar arreglo al reves\n4. Numero de pares e impares")
    print("5. Suma de los pares\n6. Suma de los valores del arreglo\n7. El promedio de los valores del arreglo")
    opc=int(input())
    if(opc==1):
        arre.arr.clear()
        arre.aleatorio(0)
    if(opc==2):
        arre.desplegar(0)
    if(opc==3):
        arre.desplegarI(9)
    if(opc==4):
        arre.contarP(0)
        print("El numero de pares es: ",arre.pares)
        arre.contarIm(0)
        print("El numero de impares es: ",arre.impares)
    if(opc==5):
        arre.sumarPares(0)
        print("La suma de los pares es:  ",arre.sumaPares)
    if(opc==6):
        arre.sumar(0)
        print("La suma de los valores del arreglo es: ",arre.suma)
    if(opc==7):
        arre.calcPromedio()
        print("El promedio es: ",arre.promedio)
        
    if(opc<1 or opc>7):
        print("\nIngresa una opcion valida\n")

    return menu(opc)

arreglo=[]
arre=Recursividad.Arreglo(arreglo)
arre.aleatorio(0)
menu(0)