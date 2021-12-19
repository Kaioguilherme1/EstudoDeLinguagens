package aConta;

public class Conta {

    private long numConta;
    private Cliente Titular;
    private Cliente dependente;
    private double saldo;
    private double limite;

    public Conta(long numConta, double saldo, double limite, Cliente Titular) {

        this.numConta = numConta;
        this.Titular = Titular;
        this.saldo = saldo;
        this.limite = limite;
    }

    public long getNumConta() {
        return numConta;
    }

    public String getNome() {
        return Titular.getNome() + " " + Titular.getSobrenome();
    }

    public double getSaldo() {
        return saldo;
    }

    public double getLimite() {
        return limite;
    }

    public long getRg() {
        return Titular.getRg();
    }

    public double getcpf() {
        return Titular.getCpf();
    }

    public void setDependente(Cliente dependente) {
        this.dependente = dependente;
    }

    public Cliente getDependente() {
        return this.dependente;
    }

    public boolean sacar(double valor) {

        if (valor <= this.saldo) {
            this.saldo = this.saldo - valor; // this.saldo -= valor;
            return true;
        } else {
            return false;
        }
    }

    public void depositar(double valor) {
        this.saldo += valor; // this.saldo = this.saldo + valor;
    }

}

