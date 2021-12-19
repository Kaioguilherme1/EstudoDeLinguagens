//auth: Kaio Guilherme
//date: 19/12/2021

package aFormas;

public class Circunferencia {
    
    public double raio;
    public double pi = 3.14;

    public Circunferencia(double raio){
        this.raio = raio;
    }

    public double getRaio(){
        return this.raio;
    }

    public double getArea(){
        return (this.pi * this.raio * this.raio);
    }
}
