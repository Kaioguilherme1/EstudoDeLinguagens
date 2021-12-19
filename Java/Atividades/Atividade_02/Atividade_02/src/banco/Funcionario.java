//auth: Kaio Guilherme
//date: 19/12/2021

package banco;

public class Funcionario {
    private String nome;
    private String sobrenome;
    private String departamento;
    private String dataDeEntrada;
    private double salario;
    private String rg;
    private boolean estaNaEmpresa;

    public Funcionario(String nome, String sobrenome, String departamento, String dataDeEntrada, double salario, String rg) {
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.departamento = departamento;
        this.dataDeEntrada = dataDeEntrada;
        this.salario = salario;
        this.rg = rg;
        this.estaNaEmpresa = true;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getSobrenome() {
        return sobrenome;
    }

    public void setSobrenome(String sobrenome) {
        this.sobrenome = sobrenome;
    }

    public String getDepartamento() {
        return departamento;
    }

    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }

    public String getDataDeEntrada() {
        return dataDeEntrada;
    }


    public double getSalario() {
        return salario;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public boolean EstaNaEmpresa() {
        return estaNaEmpresa;
    }

    public void setEstaNaEmpresa(boolean estaNaEmpresa) {
        this.estaNaEmpresa = estaNaEmpresa;
    }

    public void aumentaSalario(double porcentagem) {
        this.salario = this.salario + (this.salario * porcentagem / 100);
    }

    public double ganhoAnual(){
        return this.salario * 12;
    }

    public void mostrar(){
        System.out.printf("\nEstá na empresa: %s\n", this.estaNaEmpresa);
        System.out.printf("Nome: %s %s\n", this.nome, this.sobrenome);
        System.out.printf("RG: %s\n", this.rg);
        System.out.printf("Salário: R$ %.2f\n", this.salario);
        System.out.printf("Ganho anual: R$ %.2f\n", this.ganhoAnual());
        System.out.printf("Departamento: %s\n", this.departamento);
        System.out.printf("Data de entrada: %s\n\n", this.dataDeEntrada);
    }

}
