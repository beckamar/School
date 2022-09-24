# -*- coding: utf-8 -*-
"""
Created on Mon Sep 12 20:05:48 2022


"""
import random

class Arreglo:
    arr=[]
    pares=0
    impares=0
    promedio=float
    suma=0
    sumaPares=0

    def __init__(self, arr):
        self.arr=arr
    
    def leer(self, i ):
        if(i==10):
            return
        print("Ingresa un numero: ")
        num=int(input())
        self.arr.append(num) 
        return self.leer(i+1)

    def aleatorio(self, i):
        if(i==10):
            return
        self.arr.append(random.randint(1,100))
        return self.aleatorio(i+1) 

    def desplegarI(self, i):
        if (i == -1):
            return
        print("El arreglo en la posicion: " + str(i) + " Es: " + str(self.arr[i]))
        self.desplegarI(i - 1)

    def desplegar(self, i):
        if (i == 10):
            return
        print("El arreglo en la posicion: " + str(i) + " Es: " + str(self.arr[i]))
        self.desplegar(i + 1)

    def contarP(self, i):
        if (i == 10):
            return 0
        if(self.arr[i]%2==0):
            self.pares+=1
        self.contarP(i + 1)

    def contarIm(self, i):
        if (i == 10):
            return 0
        if(self.arr[i]%2!=0):
            self.impares+=1
        self.contarIm(i + 1)

    def sumarPares(self, i):
        if (i == 10):
            return 0
        if(self.arr[i]%2==0):
            self.sumaPares+=self.arr[i]
        return self.sumarPares(i + 1)

    def calcPromedio(self):
        self.promedio=self.suma/10.0
        return self.promedio     

    def sumar(self, i):
        if (i == 10):
            return 0
        self.suma+=self.arr[i]
        return self.sumar(i + 1)