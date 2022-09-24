#include <iostream>
#define MAX 5


class Pila{
private:

    int dato[MAX];
    int tope;

public:
    Pila(){
        tope= -1;
    }

    int esVacia(){
        return (tope== -1)? 1:0;
    }

    int esLlena(){
        return(tope ==MAX -1)? 1:0;
    }

    void push(int x){
        if(esLlena()){
            std::cout<<"Pila llena ";
            return;
        }
        tope++;
        dato[tope] = x;
    }

    int pop(){
        int x;
        if(esVacia()){
            std::cout<<"Pila vacia";
            return -1;
        }
         x = dato[tope];
         return x;
    }

    void despliega(){
        if(esVacia()){
            std::cout<<"Pila vacia ";
            return ;
        }
        for (int i = 0; i <=tope; i++){
            std::cout<<dato[i];
        }
        
    }



};