package JAVA.Tarea3_Recursividad;
import java.util.Scanner;

public class Potencia {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("\nBase: ");
        int base = sc.nextInt();

        System.out.println("Exponente: ");
        int exponente = sc.nextInt();

        System.out.println(potencia(base, exponente));
        
    }

    public static int potencia(int base, int exponente) {
        if(exponente == 0) return 1;
        return base *= potencia(base, exponente -1);
    }
   
}
