package JAVA.Tarea3_Recursividad;

public class Fibonacci {
    public static void main(String[] args) {

        int num = 1;
        System.out.println("\nFIBONACCI");
        while(num < 9 ){
            System.out.println(fibonacci(num));
            num += 1;
        }
    
    }


    public static int fibonacci(int num) {
        if (num == 0 || num ==1 ){
            return 1;
        } else{
            return fibonacci(num-1)+ fibonacci(num-2);
        }
    } 
    
}
