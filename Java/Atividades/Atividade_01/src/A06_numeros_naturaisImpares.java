//auth Kaio Guilherme
//Date 03/12/2021

import java.util.Scanner;

public class A06_numeros_naturaisImpares {
    public static void main(String[] args) {
        
        int n = 0, contador = 0;

        Scanner ler = new Scanner(System.in);

        System.out.print("Digite um valor >>> ");
        n = ler.nextInt();

        for(contador = 0; contador < n; contador++){
            if((contador % 2) != 0)
                System.out.println(contador);
        }
    }
}
