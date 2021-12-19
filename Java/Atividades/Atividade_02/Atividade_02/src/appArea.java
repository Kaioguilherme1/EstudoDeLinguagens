//auth: Kaio Guilherme
//date: 19/12/2021

public class appArea {
    
    public static void main(String[] args){
        
        aFormas.Quadrado quadrado = new aFormas.Quadrado(2);
        aFormas.Circunferencia circunferencia = new aFormas.Circunferencia(2);
        aFormas.Triangulo triangulo = new aFormas.Triangulo(4,2);
        aFormas.Trapezio trapezio = new aFormas.Trapezio(8,4,2);

        System.out.println("Area do quadrado: " + quadrado.caulcularArea());
        System.out.println("Area da circunferencia: " + circunferencia.getArea());
        System.out.println("Area do triangulo: " + triangulo.caulcularArea());
        System.out.println("Area do trapezio: " + trapezio.caulcularArea());

    }
}
