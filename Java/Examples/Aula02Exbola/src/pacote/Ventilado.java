package pacote;


public class Ventilado {
    
    //Atributos
    int velocidade;
    int potencia;
    String modelo;
    String Cor;
    boolean Silencioso;
    String material;
    Float peso;
    boolean ligado = false;
    boolean modoRotacao = false;


    //Metodos
    void ligar() {
        this.ligado = true;
    }

    void velocidade(int valor) {
        this.velocidade = valor;
    }

    boolean ehSilencioso() {
        return this.Silencioso;
    }

    void ligaOuDesligarModoDeRotacao() {

        this.modoRotacao = (modoRotacao == false) ? true : false;

        /*
        Equivale
        if (modoRotacao == false) {
            this.modoRotacao = true;
        }else{
            this.modoRotacao = true;
        }
        */
    }
}
