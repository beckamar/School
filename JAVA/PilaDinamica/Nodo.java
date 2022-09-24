package JAVA.PilaDinamica;

public class Nodo {

    private  String dato;
    private  Nodo nodoSiguiente;


    Nodo(String dato){
        this(dato,  null);
    }

    Nodo(String dato, Nodo nodoSiguiente){
        this.dato = dato;
        this.nodoSiguiente = nodoSiguiente;
    }

    public void estableceDato(String dato) {
        this.dato = dato;
    }

    public String obtenDato() {
        return dato;
    }

    public void estableceSiguiente(Nodo nodoSiguiente) {
        this.nodoSiguiente = nodoSiguiente;
    }   

    public Nodo obtenSiguiente() {
        return nodoSiguiente;
    }

}
