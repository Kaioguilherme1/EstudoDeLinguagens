//auth; Kaio Guilherme
//Date: 4/12/2021

import java.util.Scanner;

public class A02_verificador_de_sinal {
    
   
    public static void main(String[] args) {

        Scanner ler = new Scanner(System.in);
        
        System.out.print("Digite um valor >>> ");
        float valorA = ler.nextFloat();
        

        if(valorA >= 0){
            System.out.printf("%.2f é positivo, seu dobro é : %.2f \n", valorA, (2*valorA));
        }else if(valorA < 0){
            System.out.printf("%.2f é negativo, elavo ao quadrado é: %.2f \n", valorA, (valorA * valorA));
        }else{
            System.out.printf("%.2f valor é nulo \n", valorA);
        }

    }
}
