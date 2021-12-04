//auth: Kaio Guilherme Ferraz
//date: 3/12/2021

import java.util.Scanner;

public class A01_maior_valor {
    public static void main(String[] args) throws Exception {
        int valorA, valorB;

        try (Scanner ler = new Scanner(System.in)) {
            System.out.print("Digite o primeiro valor >>> ");
            valorA = ler.nextInt();
            System.out.print("Digite o segundo valor >>> ");
            valorB = ler.nextInt();
        }


        if(valorA == valorB) {
            System.out.printf("%d é igual a %d \n", valorA, valorB);

        } else if(valorA > valorB) {
            System.out.printf("%d é maior que %d \n", valorA, valorB);
            
        } else {
            System.out.printf("%d é menor que %d \n", valorA, valorB);
        }
    }
}
