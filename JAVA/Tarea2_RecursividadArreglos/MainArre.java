package JAVA.Tarea2_RecursividadArreglos;
import java.util.Scanner;


public class MainArre {
    public static void main (String[] args){

        Menu();


    }


    public static void Menu(){

        int opc;
        boolean response = false;
        Scanner sc =  new Scanner(System.in);
        Arreglo a = new Arreglo();



        while(!response){
            System.out.println("\nSelecciona la operacion a realizar");
            System.out.println("\n1. Leer \n2. Mostrar \n3. Mostrar inversa \n4. Suma \n5. Promedio ");
            System.out.println("6. Total de Elementos \n7.Suma de Pares \n8.Total de impares \n9.Salir ");
            System.out.println();
            opc = sc.nextInt();
    
            switch (opc){
            case 1:
            a.read();
            break;
            
            case 2:
            a.showArr(0);
            break;
            
            case 3:
            a.showInverseArr(10);
            break;
    
            case 4:
            System.out.println(a.sum(10));
            break;
    
            case 5:
            System.out.println(a.average(10));
            break;
    
            case 6:
            System.out.println(a.totalElements(10, 0));
            break;
    
            case 7:
            System.out.println(a.sumPairs(10));
            break;
            
            case 8:
            System.out.println(a.totalOdd(10,0));
            break;

            case 9:
            response = true;
            break;
            
            default:
            System.out.println("Ingresa valores dentro del rango ");
            break;
            }
    
        }

    }   
}
