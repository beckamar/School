#include <ctime>
#include <iostream>

class Arreglo{

    int arre[10];


public:

    Arreglo(){
        srand(time(0));
        for (int i = 0; i <= 10; i++){
            arre[i] = seed(10);
        }   
    }
    int seed(int n){
        return 1+rand() % n;
    }

    void read(int i){
        if(i != 0){
            std::cout<<"- ";
            std::cin>> arre[i];
            read(i - 1);
        }
    }

    void showArr(int i){
        if(i != 0){
            std::cout<<arre[i]<<" ";
            showArr(i-1);
        }

    }

    void showInverseArr(int i){
        if(i != 0) {
            showInverseArr(i-1);
            std::cout<<arre[i]<<" ";
        }
    }

    int sum(int i){
        int totalSum = 0;
        if(i > 0){
            totalSum = arre[i] + sum(i-1);
        } 
        return totalSum;
    }

    float average(int i){
        float totalAverage = sum(i) / i;

        return totalAverage;
    }

    int totalElements(int i, int count){
        if(i > 0){
            return totalElements(i-1, count+1);
        }
        return count;
    }

    int sumPairs(int i){
        if( i > 0){
           if(arre[i] % 2 == 0){
                return arre[i] + sumPairs(i-1);
            }     
            else{
                return 0 + sumPairs(i-1);
            }     
        }
        return 0;    
    }

    int totalOdd(int i, int count){
        if(i > 0){
            if(arre[i] % 2 != 0){
                return totalOdd(i-1, count +1);
            }
            else{
                return 0 + totalOdd(i-1, count);
            }  
        }
        return count;
    }

};