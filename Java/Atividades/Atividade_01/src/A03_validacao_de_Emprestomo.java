//args: Kaio Guilherme
//Date: 3/12/2021

import java.util.Scanner;

public class A03_validacao_de_Emprestomo {
    public static void main(String[] args) throws Exception {

        Scanner ler = new Scanner(System.in);

        System.out.print("Digite seu salario mensal >>> ");
        float Salario = ler.nextFloat();
        System.out.print("Digite o valor da prestação do emprestimo Requerido >>> ");
        float prestacao = ler.nextFloat();

        if(prestacao > (Salario * 0.2)){
            System.out.println("Empréstimo não concedido!");
        }else{
            System.out.println("Empréstimo concedido.");
        }

    }
}
