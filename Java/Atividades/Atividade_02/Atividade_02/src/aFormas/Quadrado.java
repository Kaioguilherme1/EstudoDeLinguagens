//auth: Kaio Guilherme
//date: 19/12/2021

package aFormas;

public class Quadrado {
    
    private double lado;
    

    public Quadrado(double lado) {
        this.lado = lado;
        
    }

    public double getLado() {
        return this.lado;
    }


    public double caulcularArea() {
        return (this.lado * this.lado);
    }
}
