//auth: Kaio Guilherme
//Date 3/12/2021

import java.util.Scanner;

public class A04_Maior_numero {
    public static void main(String[] args){

        float valor, maior = 0, menor = 0;
        int cont =0;

        Scanner ler = new Scanner(System.in);

        
        do{
            cont++;

            System.out.print("Digite um valor >>> ");
            valor = ler.nextFloat();

            if(valor > maior)
                maior = valor;
            else if(cont == 1)
                menor = valor;
            else if(valor < menor)
                menor = valor;

            

        }while(valor >= 0);

        System.out.printf("Atual: %.2f \n maior: %.2f \n menor: %.2f \n", valor, maior, menor);

    }
}
