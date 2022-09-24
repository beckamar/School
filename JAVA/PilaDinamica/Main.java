package JAVA.PilaDinamica;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) throws Exception {

        menu();

 
    }


    public static void menu() throws Exception{
        Pila pila = new Pila();
        Scanner sc =  new Scanner(System.in);

        int opc;
        int eliminar;
        boolean response = false;


        while(!response){
            System.out.println("\nSelecciona la operacion a realizar");
            System.out.println("1. Insertar");
            System.out.println("2. Desplegar");
            System.out.println("3. Salir");
            System.out.println();
            opc = sc.nextInt();
    
            switch (opc){

            case 1:

            do{
                System.out.println("Dato: ");
                String dato = sc.nextLine();
                pila.push(dato);

                System.out.println("Desea eliminar elemento ingresado?  1. No      2.Si      3.Salir");
                eliminar = Integer.valueOf(sc.nextInt());
                if(eliminar == 2) pila.pop();


            }while(eliminar != 3);


            /*for (int i = 0; i < cantElementos; i++) {
                System.out.println("Dato "+i+ ": ");
                String dato =sc.nextLine();
                pila.push(dato);

            }*/
            break;

            case 2:
            pila.imprime();
            break;
            
    
            case 3:
            response = false;
            break;

            
            default:
            System.out.println("Ingresa valores dentro del rango ");
            break;

            }
        }
    }    
}



