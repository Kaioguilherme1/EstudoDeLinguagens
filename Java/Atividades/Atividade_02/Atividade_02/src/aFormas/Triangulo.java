//auth: Kaio Guilherme
//date: 19/12/2021

package aFormas;

public class Triangulo {
    
    private double base;
    private double altura;


    public Triangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    public double getBase() {
        return base;
    }

    public double getAltura() {
        return altura;
    }

    public double caulcularArea(){
        return (this.base * this.altura)/2;
    }
}
