
package JAVA.PilaDinamica;
import java.util.Scanner;


public class Pila {
    Scanner sc = new Scanner(System.in);
    
    private Nodo tope;
    private String nombre;

    public Pila(){
        this("Pila de String ");
    }

    public Pila(String nombre){
        tope = null;
        this.nombre = nombre;
    }

    public boolean estaVacia() {
        return tope == null;
    }

    public void push(String elemento) throws Exception{
        if(estaVacia()){
            tope = new Nodo(elemento);
        }else{
            tope = new Nodo(elemento, tope);
        }
    }

    public String pop() throws Exception{
        if(estaVacia()){
            throw new Exception("Pila vacia, no se puede extraer");
        }else{
            String elemento = tope.obtenDato();
            tope = tope.obtenSiguiente();
            return elemento;
        }
    }

    public void imprime(){
        if(estaVacia()){
            System.out.println("Vacia ");
        }else{
            System.out.println(nombre);
            Nodo actual = tope;
            while(actual != null){
                System.out.println(actual.obtenDato());
                actual = actual.obtenSiguiente();
            }
            System.out.println();
        }
    }
}

