#include <iostream>
using std::endl;
/**
 * @brief 
 * 
 * Ejercicio dado por la maestra
 * Minimo común divisor
 * 
 * 
 */
int mcd (int a, int b);

int main(){
    int a;
    int b;
    do{
        std::cout<<"Primer numero: "<<endl;
        if(a<0) std::cout<<"Ingresa un valor entero y postivo :  ";
        std::cin>>a;
    }while(a<0);

    do{
        std::cout<<"Segundo numero: "<<endl;
        std::cin>> b;
        if(b<0) std::cout<< "Ingresa un valor entero y postivo : ";
    }while(b<0);

    if(a>b) std::cout<< mcd(a,b);
    else if(b>a) std::cout<<mcd(b,a);



    return 0;
}

int mcd(int a, int b){
    if(b == 0) return a;
    else mcd(b, a % b);
}