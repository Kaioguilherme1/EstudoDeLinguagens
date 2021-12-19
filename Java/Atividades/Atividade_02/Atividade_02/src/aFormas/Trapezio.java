//auth: Kaio Guilherme
//date: 19/12/2021

package aFormas;

public class Trapezio {
    
    private double baseMaior;
    private double baseMenor;
    private double altura;

    public Trapezio(double baseMaior, double baseMenor, double altura) {
        this.baseMaior = baseMaior;
        this.baseMenor = baseMenor;
        this.altura = altura;
    }

    public double getBaseMaior() {
        return baseMaior;
    }

    public double getBaseMenor() {
        return baseMenor;
    }

    public double getAltura() {
        return altura;
    }

    public double caulcularArea() {
        return ((this.baseMaior + this.baseMenor) * this.altura) / 2;
    }
}
