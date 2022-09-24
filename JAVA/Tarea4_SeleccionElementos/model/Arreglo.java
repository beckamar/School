package JAVA.Tarea4_SeleccionElementos.model;

public class Arreglo {

    int[] arre = {-10,4,-3,1,3,-5,0,-20,7,9,-50,-43,20,10,15,-30,-25,-60};
    int arrePositivos[] = new int [18];
    int arreNegativos[] = new int[18];


    public int recursividad(int i){
        if(i > 0){
            if(arre[i] >= 0){
                arrePositivos[i] = arre[i];
                recursividad(i-1);
                return  arrePositivos[i];
            }else {
                arreNegativos[i] = arre[i];
                recursividad(i-1);
                return arreNegativos[i];
            }
        }
        return 0;
    }


    public int mostrarArrePos(int i){
        if(i > 0){
            if(arrePositivos[i] > 0){
                System.out.println(arrePositivos[i]);
                mostrarArrePos(i-1);
            }else{
                return 0 + mostrarArrePos(i-1);
            }
        }
        return 0;
    }


    public int mostrarArreNeg(int i){
        if(i > 0){
            if(arreNegativos[i]< 0){
                System.out.println(arreNegativos[i]);
                mostrarArreNeg(i-1);

            }else{
                return 0 + mostrarArreNeg(i-1);
            }
        }
        return 0;
    }   
}
