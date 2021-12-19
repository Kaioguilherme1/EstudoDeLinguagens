//auth: Kaio Guilherme
//date: 19/12/2021

import banco.Funcionario;

public class appFuncionario {
    
    public static void main(String[] args){
        Funcionario F1 = new Funcionario("Hugo", "Cabrê", "TI", "19/12/2021", 2000, "123456789");
        Funcionario F2 = new Funcionario("Van", "Gogh", "artes", "17/12/2021", 1000, "987654321");
        

        F1.aumentaSalario(15);
        F1.mostrar();

        F2.aumentaSalario(10);
        F2.mostrar();
    }
}
