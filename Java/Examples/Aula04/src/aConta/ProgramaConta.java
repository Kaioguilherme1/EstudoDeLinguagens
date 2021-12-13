package aConta;

public class ProgramaConta {

    public static void main(String[] args) {

        Cliente cliente01 = new Cliente("João", "Albuquerque", 12526589, 4568875);
        Cliente cliente02 = new Cliente("Fernando", "Silva", 125456489, 44848475);
        Cliente cliente03 = new Cliente("Ana", "Sousa", 1258995589, 4568875);
        Cliente cliente04 = new Cliente("ane Caroline", "chagas", 12526589, 4568875);
        Cliente cliente05 = new Cliente("Bolsonaro", "Dasiolo", 12526589, 4568875);

        Cliente dependente01 = new Cliente("João", "Albuquerque junior", 12526589, 4568875);

        Conta conta01 = new Conta(76521, 50520.0, 1000.0, cliente01);
        Conta conta02 = new Conta(98213, 2500.0, 300.0, cliente02);        
        Conta conta03 = new Conta(32466, 530.0, 200.0, cliente03);
        Conta conta04 = new Conta(10051, 650.0, 100.0, cliente04);

        //Conta conta05 = conta01;
        Conta conta05 = new Conta(10, 10000, 5000, cliente05);
        
        conta01.setDependente(dependente01);

        if (conta01.sacar(2000)) {
            System.out.println("Saque realizado com sucesso!");
        } else {
            System.out.println("Saldo insuficiente!");
        }

        if (conta02.sacar(5000)) {
            System.out.println("Saque realizado com sucesso!");
        } else {
            System.out.println("Saldo insuficiente!");
        }

        conta01.depositar(.52);
        conta05.depositar(1000);

        System.out.println("número da conta: \t" + conta01.getNumConta() +
                "\nnome: \t\t\t" + conta01.getNome() +
                "\nsaldo: \t\t\t" + conta01.getSaldo() +
                "\nlimite: \t\t" + conta01.getLimite() +
                "\nNome do Dependente: \t\t" + conta01.getDependente());


        System.out.println("\nnúmero da conta: \t" + conta02.getNumConta() +
                "\nnome: \t\t\t" + conta02.getNome() +
                "\nsaldo: \t\t\t" + conta02.getSaldo() +
                "\nlimite: \t\t" + conta02.getLimite());

        System.out.println("\nnúmero da conta: \t" + conta03.getNumConta() +
                "\nnome: \t\t\t" + conta03.getNome() +
                "\nsaldo: \t\t\t" + conta03.getSaldo() +
                "\nlimite: \t\t" + conta03.getLimite());

        System.out.println("\nnúmero da conta: \t" + conta04.getNumConta() +
                "\nnome: \t\t\t" + conta04.getNome() +
                "\nsaldo: \t\t\t" + conta04.getSaldo() +
                "\nlimite: \t\t" + conta04.getLimite());

    }

}